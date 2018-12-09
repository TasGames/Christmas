// Thomas Arthur Simon

#include "ElfBowlingGameModeBase.h"
#include "Blueprint/UserWidget.h"

void AElfBowlingGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerHUDClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDClass);

		if (CurrentWidget != nullptr)
			CurrentWidget->AddToViewport();
	}
}

