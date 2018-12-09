// Thomas Arthur Simon

#include "DestroyBall.h"
#include "BowlingBall.h"
#include "Components/BoxComponent.h"

// Sets default values
ADestroyBall::ADestroyBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetupAttachment(RootComponent);
	BoxComponent->InitBoxExtent(FVector(200, 100, 50));
	BoxComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ADestroyBall::OnBeginOverlap);
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

void ADestroyBall::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != this)
	{
		ABowlingBall *B = Cast<ABowlingBall>(OtherActor);
		if (B != NULL)
		{

		}
	}
}