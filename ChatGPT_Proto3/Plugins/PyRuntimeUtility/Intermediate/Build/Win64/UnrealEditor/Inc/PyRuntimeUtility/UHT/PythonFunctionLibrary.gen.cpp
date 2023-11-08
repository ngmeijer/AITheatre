// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PyRuntimeUtility/Public/PythonFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PYRUNTIMEUTILITY_API UClass* Z_Construct_UClass_UPythonFunctionLibrary();
	PYRUNTIMEUTILITY_API UClass* Z_Construct_UClass_UPythonFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PyRuntimeUtility();
// End Cross Module References
	DEFINE_FUNCTION(UPythonFunctionLibrary::execConvertBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPythonFunctionLibrary::ConvertBytesToString(Z_Param_Out_DataBuffer);
		P_NATIVE_END;
	}
	void UPythonFunctionLibrary::StaticRegisterNativesUPythonFunctionLibrary()
	{
		UClass* Class = UPythonFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertBytesToString", &UPythonFunctionLibrary::execConvertBytesToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics
	{
		struct PythonFunctionLibrary_eventConvertBytesToString_Parms
		{
			TArray<uint8> DataBuffer;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataBuffer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_DataBuffer_Inner = { "DataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_DataBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_DataBuffer = { "DataBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PythonFunctionLibrary_eventConvertBytesToString_Parms, DataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_DataBuffer_MetaData), Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_DataBuffer_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PythonFunctionLibrary_eventConvertBytesToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_DataBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_DataBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python Utilities" },
		{ "ModuleRelativePath", "Public/PythonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonFunctionLibrary, nullptr, "ConvertBytesToString", nullptr, nullptr, Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::PythonFunctionLibrary_eventConvertBytesToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::PythonFunctionLibrary_eventConvertBytesToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonFunctionLibrary);
	UClass* Z_Construct_UClass_UPythonFunctionLibrary_NoRegister()
	{
		return UPythonFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPythonFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PyRuntimeUtility,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPythonFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPythonFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPythonFunctionLibrary_ConvertBytesToString, "ConvertBytesToString" }, // 685389081
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPythonFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PythonFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PythonFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonFunctionLibrary_Statics::ClassParams = {
		&UPythonFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPythonFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPythonFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPythonFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPythonFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPythonFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonFunctionLibrary.OuterSingleton;
	}
	template<> PYRUNTIMEUTILITY_API UClass* StaticClass<UPythonFunctionLibrary>()
	{
		return UPythonFunctionLibrary::StaticClass();
	}
	UPythonFunctionLibrary::UPythonFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonFunctionLibrary);
	UPythonFunctionLibrary::~UPythonFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_PyRuntimeUtility_Source_PyRuntimeUtility_Public_PythonFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_PyRuntimeUtility_Source_PyRuntimeUtility_Public_PythonFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonFunctionLibrary, UPythonFunctionLibrary::StaticClass, TEXT("UPythonFunctionLibrary"), &Z_Registration_Info_UClass_UPythonFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonFunctionLibrary), 3745821878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_PyRuntimeUtility_Source_PyRuntimeUtility_Public_PythonFunctionLibrary_h_2098477207(TEXT("/Script/PyRuntimeUtility"),
		Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_PyRuntimeUtility_Source_PyRuntimeUtility_Public_PythonFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_PyRuntimeUtility_Source_PyRuntimeUtility_Public_PythonFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
