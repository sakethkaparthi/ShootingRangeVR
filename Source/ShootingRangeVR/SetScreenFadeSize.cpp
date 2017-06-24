// Fill out your copyright notice in the Description page of Project Settings.

#include "SetScreenFadeSize.h"

void USetScreenFadeSize::SetFadeSize(UDecalComponent* InDecal, float InSize)
{
	InDecal->FadeScreenSize = InSize;
}



