// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveCustomInstructionsToFile.generated.h"

/**
 * 
 */
UCLASS()
class CHATGPT_PROTO3_API USaveCustomInstructionsToFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta = (
		DisplayName = "Save Custom Instructions To File",
		Keywords = "Custom Instructions, Save, File"),
		Category = "CustomUtilityFunctions")
	static bool SaveCustomInstructionsToFile(FString const fileName, FString const dataToSave);
};
