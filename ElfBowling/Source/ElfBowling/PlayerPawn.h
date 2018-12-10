// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UENUM(BlueprintType)
enum class EPhaseEnum : uint8
{
	PPower 	UMETA(DisplayName = "Power"),
	PLaunch 	UMETA(DisplayName = "Launch"),
	PCheck	UMETA(DisplayName = "Check"),
};

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

	UPROPERTY(EditAnywhere, Category = ElfController)
	class AElfController* E;

	ABowlingBall* Ball;

	void Move(float Val);
	void Rotate(float Val);
	void Launch();

	FVector OriginPos;
	FRotator OriginRot;

	float Power;
	float TotVal;

	bool Done;

	struct FTimerHandle MemberTimerHandle;

public:	
	APlayerPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DestroyBall();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool CanSetPower;

	UPROPERTY(EditAnywhere)
	bool CanLaunch;

	UPROPERTY(BlueprintReadWrite)
	int RoundCount;
	UPROPERTY(BlueprintReadWrite)
	int FirstScore;
	UPROPERTY(BlueprintReadWrite)
	int SecondScore;
	UPROPERTY(BlueprintReadWrite)
	int TotalScore;
	
};
