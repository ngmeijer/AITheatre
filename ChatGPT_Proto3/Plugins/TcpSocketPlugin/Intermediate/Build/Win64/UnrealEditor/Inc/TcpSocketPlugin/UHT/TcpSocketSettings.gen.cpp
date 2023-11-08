// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TcpSocketPlugin/Public/TcpSocketSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTcpSocketSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TCPSOCKETPLUGIN_API UClass* Z_Construct_UClass_UTcpSocketSettings();
	TCPSOCKETPLUGIN_API UClass* Z_Construct_UClass_UTcpSocketSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TcpSocketPlugin();
// End Cross Module References
	void UTcpSocketSettings::StaticRegisterNativesUTcpSocketSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTcpSocketSettings);
	UClass* Z_Construct_UClass_UTcpSocketSettings_NoRegister()
	{
		return UTcpSocketSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTcpSocketSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPostErrorsToMessageLog_MetaData[];
#endif
		static void NewProp_bPostErrorsToMessageLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostErrorsToMessageLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTcpSocketSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TcpSocketPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTcpSocketSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpSocketSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TcpSocketSettings.h" },
		{ "ModuleRelativePath", "Public/TcpSocketSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData[] = {
		{ "Category", "TcpSocketPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Post errors to message log. */" },
#endif
		{ "ModuleRelativePath", "Public/TcpSocketSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Post errors to message log." },
#endif
	};
#endif
	void Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_SetBit(void* Obj)
	{
		((UTcpSocketSettings*)Obj)->bPostErrorsToMessageLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog = { "bPostErrorsToMessageLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTcpSocketSettings), &Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData), Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTcpSocketSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTcpSocketSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTcpSocketSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTcpSocketSettings_Statics::ClassParams = {
		&UTcpSocketSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTcpSocketSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTcpSocketSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTcpSocketSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTcpSocketSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTcpSocketSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTcpSocketSettings()
	{
		if (!Z_Registration_Info_UClass_UTcpSocketSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTcpSocketSettings.OuterSingleton, Z_Construct_UClass_UTcpSocketSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTcpSocketSettings.OuterSingleton;
	}
	template<> TCPSOCKETPLUGIN_API UClass* StaticClass<UTcpSocketSettings>()
	{
		return UTcpSocketSettings::StaticClass();
	}
	UTcpSocketSettings::UTcpSocketSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTcpSocketSettings);
	UTcpSocketSettings::~UTcpSocketSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTcpSocketSettings, UTcpSocketSettings::StaticClass, TEXT("UTcpSocketSettings"), &Z_Registration_Info_UClass_UTcpSocketSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTcpSocketSettings), 1868765534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketSettings_h_3791719390(TEXT("/Script/TcpSocketPlugin"),
		Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
