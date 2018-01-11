#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
class UTouchRipple_C__pf2792847264;
#include "TouchEffectComponent__pf2792847264.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Project/Blueprints/TouchEffectComponent.TouchEffectComponent_C", OverrideNativeName="TouchEffectComponent_C"))
class UTouchEffectComponent_C__pf2792847264 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ripple Effect Pool", Category="Default", OverrideNativeName="RippleEffectPool"))
	TArray<UTouchRipple_C__pf2792847264*> bpv__RippleEffectPool__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UTouchRipple_C__pf2792847264* b0l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UTouchEffectComponent_C__pf2792847264(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TouchEffectComponent__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its Owner\'s BeginPlay on Actor BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowTouchEffect"))
	virtual void bpf__ShowTouchEffect__pf(FVector2D bpp__ScreenPosition__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetUnusedRipple"))
	virtual void bpf__GetUnusedRipple__pf(/*out*/ UTouchRipple_C__pf2792847264*& bpp__RippleInstance__pf);
public:
};
