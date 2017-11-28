// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TankTurrets.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankTurrets() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurrets_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurrets();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void UTankTurrets::StaticRegisterNativesUTankTurrets()
	{
	}
	UClass* Z_Construct_UClass_UTankTurrets_NoRegister()
	{
		return UTankTurrets::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTurrets()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankTurrets::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;


				UProperty* NewProp_MaxDegreesPerSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxDegreesPerSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxDegreesPerSecond, UTankTurrets), 0x0040000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankTurrets> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankTurrets.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankTurrets.h"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("ModuleRelativePath"), TEXT("Public/TankTurrets.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTurrets, 4148139404);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTurrets(Z_Construct_UClass_UTankTurrets, &UTankTurrets::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankTurrets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTurrets);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
