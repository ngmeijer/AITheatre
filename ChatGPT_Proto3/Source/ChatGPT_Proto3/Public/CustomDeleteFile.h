// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomDeleteFile.generated.h"

/**
 * 
 */
UCLASS()
class CHATGPT_PROTO3_API UCustomDeleteFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintCallable, meta = (
			DisplayName = "Delete File From A Path",
			Keywords = "Delete, File, Path"),
			Category="CustomUtilityFunctions")
	static bool DeleteFileAtPath(const FString& pPath);
};
