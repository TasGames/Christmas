// Thomas Arthur Simon

#include "PlayerPawn.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Marker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Marker"));
	Marker->SetupAttachment(RootComponent);
	Marker->bCastDynamicShadow = false;
	Marker->CastShadow = false;

	float Power = 0.0f;
	bool CanSetPower = true;
	bool CanLaunch = false;
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

}

void APlayerPawn::Rotate(float Val)
{

}

void APlayerPawn::Launch()
{

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

