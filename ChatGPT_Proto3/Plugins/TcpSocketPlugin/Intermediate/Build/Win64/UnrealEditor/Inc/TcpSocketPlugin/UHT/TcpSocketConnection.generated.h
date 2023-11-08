// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TcpSocketConnection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCPSOCKETPLUGIN_TcpSocketConnection_generated_h
#error "TcpSocketConnection.generated.h already included, missing '#pragma once' in TcpSocketConnection.h"
#endif
#define TCPSOCKETPLUGIN_TcpSocketConnection_generated_h

#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_13_DELEGATE \
TCPSOCKETPLUGIN_API void FTcpSocketDisconnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketDisconnectDelegate, int32 ConnectionId);


#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_14_DELEGATE \
TCPSOCKETPLUGIN_API void FTcpSocketConnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketConnectDelegate, int32 ConnectionId);


#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_15_DELEGATE \
TCPSOCKETPLUGIN_API void FTcpSocketReceivedMessageDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketReceivedMessageDelegate, int32 ConnectionId, TArray<uint8>& Message);


#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_SPARSE_DATA
#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisConnected); \
	DECLARE_FUNCTION(execMessage_ReadString); \
	DECLARE_FUNCTION(execMessage_ReadFloat); \
	DECLARE_FUNCTION(execMessage_ReadBytes); \
	DECLARE_FUNCTION(execMessage_ReadByte); \
	DECLARE_FUNCTION(execMessage_ReadInt); \
	DECLARE_FUNCTION(execConv_ByteToBytes); \
	DECLARE_FUNCTION(execConv_FloatToBytes); \
	DECLARE_FUNCTION(execConv_StringToBytes); \
	DECLARE_FUNCTION(execConv_IntToBytes); \
	DECLARE_FUNCTION(execConcat_BytesBytes); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ACCESSORS
#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATcpSocketConnection(); \
	friend struct Z_Construct_UClass_ATcpSocketConnection_Statics; \
public: \
	DECLARE_CLASS(ATcpSocketConnection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TcpSocketPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATcpSocketConnection)


#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATcpSocketConnection(ATcpSocketConnection&&); \
	NO_API ATcpSocketConnection(const ATcpSocketConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATcpSocketConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATcpSocketConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATcpSocketConnection) \
	NO_API virtual ~ATcpSocketConnection();


#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_17_PROLOG
#define FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_SPARSE_DATA \
	FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ACCESSORS \
	FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPSOCKETPLUGIN_API UClass* StaticClass<class ATcpSocketConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
