#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BannerSelectionWidget.BannerSelectionWidget_C.HandleNextCategoryAction
struct UBannerSelectionWidget_C_HandleNextCategoryAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.HandlePreviousCategoryAction
struct UBannerSelectionWidget_C_HandlePreviousCategoryAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.Construct
struct UBannerSelectionWidget_C_Construct_Params
{
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature
struct UBannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature_Params
{
	struct FName                                       IconId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.OnActivated
struct UBannerSelectionWidget_C_OnActivated_Params
{
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature
struct UBannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitFailed
struct UBannerSelectionWidget_C_OnHomebaseNameCommitFailed_Params
{
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitSucceeded
struct UBannerSelectionWidget_C_OnHomebaseNameCommitSucceeded_Params
{
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.GainFocusOfTextBox
struct UBannerSelectionWidget_C_GainFocusOfTextBox_Params
{
};

// Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget
struct UBannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
