// Fill out your copyright notice in the Description page of Project Settings.


#include "CreateNewLineInString.h"

FString UCreateNewLineInString::CreateNewLineInText(const FString fullString, const int32 newLineAtIndex)
{
	int32 index = newLineAtIndex;

	//Create a string that can be edited and will be returned.
	FString editableString = fullString;

	//Check if index is INDEX_NONE. If so, there is no new line yet and "\n" should be added at the end of the line. Index is length of string - 1.
	if (index == INDEX_NONE) {
		index = fullString.Len();
	}

	editableString.InsertAt(index, "\n");

	return editableString;
}

//	UE_LOG(LogTemp, Warning, TEXT("Index: %d."), index);

bool UCreateNewLineInString::CheckIfLineExceedsAllowedWidth(const FString fullString, const int32 allowedWidth, int32& outLastNewlineIndex) {

	outLastNewlineIndex = INDEX_NONE;

	//1. Initial line is under allowedWidth? Return false
	if (fullString.Len() < allowedWidth)
		return false;

	//Check the length of the substring after the last "\n".
	//Exceeds allowedWidth? Return true.
	int32 dividerIndex = INDEX_NONE;
	fullString.FindLastChar(*"\n", dividerIndex);

	//Divider was not found. Return true. 
	if (dividerIndex == INDEX_NONE)
		return true;

	//Extract the substring with index
	FString Substring = fullString.Mid(dividerIndex);

	//Get the length of the substring
	int32 SubstringLength = Substring.Len();

	//Is the substring (last sentence) too long? Return true.
	if (SubstringLength >= allowedWidth) {
		outLastNewlineIndex = fullString.Len();
		return true;
	}

	//Is the substring not yet the max allowed width? Return false.
	return false;
}


