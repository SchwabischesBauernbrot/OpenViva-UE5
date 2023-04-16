// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/SlotDataTask_LevelSaver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask_LevelSaver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_LevelSaver();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_LevelSaver_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Saver();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	void USlotDataTask_LevelSaver::StaticRegisterNativesUSlotDataTask_LevelSaver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlotDataTask_LevelSaver);
	UClass* Z_Construct_UClass_USlotDataTask_LevelSaver_NoRegister()
	{
		return USlotDataTask_LevelSaver::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_LevelSaver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlotDataTask_Saver,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Manages the serializing process of a single level\n*/" },
		{ "IncludePath", "Serialization/SlotDataTask_LevelSaver.h" },
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_LevelSaver.h" },
		{ "ToolTip", "Manages the serializing process of a single level" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_LevelSaver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel = { "StreamingLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotDataTask_LevelSaver, StreamingLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask_LevelSaver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::ClassParams = {
		&USlotDataTask_LevelSaver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask_LevelSaver()
	{
		if (!Z_Registration_Info_UClass_USlotDataTask_LevelSaver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotDataTask_LevelSaver.OuterSingleton, Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlotDataTask_LevelSaver.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask_LevelSaver>()
	{
		return USlotDataTask_LevelSaver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask_LevelSaver);
	USlotDataTask_LevelSaver::~USlotDataTask_LevelSaver() {}
	struct Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_LevelSaver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_LevelSaver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlotDataTask_LevelSaver, USlotDataTask_LevelSaver::StaticClass, TEXT("USlotDataTask_LevelSaver"), &Z_Registration_Info_UClass_USlotDataTask_LevelSaver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotDataTask_LevelSaver), 2519569349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_LevelSaver_h_2723885602(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_LevelSaver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_LevelSaver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS