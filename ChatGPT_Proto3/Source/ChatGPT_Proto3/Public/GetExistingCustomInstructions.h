// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetExistingCustomInstructions.generated.h"

/**
 * 
 */
UCLASS()
class CHATGPT_PROTO3_API UGetExistingCustomInstructions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta = (
		DisplayName = "Get Custom Instructions File",
		Keywords = "Custom Instructions, Get, File"),
		Category = "CustomUtilityFunctions")
	static bool GetCustomInstructionsFromFile(FString const fileName, FString& outData);
};
