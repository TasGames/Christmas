// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BowlingBall.generated.h"

class UProjectileMovementComponent;

UCLASS()
class ELFBOWLING_API ABowlingBall : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* Ball;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	ABowlingBall();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	class UAudioComponent* Roll;

	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
	UProjectileMovementComponent* ProjectileMovement;
	
};
