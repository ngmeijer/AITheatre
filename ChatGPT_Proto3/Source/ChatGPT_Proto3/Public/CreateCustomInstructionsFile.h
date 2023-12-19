// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CreateCustomInstructionsFile.generated.h"

/**
 * 
 */
UCLASS()
class CHATGPT_PROTO3_API UCreateCustomInstructionsFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta = (
		DisplayName = "Create Custom Instructions File",
		Keywords = "Custom Instructions, Create"),
		Category = "CustomUtilityFunctions")
	static bool CreateCustomInstructionsFile(FString const fileName);
};
