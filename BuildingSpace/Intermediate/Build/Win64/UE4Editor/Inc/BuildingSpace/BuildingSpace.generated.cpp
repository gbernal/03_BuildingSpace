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
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();

	BUILDINGSPACE_API class UClass* Z_Construct_UClass_ABuildingSpaceGameModeBase_NoRegister();
	BUILDINGSPACE_API class UClass* Z_Construct_UClass_ABuildingSpaceGameModeBase();
	BUILDINGSPACE_API class UClass* Z_Construct_UClass_UPosReport_NoRegister();
	BUILDINGSPACE_API class UClass* Z_Construct_UClass_UPosReport();
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
	void UPosReport::StaticRegisterNativesUPosReport()
	{
	}
	UClass* Z_Construct_UClass_UPosReport_NoRegister()
	{
		return UPosReport::StaticClass();
	}
	UClass* Z_Construct_UClass_UPosReport()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BuildingSpace();
			OuterClass = UPosReport::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UPosReport> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PosReport.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PosReport.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPosReport, 2443577813);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPosReport(Z_Construct_UClass_UPosReport, &UPosReport::StaticClass, TEXT("/Script/BuildingSpace"), TEXT("UPosReport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPosReport);
	UPackage* Z_Construct_UPackage__Script_BuildingSpace()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BuildingSpace")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x094478D3;
			Guid.B = 0xFF279D4D;
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
