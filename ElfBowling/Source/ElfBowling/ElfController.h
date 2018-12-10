// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElfController.generated.h"

UCLASS()
class ELFBOWLING_API AElfController : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Elf)
	TSubclassOf<class AElf> ElfClass;

	TArray<AElf*> ArrayOfElves;
	TArray<FVector> ArrayOfPositions;

	FVector SpawnLoc;
	FRotator Rot;

public:	
	AElfController();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int EFirstScore;
	int ESecondScore;
	int ETotalScore;

	bool FirstRound;

	void Spawn();
	void RemoveElves();
	void RespawnElves();
	
};
