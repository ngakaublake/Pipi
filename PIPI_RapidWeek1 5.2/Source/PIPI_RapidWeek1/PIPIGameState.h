// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "PIPIGameState.generated.h"

/**
 * 
 */
UCLASS()
class PIPI_RAPIDWEEK1_API APIPIGameState : public AGameState
{
	GENERATED_BODY()

protected:

	void StartGameTimer();
	void Countdown();


	UFUNCTION(BlueprintPure)
	int GetMins() { return mins; };
	UFUNCTION(BlueprintPure)
	int GetSecs() { return secs; };

	int mins = 0;
	int	secs = 0;


	FTimerHandle gameTimer;

public:

	APIPIGameState();
	virtual void BeginPlay() override;
};
