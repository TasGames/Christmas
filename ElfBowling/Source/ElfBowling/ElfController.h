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

	FVector SpawnLoc;
	FRotator Rot;

	void Spawn();

public:	
	AElfController();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
