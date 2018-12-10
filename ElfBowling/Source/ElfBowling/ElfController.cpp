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
	EFirstScore = 0;
	ESecondScore = 0;
	ETotalScore = 0;
	HowMany = 0;
	FirstRound = true;
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

	Rot = FRotator::ZeroRotator;
	SpawnLoc = FVector(-90.0f, -970.0f, 55.0);

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

void AElfController::RemoveElves()
{
	int NumOfElves = ArrayOfElves.Num();
	HowMany = 0;

	for (int i = 0; i < NumOfElves; i++)
	{
		AElf* Elf = ArrayOfElves[i];

		if (Elf->GetElfRot().Roll > Elf->GetActorRotation().Roll + 1 || Elf->GetElfRot().Roll < Elf->GetActorRotation().Roll - 1)
		{
			Elf->Destroy();
			ETotalScore += 1;
		}
		else if (Elf->GetElfRot().Pitch > Elf->GetActorRotation().Pitch + 1 || Elf->GetElfRot().Pitch < Elf->GetActorRotation().Pitch - 1)
		{
			Elf->Destroy();
			ETotalScore += 1;
		}
		else if (Elf->GetActorLocation().Z < 50.0f)
		{
			Elf->Destroy();
			ETotalScore += 1;
		}
		else
		{
			ArrayOfPositions.Add(Elf->GetElfPos());
			Elf->Destroy();
			HowMany += 1;
		}
	}

	ArrayOfElves.Empty();


	if (FirstRound == false)
	{
		ArrayOfPositions.Empty();
	}
}

void AElfController::RespawnElves()
{
	FActorSpawnParameters SpawnParams;

	int NumOfPos = ArrayOfPositions.Num();
	for (int i = 0; i < NumOfPos; i++)
	{
		FVector Loc = ArrayOfPositions[i];

		AElf* Elf = GetWorld()->SpawnActor<AElf>(ElfClass, Loc, Rot, SpawnParams);
		ArrayOfElves.Add(Elf);
	}

	ArrayOfPositions.Empty();
}
