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

// BlueprintGeneratedClass OB_Tractor_Special.OB_Tractor_Special_C
// 0x000E (0x11A8 - 0x119A)
class AOB_Tractor_Special_C : public ACar_Copper_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x119A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OB_Tractor_Special.OB_Tractor_Special_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ExecuteUbergraph_OB_Tractor_Special(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif