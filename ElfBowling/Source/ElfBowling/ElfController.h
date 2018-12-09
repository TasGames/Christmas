// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElfController.generated.h"

UCLASS()
class ELFBOWLING_API AElfController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElfController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
