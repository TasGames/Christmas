// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class ELFBOWLING_API APlayerPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* Marker;

	UPROPERTY(VisibleDefaultsOnly, Category = Arrow)
	class UArrowComponent* ArrowComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class ABowlingBall> BowlingBallClass;

	void Move(float Val);
	void Rotate(float Val);
	void Launch();

	void PowerChange();

	float Power;

	struct FTimerHandle MemberTimerHandle;

public:	
	APlayerPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool CanSetPower;

	UPROPERTY(EditAnywhere)
	bool CanLaunch;
	
};
