#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UWidgetAnimation;
#include "TouchRipple__pf2792847264.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Project/Blueprints/TouchRipple.TouchRipple_C", OverrideNativeName="TouchRipple_C"))
class UTouchRipple_C__pf2792847264 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="TouchRippleEffect"))
	UWidgetAnimation* bpv__TouchRippleEffect__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Ripple", Category="TouchRipple", OverrideNativeName="Ripple"))
	UImage* bpv__Ripple__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ripple Effect Triggered", Category="Default", OverrideNativeName="RippleEffectTriggered"))
	bool bpv__RippleEffectTriggered__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetIsRippleEffectFinished_IsFinished"))
	bool b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UTouchRipple_C__pf2792847264(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TouchRipple__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TouchRipple__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TriggerRipple"))
	virtual void bpf__TriggerRipple__pf(FVector2D bpp__TouchPosition__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetIsRippleEffectFinished"))
	virtual void bpf__GetIsRippleEffectFinished__pf(/*out*/ bool& bpp__IsFinished__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsRippleVisible"))
	virtual void bpf__IsRippleVisible__pf(/*out*/ bool& bpp__IsVisible__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
