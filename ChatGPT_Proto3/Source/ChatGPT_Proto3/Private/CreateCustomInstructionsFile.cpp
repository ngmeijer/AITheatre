// Fill out your copyright notice in the Description page of Project Settings.


#include "CreateCustomInstructionsFile.h"

bool UCreateCustomInstructionsFile::CreateCustomInstructionsFile(FString const fileName)
{
    FString FilePath = FPaths::ProjectDir() + fileName + TEXT(".txt");

    // Create a new text file
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    IFileHandle* FileHandle = PlatformFile.OpenWrite(*FilePath);

    if (FileHandle)
    {
        FString Content = TEXT("");  // Content to be written to the file

        // Convert the FString to ANSI string (TCHAR array)
        const TCHAR* ConvertedContent = *Content;

        // Write the content to the file
        FileHandle->Write(reinterpret_cast<const uint8*>(ConvertedContent), FCString::Strlen(ConvertedContent));

        // Close the file handle
        delete FileHandle;

        return true;
    }
    else
    {
        // Handle error if unable to open the file
        UE_LOG(LogTemp, Error, TEXT("Failed to create or open the text file!"));

        return false;
    }

}