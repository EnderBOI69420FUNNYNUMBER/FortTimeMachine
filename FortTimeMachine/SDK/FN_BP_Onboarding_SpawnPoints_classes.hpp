#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Onboarding_SpawnPoints.BP_Onboarding_SpawnPoints_C
// 0x0010 (0x0398 - 0x0388)
class ABP_Onboarding_SpawnPoints_C : public AActor
{
public:
	class UBillboardComponent*                         Billboard;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Onboarding_SpawnPoints.BP_Onboarding_SpawnPoints_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif