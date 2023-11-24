// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomDeleteFile.h"
#include <iostream>
#include <cstdio>

#include "GenericPlatform/GenericPlatformFile.h"


bool UCustomDeleteFile::DeleteFileAtPath(const FString& path)
{
    if (!FPaths::ValidatePath(path)) 
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid path. Did not delete file."));
        return false;
    }

    if (!FPaths::FileExists(path)) 
    {
        UE_LOG(LogTemp, Warning, TEXT("File does not exist. Did not delete file."));
        return false;
    }

    IFileManager& FileManager = IFileManager::Get();
    FileManager.Delete(*path);
    UE_LOG(LogTemp, Warning, TEXT("Deleted file from given path."));

    return true;
}
