#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "G4s_C_Skeleton_AnimBlueprint__pf3963006189.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RobotBurstAR/AnimationBPs/G4/G4s_C_Skeleton_AnimBlueprint.G4s_C_Skeleton_AnimBlueprint_C", OverrideNativeName="G4s_C_Skeleton_AnimBlueprint_C"))
class UG4s_C_Skeleton_AnimBlueprint_C__pf3963006189 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root_6F39609843545664588C69998A8AF513"))
	FAnimNode_Root bpv__AnimGraphNode_Root_6F39609843545664588C69998A8AF513__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_9B289DBB43E7E9099E36618D5A7A63D8"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_9B289DBB43E7E9099E36618D5A7A63D8__pf;
	UG4s_C_Skeleton_AnimBlueprint_C__pf3963006189(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_G4s_C_Skeleton_AnimBlueprint"))
	void bpf__ExecuteUbergraph_G4s_C_Skeleton_AnimBlueprint__pf(int32 bpp__EntryPoint__pf);
public:
};
