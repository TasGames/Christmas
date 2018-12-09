// Thomas Arthur Simon

#include "DestroyBall.h"


// Sets default values
ADestroyBall::ADestroyBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADestroyBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADestroyBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

