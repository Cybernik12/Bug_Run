// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bug_Run_Project/Public/Bug.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBug() {}
// Cross Module References
	BUG_RUN_PROJECT_API UClass* Z_Construct_UClass_ABug_NoRegister();
	BUG_RUN_PROJECT_API UClass* Z_Construct_UClass_ABug();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Bug_Run_Project();
// End Cross Module References
	void ABug::StaticRegisterNativesABug()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABug);
	UClass* Z_Construct_UClass_ABug_NoRegister()
	{
		return ABug::StaticClass();
	}
	struct Z_Construct_UClass_ABug_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Bug_Run_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABug_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bug.h" },
		{ "ModuleRelativePath", "Public/Bug.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABug>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABug_Statics::ClassParams = {
		&ABug::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABug()
	{
		if (!Z_Registration_Info_UClass_ABug.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABug.OuterSingleton, Z_Construct_UClass_ABug_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABug.OuterSingleton;
	}
	template<> BUG_RUN_PROJECT_API UClass* StaticClass<ABug>()
	{
		return ABug::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABug);
	struct Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Public_Bug_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Public_Bug_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABug, ABug::StaticClass, TEXT("ABug"), &Z_Registration_Info_UClass_ABug, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABug), 36212432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Public_Bug_h_3688677805(TEXT("/Script/Bug_Run_Project"),
		Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Public_Bug_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bug_Run_Project_Source_Bug_Run_Project_Public_Bug_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
