// Thomas Arthur Simon

#include "PlayerPawn.h"
#include "BowlingBall.h"
#include "Components/ArrowComponent.h"

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
	Marker->SetRelativeLocation(FVector(900.0f, 0.0f, 0.0f));
	Marker->SetRelativeLocation(FVector(0.0f, 90.0f, 0.0f));


	TotVal = -90.0f;
	Power = 0.0f;
	CanSetPower = true;
	CanLaunch = true;
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
			World->SpawnActor<ABowlingBall>(BowlingBallClass, SpawnLoc, GetActorRotation());

		CanLaunch = false;
	}
}

void APlayerPawn::PowerChange()
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

