// Thomas Arthur Simon

#include "BowlingBall.h"
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
	ProjectileMovement->InitialSpeed = 2000.f;
	ProjectileMovement->MaxSpeed = 2000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 1.0f; 
}

// Called when the game starts or when spawned
void ABowlingBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABowlingBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

