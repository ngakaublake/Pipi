// Fill out your copyright notice in the Description page of Project Settings.


#include "PIPIGameState.h"

void APIPIGameState::StartGameTimer()
{
	GetWorldTimerManager().SetTimer(gameTimer, this, &APIPIGameState::Countdown, 1.0f, true, 0.0f);
}

void APIPIGameState::Countdown()
{
	if (secs != 59)
	{
		secs += 1;
	}
	else
	{
		
		mins += 1;
		secs = 0;
		
	}
}

APIPIGameState::APIPIGameState()
{
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
}

void APIPIGameState::BeginPlay()
{
	Super::BeginPlay();
	StartGameTimer();
}
