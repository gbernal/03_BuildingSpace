// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BuildingSpace.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BuildingSpace() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	BUILDINGSPACE_API class UClass* Z_Construct_UClass_ABuildingSpaceGameModeBase_NoRegister();
	BUILDINGSPACE_API class UClass* Z_Construct_UClass_ABuildingSpaceGameModeBase();
	BUILDINGSPACE_API class UPackage* Z_Construct_UPackage__Script_BuildingSpace();
	void ABuildingSpaceGameModeBase::StaticRegisterNativesABuildingSpaceGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuildingSpaceGameModeBase_NoRegister()
	{
		return ABuildingSpaceGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuildingSpaceGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BuildingSpace();
			OuterClass = ABuildingSpaceGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABuildingSpaceGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuildingSpaceGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BuildingSpaceGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingSpaceGameModeBase, 872992969);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingSpaceGameModeBase(Z_Construct_UClass_ABuildingSpaceGameModeBase, &ABuildingSpaceGameModeBase::StaticClass, TEXT("/Script/BuildingSpace"), TEXT("ABuildingSpaceGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingSpaceGameModeBase);
	UPackage* Z_Construct_UPackage__Script_BuildingSpace()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BuildingSpace")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xA1CA6CB0;
			Guid.B = 0x93D47EC5;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
