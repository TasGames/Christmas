// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Elf.generated.h"

UCLASS()
class ELFBOWLING_API AElf : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* ELfMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector ElfPos;
	FRotator ElfRot;

public:	
	AElf();

	void SetElfPos();
	FVector GetElfPos();
	void SetElfRot();
	FRotator GetElfRot();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
