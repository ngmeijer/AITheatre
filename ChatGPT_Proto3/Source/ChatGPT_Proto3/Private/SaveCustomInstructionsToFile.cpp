// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveCustomInstructionsToFile.h"

bool USaveCustomInstructionsToFile::SaveCustomInstructionsToFile(FString const fileName, FString const dataToSave)
{
    // Define the file path
    FString FilePath = FPaths::ProjectDir() + fileName + TEXT(".txt");;

    // Save the text to the file
    if (FFileHelper::SaveStringToFile(dataToSave, *FilePath))
    {
        UE_LOG(LogTemp, Warning, TEXT("Text saved to file: %s"), *FilePath);
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to save text to file: %s"), *FilePath);
        return false;
    }
}
