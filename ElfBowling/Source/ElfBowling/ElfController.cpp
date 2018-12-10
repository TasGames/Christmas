// Thomas Arthur Simon

#include "ElfController.h"
#include "Elf.h"

// Sets default values
AElfController::AElfController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Rot = FRotator::ZeroRotator;
	SpawnLoc = FVector(-90.0f, -970.0f, 55.0);

}

// Called when the game starts or when spawned
void AElfController::BeginPlay()
{
	Super::BeginPlay();
	
	Spawn();
}

// Called every frame
void AElfController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AElfController::Spawn()
{
	FActorSpawnParameters SpawnParams;
	int ElfNum = 4;

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < ElfNum; i++)
		{
			AElf* Elf = GetWorld()->SpawnActor<AElf>(ElfClass, SpawnLoc, Rot, SpawnParams);
			ArrayOfElves.Add(Elf);
			SpawnLoc.X += 60.0f;
		}

		ElfNum -= 1;
		SpawnLoc.Y += 50.0f;

		if (j == 0)
			SpawnLoc.X = -60.0f;
		else if (j == 1)
			SpawnLoc.X = -30.0f;
		else
			SpawnLoc.X = 0.0f;
	}

}
