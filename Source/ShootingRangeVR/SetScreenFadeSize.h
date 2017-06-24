// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/DecalComponent.h"
#include "SetScreenFadeSize.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGRANGEVR_API USetScreenFadeSize : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SetFadeSize"))
	static void SetFadeSize(UDecalComponent* InDecal, float InSize);

	
	
	
};
