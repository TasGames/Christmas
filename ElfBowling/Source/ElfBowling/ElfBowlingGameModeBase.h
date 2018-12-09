// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ElfBowlingGameModeBase.generated.h"

UCLASS()
class ELFBOWLING_API AElfBowlingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HUD, Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> PlayerHUDClass;

	UPROPERTY()
	class UUserWidget* CurrentWidget;	
	
};
