// Fill out your copyright notice in the Description page of Project Settings.


#include "GetExistingCustomInstructions.h"

bool UGetExistingCustomInstructions::GetCustomInstructionsFromFile(FString const fileName, FString& outData)
{
    FString FilePath = FPaths::ProjectDir() + fileName + TEXT(".txt");

    // Read the contents of the file
    FString FileContents;
    if (FFileHelper::LoadFileToString(FileContents, *FilePath))
    {
        // File loaded successfully, do something with the content
        UE_LOG(LogTemp, Warning, TEXT("File Contents:\n%s"), *FileContents);
        outData = FileContents;
        return true;
    }
    else
    {
        // Handle error if unable to load the file
        UE_LOG(LogTemp, Error, TEXT("Failed to load the text file!"));
        outData.Empty();
        return false;
    }
}
