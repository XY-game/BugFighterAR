#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "RobotBurst/AR/ARManager.h"
class UApplicationLifecycleComponent;
class UTouchEffectComponent_C__pf2792847264;
class UGoogleARCorePointCloudRendererComponent;
class USceneComponent;
class AARPlaneActor;
#include "ARManager__pf2792847264.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Project/Blueprints/ARManager.ARManager_C", OverrideNativeName="ARManager_C"))
class AARManager_C__pf2792847264 : public AARManager
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ApplicationLifecycle"))
	UApplicationLifecycleComponent* bpv__ApplicationLifecycle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TouchEffectComponent"))
	UTouchEffectComponent_C__pf2792847264* bpv__TouchEffectComponent__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GoogleARCorePointCloudRenderer"))
	UGoogleARCorePointCloudRendererComponent* bpv__GoogleARCorePointCloudRenderer__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Image UV", Category="Default", OverrideNativeName="CameraImageUV"))
	TArray<FVector2D> bpv__CameraImageUV__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Plane Actor Map", Category="Default", OverrideNativeName="PlaneActorMap"))
	TMap<int32,AARPlaneActor*> bpv__PlaneActorMap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	AARManager_C__pf2792847264(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ARManager__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdatePlaneActors"))
	virtual void bpf__UpdatePlaneActors__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="ARData", CppFromBpEvent, OverrideNativeName="IsARPlanesActive"))
	bool  bpf__IsARPlanesActive__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="ARData", CppFromBpEvent, OverrideNativeName="GetMainARWorldCenterTransform"))
	FTransform  bpf__GetMainARWorldCenterTransform__pf();
public:
};
