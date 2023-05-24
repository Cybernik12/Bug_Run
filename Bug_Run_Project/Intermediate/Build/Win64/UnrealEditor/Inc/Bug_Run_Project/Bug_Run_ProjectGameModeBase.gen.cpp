// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bug_Run_Project/Bug_Run_ProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBug_Run_ProjectGameModeBase() {}
// Cross Module References
	BUG_RUN_PROJECT_API UClass* Z_Construct_UClass_ABug_Run_ProjectGameModeBase_NoRegister();
	BUG_RUN_PROJECT_API UClass* Z_Construct_UClass_ABug_Run_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bug_Run_Project();
// End Cross Module References
	void ABug_Run_ProjectGameModeBase::StaticRegisterNativesABug_Run_ProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABug_Run_ProjectGameModeBase);
	UClass* Z_Construct_UClass_ABug_Run_ProjectGameModeBase_NoRegister()
	{
		return ABug_Run_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABug_Run_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABug_Run_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bug_Run_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABug_Run_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Bug_Run_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "Bug_Run_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABug_Run_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABug_Run_ProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABug_Run_ProjectGameModeBase_Statics::ClassParams = {
		&ABug_Run_ProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABug_Run_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABug_Run_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABug_Run_ProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABug_Run_ProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABug_Run_ProjectGameModeBase.OuterSingleton, Z_Construct_UClass_ABug_Run_ProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABug_Run_ProjectGameModeBase.OuterSingleton;
	}
	template<> BUG_RUN_PROJECT_API UClass* StaticClass<ABug_Run_ProjectGameModeBase>()
	{
		return ABug_Run_ProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABug_Run_ProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Bug_Run_ProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Bug_Run_ProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABug_Run_ProjectGameModeBase, ABug_Run_ProjectGameModeBase::StaticClass, TEXT("ABug_Run_ProjectGameModeBase"), &Z_Registration_Info_UClass_ABug_Run_ProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABug_Run_ProjectGameModeBase), 935707231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Bug_Run_ProjectGameModeBase_h_3343170222(TEXT("/Script/Bug_Run_Project"),
		Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Bug_Run_ProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Bug_Run_ProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
