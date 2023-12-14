// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CreateNewLineInString.generated.h"

/**
 * 
 */
UCLASS()
class CHATGPT_PROTO3_API UCreateNewLineInString : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "CustomUtilityVariables")
	int32 LastNewlineIndex;

	UFUNCTION(BlueprintCallable, meta = (
		DisplayName = "Create new line in text",
		Keywords = "Create, Line, Text"),
		Category = "CustomUtilityFunctions")
	static FString CreateNewLineInText(const FString fullString, const int32 newLineAtIndex);
	UFUNCTION(BlueprintCallable, meta = (
		DisplayName = "Check if line exceeds allowed width",
		Keywords = "Check, allowed, width"),
		Category = "CustomUtilityFunctions")
	static bool CheckIfLineExceedsAllowedWidth(const FString fullString, const int32 allowedWidth, int32& outLastNewlineIndex);
};