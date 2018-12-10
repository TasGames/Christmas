// Thomas Arthur Simon

#include "PlayerPawn.h"
#include "BowlingBall.h"
#include "Components/ArrowComponent.h"
#include "ElfController.h"
#include "EngineUtils.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	RootComponent = ArrowComponent;
	ArrowComponent->ArrowColor = FColor(150, 200, 255);
	ArrowComponent->bTreatAsASprite = true;

	Marker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Marker"));
	Marker->SetupAttachment(ArrowComponent);
	Marker->bCastDynamicShadow = false;
	Marker->CastShadow = false;
	Marker->SetRelativeLocation(FVector(900.0f, 0.0f, -90.0f));
	Marker->SetRelativeLocation(FVector(0.0f, 90.0f, 0.0f));

	RoundCount = 1;
	TotVal = -90.0f;
	Power = 100.0f;
	CanSetPower = true;
	CanLaunch = true;
	Done = false;
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	for (TActorIterator<AElfController> It(World, AElfController::StaticClass()); It; ++It)
	{
		AElfController* EC = *It;

		if (EC != NULL)
			E = EC;
	}
	
	OriginPos = GetActorLocation();
	OriginRot = GetActorRotation();

	if (Music != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, Music, GetActorLocation());
	}
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FirstScore = E->EFirstScore;
	SecondScore = E->ESecondScore;
	TotalScore = E->ETotalScore;

}

void APlayerPawn::Move(float Val)
{
	FVector Pos = GetActorLocation();
	Pos.X += Val;

	if (Pos.X > 120.0f)
		Pos.X = 120.0f;
	else if (Pos.X < -120.0f)
		Pos.X = -120.0f;

	SetActorLocation(Pos);
}

void APlayerPawn::Rotate(float Val)
{
	FRotator Rot = GetActorRotation();

	Rot.Yaw += Val;
	TotVal += Val;

	if (TotVal > -80.0f)
	{
		Rot.Yaw = -80.0f;
		TotVal = -80.0f;
	}
	else if (TotVal < -100.0f)
	{
		Rot.Yaw = -100.0f;
		TotVal = -100.0f;
	}

	SetActorRotation(Rot);
}

void APlayerPawn::Launch()
{
	if (CanLaunch == true)
	{
		Marker->SetVisibility(false);

		FVector SpawnLoc = GetActorLocation();
		SpawnLoc.Z -= 60;

		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			Ball = World->SpawnActor<ABowlingBall>(BowlingBallClass, SpawnLoc, GetActorRotation());
			GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &APlayerPawn::DestroyBall, 5.0f, false);
		}

		CanLaunch = false;
		Done = false;
	}
}

void APlayerPawn::DestroyBall()
{
	Ball->Destroy();

	E->RemoveElves();

	if (E->HowMany == 0)
		E->FirstRound = false;

	if (E->FirstRound == true)
	{
		E->RespawnElves();
		E->FirstRound = false;
	}
	else
	{
		E->Spawn();
		E->FirstRound = true;
		RoundCount += 1;
	}

	if (RoundCount == 6)
		Win();

	TotVal = -90.0f;
	SetActorLocation(OriginPos);
	SetActorRotation(OriginRot);
	Marker->SetVisibility(true);
	CanLaunch = true;
}

void APlayerPawn::Win_Implementation()
{

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Move", this, &APlayerPawn::Move);
	PlayerInputComponent->BindAxis("Rotate", this, &APlayerPawn::Rotate);

	PlayerInputComponent->BindAction("Launch", IE_Pressed, this, &APlayerPawn::Launch);
}

