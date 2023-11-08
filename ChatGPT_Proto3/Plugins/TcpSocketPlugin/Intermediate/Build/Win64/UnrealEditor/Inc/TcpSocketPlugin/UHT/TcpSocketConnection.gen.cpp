// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TcpSocketPlugin/Public/TcpSocketConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTcpSocketConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TCPSOCKETPLUGIN_API UClass* Z_Construct_UClass_ATcpSocketConnection();
	TCPSOCKETPLUGIN_API UClass* Z_Construct_UClass_ATcpSocketConnection_NoRegister();
	TCPSOCKETPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature();
	TCPSOCKETPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature();
	TCPSOCKETPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TcpSocketPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics
	{
		struct _Script_TcpSocketPlugin_eventTcpSocketDisconnectDelegate_Parms
		{
			int32 ConnectionId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TcpSocketPlugin_eventTcpSocketDisconnectDelegate_Parms, ConnectionId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::NewProp_ConnectionId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TcpSocketPlugin, nullptr, "TcpSocketDisconnectDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::_Script_TcpSocketPlugin_eventTcpSocketDisconnectDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::_Script_TcpSocketPlugin_eventTcpSocketDisconnectDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTcpSocketDisconnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketDisconnectDelegate, int32 ConnectionId)
{
	struct _Script_TcpSocketPlugin_eventTcpSocketDisconnectDelegate_Parms
	{
		int32 ConnectionId;
	};
	_Script_TcpSocketPlugin_eventTcpSocketDisconnectDelegate_Parms Parms;
	Parms.ConnectionId=ConnectionId;
	TcpSocketDisconnectDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics
	{
		struct _Script_TcpSocketPlugin_eventTcpSocketConnectDelegate_Parms
		{
			int32 ConnectionId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TcpSocketPlugin_eventTcpSocketConnectDelegate_Parms, ConnectionId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::NewProp_ConnectionId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TcpSocketPlugin, nullptr, "TcpSocketConnectDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::_Script_TcpSocketPlugin_eventTcpSocketConnectDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::_Script_TcpSocketPlugin_eventTcpSocketConnectDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTcpSocketConnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketConnectDelegate, int32 ConnectionId)
{
	struct _Script_TcpSocketPlugin_eventTcpSocketConnectDelegate_Parms
	{
		int32 ConnectionId;
	};
	_Script_TcpSocketPlugin_eventTcpSocketConnectDelegate_Parms Parms;
	Parms.ConnectionId=ConnectionId;
	TcpSocketConnectDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics
	{
		struct _Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms
		{
			int32 ConnectionId;
			TArray<uint8> Message;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms, ConnectionId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_Message_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TcpSocketPlugin, nullptr, "TcpSocketReceivedMessageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::_Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::_Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTcpSocketReceivedMessageDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketReceivedMessageDelegate, int32 ConnectionId, TArray<uint8>& Message)
{
	struct _Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms
	{
		int32 ConnectionId;
		TArray<uint8> Message;
	};
	_Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms Parms;
	Parms.ConnectionId=ConnectionId;
	Parms.Message=Message;
	TcpSocketReceivedMessageDelegate.ProcessDelegate<UObject>(&Parms);
	Message=Parms.Message;
}
	DEFINE_FUNCTION(ATcpSocketConnection::execisConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isConnected(Z_Param_ConnectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execMessage_ReadString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_StringLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ATcpSocketConnection::Message_ReadString(Z_Param_Out_Message,Z_Param_StringLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execMessage_ReadFloat)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATcpSocketConnection::Message_ReadFloat(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execMessage_ReadBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumBytes);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ReturnArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ATcpSocketConnection::Message_ReadBytes(Z_Param_NumBytes,Z_Param_Out_Message,Z_Param_Out_ReturnArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execMessage_ReadByte)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=ATcpSocketConnection::Message_ReadByte(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execMessage_ReadInt)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ATcpSocketConnection::Message_ReadInt(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execConv_ByteToBytes)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InByte);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=ATcpSocketConnection::Conv_ByteToBytes(Z_Param_InByte);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execConv_FloatToBytes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=ATcpSocketConnection::Conv_FloatToBytes(Z_Param_InFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execConv_StringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=ATcpSocketConnection::Conv_StringToBytes(Z_Param_InStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execConv_IntToBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=ATcpSocketConnection::Conv_IntToBytes(Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execConcat_BytesBytes)
	{
		P_GET_TARRAY(uint8,Z_Param_A);
		P_GET_TARRAY(uint8,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=ATcpSocketConnection::Concat_BytesBytes(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execSendData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionId);
		P_GET_TARRAY(uint8,Z_Param_DataToSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendData(Z_Param_ConnectionId,Z_Param_DataToSend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execDisconnect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(Z_Param_ConnectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATcpSocketConnection::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ipAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDisconnected);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnConnected);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnMessageReceived);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_ipAddress,Z_Param_port,FTcpSocketDisconnectDelegate(Z_Param_Out_OnDisconnected),FTcpSocketConnectDelegate(Z_Param_Out_OnConnected),FTcpSocketReceivedMessageDelegate(Z_Param_Out_OnMessageReceived),Z_Param_Out_ConnectionId);
		P_NATIVE_END;
	}
	void ATcpSocketConnection::StaticRegisterNativesATcpSocketConnection()
	{
		UClass* Class = ATcpSocketConnection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Concat_BytesBytes", &ATcpSocketConnection::execConcat_BytesBytes },
			{ "Connect", &ATcpSocketConnection::execConnect },
			{ "Conv_ByteToBytes", &ATcpSocketConnection::execConv_ByteToBytes },
			{ "Conv_FloatToBytes", &ATcpSocketConnection::execConv_FloatToBytes },
			{ "Conv_IntToBytes", &ATcpSocketConnection::execConv_IntToBytes },
			{ "Conv_StringToBytes", &ATcpSocketConnection::execConv_StringToBytes },
			{ "Disconnect", &ATcpSocketConnection::execDisconnect },
			{ "isConnected", &ATcpSocketConnection::execisConnected },
			{ "Message_ReadByte", &ATcpSocketConnection::execMessage_ReadByte },
			{ "Message_ReadBytes", &ATcpSocketConnection::execMessage_ReadBytes },
			{ "Message_ReadFloat", &ATcpSocketConnection::execMessage_ReadFloat },
			{ "Message_ReadInt", &ATcpSocketConnection::execMessage_ReadInt },
			{ "Message_ReadString", &ATcpSocketConnection::execMessage_ReadString },
			{ "SendData", &ATcpSocketConnection::execSendData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics
	{
		struct TcpSocketConnection_eventConcat_BytesBytes_Parms
		{
			TArray<uint8> A;
			TArray<uint8> B;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_A_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FBytePropertyParams NewProp_B_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConcat_BytesBytes_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConcat_BytesBytes_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConcat_BytesBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UFUNCTION(BlueprintPure, meta = (DisplayName = \"Append Bytes\", CommutativeAssociativeBinaryOperator = \"true\"), Category = \"Socket\")\n\x09static TArray<uint8> Concat_BytesBytes(const TArray<uint8>& A, const TArray<uint8>& B);*/" },
#endif
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "DisplayName", "Append Bytes" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintPure, meta = (DisplayName = \"Append Bytes\", CommutativeAssociativeBinaryOperator = \"true\"), Category = \"Socket\")\n       static TArray<uint8> Concat_BytesBytes(const TArray<uint8>& A, const TArray<uint8>& B);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Concat_BytesBytes", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::TcpSocketConnection_eventConcat_BytesBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::TcpSocketConnection_eventConcat_BytesBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics
	{
		struct TcpSocketConnection_eventConnect_Parms
		{
			FString ipAddress;
			int32 port;
			FScriptDelegate OnDisconnected;
			FScriptDelegate OnConnected;
			FScriptDelegate OnMessageReceived;
			int32 ConnectionId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ipAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMessageReceived;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_ipAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConnect_Parms, ipAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_ipAddress_MetaData), Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_ipAddress_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConnect_Parms, port), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConnect_Parms, OnDisconnected), Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnDisconnected_MetaData), Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnDisconnected_MetaData) }; // 3355891747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnConnected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConnect_Parms, OnConnected), Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnConnected_MetaData), Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnConnected_MetaData) }; // 4147438514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnMessageReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnMessageReceived = { "OnMessageReceived", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConnect_Parms, OnMessageReceived), Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnMessageReceived_MetaData), Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnMessageReceived_MetaData) }; // 1899012481
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConnect_Parms, ConnectionId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_ipAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_OnMessageReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::NewProp_ConnectionId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns the ID of the new connection. */" },
#endif
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the ID of the new connection." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::TcpSocketConnection_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::TcpSocketConnection_eventConnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics
	{
		struct TcpSocketConnection_eventConv_ByteToBytes_Parms
		{
			uint8 InByte;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InByte;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::NewProp_InByte = { "InByte", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConv_ByteToBytes_Parms, InByte), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConv_ByteToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::NewProp_InByte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a byte to an array of bytes */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Byte To Bytes" },
		{ "Keywords", "cast convert" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a byte to an array of bytes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Conv_ByteToBytes", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::TcpSocketConnection_eventConv_ByteToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::TcpSocketConnection_eventConv_ByteToBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics
	{
		struct TcpSocketConnection_eventConv_FloatToBytes_Parms
		{
			float InFloat;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConv_FloatToBytes_Parms, InFloat), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConv_FloatToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::NewProp_InFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a float to an array of bytes */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Float To Bytes" },
		{ "Keywords", "cast convert" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a float to an array of bytes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Conv_FloatToBytes", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::TcpSocketConnection_eventConv_FloatToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::TcpSocketConnection_eventConv_FloatToBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics
	{
		struct TcpSocketConnection_eventConv_IntToBytes_Parms
		{
			int32 InInt;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConv_IntToBytes_Parms, InInt), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConv_IntToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::NewProp_InInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an integer to an array of bytes */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Int To Bytes" },
		{ "Keywords", "cast convert" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an integer to an array of bytes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Conv_IntToBytes", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::TcpSocketConnection_eventConv_IntToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::TcpSocketConnection_eventConv_IntToBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics
	{
		struct TcpSocketConnection_eventConv_StringToBytes_Parms
		{
			FString InStr;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStr;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_InStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_InStr = { "InStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConv_StringToBytes_Parms, InStr), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_InStr_MetaData), Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_InStr_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventConv_StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_InStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a string to an array of bytes */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "String To Bytes" },
		{ "Keywords", "cast convert" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a string to an array of bytes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Conv_StringToBytes", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::TcpSocketConnection_eventConv_StringToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::TcpSocketConnection_eventConv_StringToBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics
	{
		struct TcpSocketConnection_eventDisconnect_Parms
		{
			int32 ConnectionId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventDisconnect_Parms, ConnectionId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::NewProp_ConnectionId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Disconnect from connection ID. */" },
#endif
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disconnect from connection ID." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Disconnect", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::TcpSocketConnection_eventDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::TcpSocketConnection_eventDisconnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics
	{
		struct TcpSocketConnection_eventisConnected_Parms
		{
			int32 ConnectionId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventisConnected_Parms, ConnectionId), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TcpSocketConnection_eventisConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TcpSocketConnection_eventisConnected_Parms), &Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "isConnected", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::TcpSocketConnection_eventisConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::TcpSocketConnection_eventisConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_isConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_isConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics
	{
		struct TcpSocketConnection_eventMessage_ReadByte_Parms
		{
			TArray<uint8> Message;
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadByte_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::NewProp_Message_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read Byte" },
		{ "Keywords", "read byte int8 uint8" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Message_ReadByte", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::TcpSocketConnection_eventMessage_ReadByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::TcpSocketConnection_eventMessage_ReadByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics
	{
		struct TcpSocketConnection_eventMessage_ReadBytes_Parms
		{
			int32 NumBytes;
			TArray<uint8> Message;
			TArray<uint8> ReturnArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBytes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_NumBytes = { "NumBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadBytes_Parms, NumBytes), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadBytes_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_ReturnArray_Inner = { "ReturnArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_ReturnArray = { "ReturnArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadBytes_Parms, ReturnArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TcpSocketConnection_eventMessage_ReadBytes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TcpSocketConnection_eventMessage_ReadBytes_Parms), &Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_NumBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_Message_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_ReturnArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_ReturnArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read Bytes" },
		{ "Keywords", "read bytes" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Message_ReadBytes", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::TcpSocketConnection_eventMessage_ReadBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::TcpSocketConnection_eventMessage_ReadBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics
	{
		struct TcpSocketConnection_eventMessage_ReadFloat_Parms
		{
			TArray<uint8> Message;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadFloat_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::NewProp_Message_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read Float" },
		{ "Keywords", "read float" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Message_ReadFloat", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::TcpSocketConnection_eventMessage_ReadFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::TcpSocketConnection_eventMessage_ReadFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics
	{
		struct TcpSocketConnection_eventMessage_ReadInt_Parms
		{
			TArray<uint8> Message;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadInt_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::NewProp_Message_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read Int" },
		{ "Keywords", "read int" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Message_ReadInt", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::TcpSocketConnection_eventMessage_ReadInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::TcpSocketConnection_eventMessage_ReadInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics
	{
		struct TcpSocketConnection_eventMessage_ReadString_Parms
		{
			TArray<uint8> Message;
			int32 StringLength;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StringLength;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadString_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::NewProp_StringLength = { "StringLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadString_Parms, StringLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventMessage_ReadString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::NewProp_Message_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::NewProp_StringLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "DisplayName", "Read String" },
		{ "Keywords", "read string" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "Message_ReadString", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::TcpSocketConnection_eventMessage_ReadString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::TcpSocketConnection_eventMessage_ReadString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics
	{
		struct TcpSocketConnection_eventSendData_Parms
		{
			int32 ConnectionId;
			TArray<uint8> DataToSend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataToSend_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToSend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventSendData_Parms, ConnectionId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_DataToSend_Inner = { "DataToSend", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_DataToSend = { "DataToSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TcpSocketConnection_eventSendData_Parms, DataToSend), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TcpSocketConnection_eventSendData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TcpSocketConnection_eventSendData_Parms), &Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_DataToSend_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_DataToSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* False means we're not connected to socket and the data wasn't sent. \"True\" doesn't guarantee that it was successfully sent, \n\x09only that we were still connected when we initiating the sending process. */// use meta to set first default param to 0\n" },
#endif
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "False means we're not connected to socket and the data wasn't sent. \"True\" doesn't guarantee that it was successfully sent,\n      only that we were still connected when we initiating the sending process. // use meta to set first default param to 0" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATcpSocketConnection, nullptr, "SendData", nullptr, nullptr, Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::TcpSocketConnection_eventSendData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::TcpSocketConnection_eventSendData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATcpSocketConnection_SendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATcpSocketConnection_SendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATcpSocketConnection);
	UClass* Z_Construct_UClass_ATcpSocketConnection_NoRegister()
	{
		return ATcpSocketConnection::StaticClass();
	}
	struct Z_Construct_UClass_ATcpSocketConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SendBufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReceiveBufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenTicks_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenTicks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATcpSocketConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TcpSocketPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATcpSocketConnection_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATcpSocketConnection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATcpSocketConnection_Concat_BytesBytes, "Concat_BytesBytes" }, // 664214459
		{ &Z_Construct_UFunction_ATcpSocketConnection_Connect, "Connect" }, // 525912621
		{ &Z_Construct_UFunction_ATcpSocketConnection_Conv_ByteToBytes, "Conv_ByteToBytes" }, // 1190311385
		{ &Z_Construct_UFunction_ATcpSocketConnection_Conv_FloatToBytes, "Conv_FloatToBytes" }, // 1413900077
		{ &Z_Construct_UFunction_ATcpSocketConnection_Conv_IntToBytes, "Conv_IntToBytes" }, // 960457808
		{ &Z_Construct_UFunction_ATcpSocketConnection_Conv_StringToBytes, "Conv_StringToBytes" }, // 2034392826
		{ &Z_Construct_UFunction_ATcpSocketConnection_Disconnect, "Disconnect" }, // 2814848351
		{ &Z_Construct_UFunction_ATcpSocketConnection_isConnected, "isConnected" }, // 207225488
		{ &Z_Construct_UFunction_ATcpSocketConnection_Message_ReadByte, "Message_ReadByte" }, // 2040751593
		{ &Z_Construct_UFunction_ATcpSocketConnection_Message_ReadBytes, "Message_ReadBytes" }, // 2271429929
		{ &Z_Construct_UFunction_ATcpSocketConnection_Message_ReadFloat, "Message_ReadFloat" }, // 4141501897
		{ &Z_Construct_UFunction_ATcpSocketConnection_Message_ReadInt, "Message_ReadInt" }, // 2084605761
		{ &Z_Construct_UFunction_ATcpSocketConnection_Message_ReadString, "Message_ReadString" }, // 3391668702
		{ &Z_Construct_UFunction_ATcpSocketConnection_SendData, "SendData" }, // 4077605180
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATcpSocketConnection_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATcpSocketConnection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TcpSocketConnection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_SendBufferSize_MetaData[] = {
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Buffer size in bytes. Currently not used. */" },
#endif
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Buffer size in bytes. Currently not used." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_SendBufferSize = { "SendBufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATcpSocketConnection, SendBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_SendBufferSize_MetaData), Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_SendBufferSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_ReceiveBufferSize_MetaData[] = {
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Buffer size in bytes. It's set only when creating a socket, never afterwards. */" },
#endif
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Buffer size in bytes. It's set only when creating a socket, never afterwards." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_ReceiveBufferSize = { "ReceiveBufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATcpSocketConnection, ReceiveBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_ReceiveBufferSize_MetaData), Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_ReceiveBufferSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_TimeBetweenTicks_MetaData[] = {
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Time between ticks. Please account for the fact that it takes 1ms to wake up on a modern PC, so 0.01f would effectively be 0.011f */" },
#endif
		{ "ModuleRelativePath", "Public/TcpSocketConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between ticks. Please account for the fact that it takes 1ms to wake up on a modern PC, so 0.01f would effectively be 0.011f" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_TimeBetweenTicks = { "TimeBetweenTicks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATcpSocketConnection, TimeBetweenTicks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_TimeBetweenTicks_MetaData), Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_TimeBetweenTicks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATcpSocketConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_SendBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_ReceiveBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATcpSocketConnection_Statics::NewProp_TimeBetweenTicks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATcpSocketConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATcpSocketConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATcpSocketConnection_Statics::ClassParams = {
		&ATcpSocketConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATcpSocketConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATcpSocketConnection_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATcpSocketConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_ATcpSocketConnection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATcpSocketConnection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATcpSocketConnection()
	{
		if (!Z_Registration_Info_UClass_ATcpSocketConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATcpSocketConnection.OuterSingleton, Z_Construct_UClass_ATcpSocketConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATcpSocketConnection.OuterSingleton;
	}
	template<> TCPSOCKETPLUGIN_API UClass* StaticClass<ATcpSocketConnection>()
	{
		return ATcpSocketConnection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATcpSocketConnection);
	ATcpSocketConnection::~ATcpSocketConnection() {}
	struct Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATcpSocketConnection, ATcpSocketConnection::StaticClass, TEXT("ATcpSocketConnection"), &Z_Registration_Info_UClass_ATcpSocketConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATcpSocketConnection), 1509227767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_890171187(TEXT("/Script/TcpSocketPlugin"),
		Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_StudentSaxion_Documents_Unreal_Projects_ChatGPT_Proto3_Plugins_TcpSocketPlugin_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
