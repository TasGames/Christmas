// Thomas Arthur Simon

#include "BowlingBall.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABowlingBall::ABowlingBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	Ball->SetupAttachment(RootComponent);
	Ball->SetSimulatePhysics(true);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = Ball;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 1.0f; 

	Roll = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	Roll->SetupAttachment(Ball);
	Roll->bStopWhenOwnerDestroyed = true;

}

// Called when the game starts or when spawned
void ABowlingBall::BeginPlay()
{
	Super::BeginPlay();

	Roll->Play();
}

// Called every frame
void ABowlingBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float Speed = ProjectileMovement->InitialSpeed / 1000.0f;
	Roll->SetVolumeMultiplier(Speed);

	if (GetActorLocation().Z < 50.0f)
	{
		Roll->SetPitchMultiplier(0.1f);
		Speed *= 1.2f;
	}

}
