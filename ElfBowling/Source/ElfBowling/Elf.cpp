// Thomas Arthur Simon

#include "Elf.h"

// Sets default values
AElf::AElf()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ELfMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Elf"));
	ELfMesh->SetupAttachment(RootComponent);
	ELfMesh->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void AElf::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElf::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

