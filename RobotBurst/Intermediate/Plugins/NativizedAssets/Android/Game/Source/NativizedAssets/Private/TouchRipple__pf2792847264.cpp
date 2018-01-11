#include "NativizedAssets.h"
#include "TouchRipple__pf2792847264.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollision.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/CrowdManagerBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdManager.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Private/Animation/MovieScene2DTransformTemplate.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneColorTemplate.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UTouchRipple_C__pf2792847264::UTouchRipple_C__pf2792847264(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UTouchRipple_C__pf2792847264::StaticClass() == GetClass()))
	{
		UTouchRipple_C__pf2792847264::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__TouchRippleEffect__pf = nullptr;
	bpv__Ripple__pf = nullptr;
	bpv__RippleEffectTriggered__pf = false;
	bCanEverPaint = false;
}
void UTouchRipple_C__pf2792847264::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UTouchRipple_C__pf2792847264::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("TouchRippleEffect_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__2), UPanelWidget::__PPO__Slots() )));
	__Local__3 = TArray<UPanelSlot*> ();
	__Local__3.Reserve(1);
	auto __Local__4 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__4->LayoutData.Offsets.Right = 144.000000f;
	__Local__4->LayoutData.Offsets.Bottom = 144.000000f;
	__Local__4->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__4->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__4->LayoutData.Alignment = FVector2D(1.000000, 1.000000);
	__Local__4->Parent = __Local__2;
	auto __Local__5 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Ripple"));
	__Local__5->Brush.ImageSize = FVector2D(640.000000, 640.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<UObject* >(&(__Local__5->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__6 = CastChecked<UObject>(CastChecked<UDynamicClass>(UTouchRipple_C__pf2792847264::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__5->Slot = __Local__4;
	__Local__4->Content = __Local__5;
	__Local__3.Add(__Local__4);
	__Local__0->RootWidget = __Local__2;
	auto __Local__7 = NewObject<UMovieScene>(__Local__1, UMovieScene::StaticClass(), TEXT("TouchRippleEffect"));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__7), UMovieScene::__PPO__Possessables() )));
	__Local__8 = TArray<FMovieScenePossessable> ();
	__Local__8.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__8.GetData(), 1);
	auto& __Local__9 = __Local__8[0];
	auto& __Local__10 = (*(AccessPrivateProperty<FGuid >(&(__Local__9), FMovieScenePossessable::__PPO__Guid() )));
	__Local__10 = FGuid(0x2D2CE917, 0x4C85D39E, 0xD2A23A87, 0x7EE0A1CB);
	auto& __Local__11 = (*(AccessPrivateProperty<FString >(&(__Local__9), FMovieScenePossessable::__PPO__Name() )));
	__Local__11 = FString(TEXT("Ripple"));
	auto& __Local__12 = (*(AccessPrivateProperty<UClass* >(&(__Local__9), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__12 = UImage::StaticClass();
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__7), UMovieScene::__PPO__ObjectBindings() )));
	__Local__13 = TArray<FMovieSceneBinding> ();
	__Local__13.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__13.GetData(), 1);
	auto& __Local__14 = __Local__13[0];
	auto& __Local__15 = (*(AccessPrivateProperty<FGuid >(&(__Local__14), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__15 = FGuid(0x2D2CE917, 0x4C85D39E, 0xD2A23A87, 0x7EE0A1CB);
	auto& __Local__16 = (*(AccessPrivateProperty<FString >(&(__Local__14), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__16 = FString(TEXT("Ripple"));
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__14), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__17 = TArray<UMovieSceneTrack*> ();
	__Local__17.Reserve(2);
	auto __Local__18 = NewObject<UMovieScene2DTransformTrack>(__Local__7, UMovieScene2DTransformTrack::StaticClass(), TEXT("MovieScene2DTransformTrack_0"));
	auto& __Local__19 = (*(AccessPrivateProperty<FName >((__Local__18), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__19 = FName(TEXT("RenderTransform"));
	auto& __Local__20 = (*(AccessPrivateProperty<FString >((__Local__18), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__20 = FString(TEXT("RenderTransform"));
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__18), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__21 = TArray<UMovieSceneSection*> ();
	__Local__21.Reserve(1);
	auto __Local__22 = NewObject<UMovieScene2DTransformSection>(__Local__18, UMovieScene2DTransformSection::StaticClass(), TEXT("MovieScene2DTransformSection_0"));
	auto& __Local__23 = (*(AccessPrivateProperty<FRichCurve >((__Local__22), UMovieScene2DTransformSection::__PPO__Scale() )));
	__Local__23.Keys = TArray<FRichCurveKey> ();
	__Local__23.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__23.Keys.GetData(), 2);
	auto& __Local__24 = __Local__23.Keys[0];
	__Local__24.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__24.Value = 1.000000f;
	auto& __Local__25 = __Local__23.Keys[1];
	__Local__25.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__25.Time = 0.300000f;
	__Local__25.Value = 2.000000f;
	auto& __Local__26 = (*(AccessPrivateProperty<FRichCurve >((__Local__22), UMovieScene2DTransformSection::__PPO__Scale() , sizeof(FRichCurve ), 1)));
	__Local__26.Keys = TArray<FRichCurveKey> ();
	__Local__26.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__26.Keys.GetData(), 2);
	auto& __Local__27 = __Local__26.Keys[0];
	__Local__27.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__27.Value = 1.000000f;
	auto& __Local__28 = __Local__26.Keys[1];
	__Local__28.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__28.Time = 0.300000f;
	__Local__28.Value = 2.000000f;
	auto __Local__29 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__22, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__29->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__22->Easing.EaseIn = __Local__29;
	auto __Local__30 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__22, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__30->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__22->Easing.EaseOut = __Local__30;
	auto& __Local__31 = (*(AccessPrivateProperty<float >((__Local__22), UMovieSceneSection::__PPO__EndTime() )));
	__Local__31 = 0.300000f;
	auto& __Local__32 = (*(AccessPrivateProperty<FGuid >((__Local__22), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__32 = FGuid(0x6B57E680, 0x44D5B6D8, 0xB2260DAD, 0xBEF4B6EE);
	__Local__21.Add(__Local__22);
	auto& __Local__33 = (*(AccessPrivateProperty<FGuid >((__Local__18), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__33 = FGuid(0x79F6954E, 0x4CFE7EFC, 0xDCE2AEAE, 0xA3D2BC57);
	__Local__17.Add(__Local__18);
	auto __Local__34 = NewObject<UMovieSceneColorTrack>(__Local__7, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_0"));
	auto& __Local__35 = (*(AccessPrivateProperty<FName >((__Local__34), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__35 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__36 = (*(AccessPrivateProperty<FString >((__Local__34), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__36 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__34), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__37 = TArray<UMovieSceneSection*> ();
	__Local__37.Reserve(1);
	auto __Local__38 = NewObject<UMovieSceneColorSection>(__Local__34, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__39 = (*(AccessPrivateProperty<FRichCurve >((__Local__38), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__39.Keys = TArray<FRichCurveKey> ();
	__Local__39.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__39.Keys.GetData(), 1);
	auto& __Local__40 = __Local__39.Keys[0];
	__Local__40.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__40.Value = 1.000000f;
	auto& __Local__41 = (*(AccessPrivateProperty<FRichCurve >((__Local__38), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__41.Keys = TArray<FRichCurveKey> ();
	__Local__41.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__41.Keys.GetData(), 1);
	auto& __Local__42 = __Local__41.Keys[0];
	__Local__42.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__42.Value = 1.000000f;
	auto& __Local__43 = (*(AccessPrivateProperty<FRichCurve >((__Local__38), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__43.Keys = TArray<FRichCurveKey> ();
	__Local__43.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__43.Keys.GetData(), 1);
	auto& __Local__44 = __Local__43.Keys[0];
	__Local__44.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__44.Value = 1.000000f;
	auto& __Local__45 = (*(AccessPrivateProperty<FRichCurve >((__Local__38), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__45.Keys = TArray<FRichCurveKey> ();
	__Local__45.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__45.Keys.GetData(), 2);
	auto& __Local__46 = __Local__45.Keys[0];
	__Local__46.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__46.Value = 1.000000f;
	auto& __Local__47 = __Local__45.Keys[1];
	__Local__47.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__47.Time = 0.300000f;
	auto __Local__48 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__38, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__48->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__38->Easing.EaseIn = __Local__48;
	auto __Local__49 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__38, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__49->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__38->Easing.EaseOut = __Local__49;
	auto& __Local__50 = (*(AccessPrivateProperty<float >((__Local__38), UMovieSceneSection::__PPO__EndTime() )));
	__Local__50 = 0.300000f;
	auto& __Local__51 = (*(AccessPrivateProperty<FGuid >((__Local__38), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__51 = FGuid(0xEB93CB7A, 0x45554D41, 0x66BE7BB9, 0xF2C96C41);
	__Local__37.Add(__Local__38);
	auto& __Local__52 = (*(AccessPrivateProperty<FGuid >((__Local__34), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__52 = FGuid(0x98514374, 0x4DE63B8D, 0x51F2D89B, 0xF76671F6);
	__Local__17.Add(__Local__34);
	auto& __Local__53 = (*(AccessPrivateProperty<FFloatRange >((__Local__7), UMovieScene::__PPO__PlaybackRange() )));
	__Local__53 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000));
	auto& __Local__54 = (*(AccessPrivateProperty<float >((__Local__7), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__54 = 0.050000f;
	auto& __Local__55 = (*(AccessPrivateProperty<FGuid >((__Local__7), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__55 = FGuid(0x06B4BDB3, 0x45000BD3, 0xE37E1D81, 0xEC348BBD);
	__Local__1->MovieScene = __Local__7;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__56 = __Local__1->AnimationBindings[0];
	__Local__56.WidgetName = FName(TEXT("Ripple"));
	__Local__56.AnimationGuid = FGuid(0x2D2CE917, 0x4C85D39E, 0xD2A23A87, 0x7EE0A1CB);
	auto& __Local__57 = (*(AccessPrivateProperty<TMap<uint32,FMovieSceneEvaluationTrack> >(&(__Local__1->EvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__57 = {};
	__Local__57.Reserve(2);
	static TWeakObjectPtr<UProperty> __Local__60{};
	const UProperty* __Local__59 = __Local__60.Get();
	if (nullptr == __Local__59)
	{
		__Local__59 = (FMovieSceneEvaluationTemplate::StaticStruct())->FindPropertyByName(FName(TEXT("Tracks")));
		check(__Local__59);
		__Local__60 = __Local__59;
	}
	FScriptMapHelper __Local__58(CastChecked<UMapProperty>(__Local__59), &__Local__57);
	TMap<uint32,FMovieSceneEvaluationTrack>::ElementType& __Local__61 = *(TMap<uint32,FMovieSceneEvaluationTrack>::ElementType*)__Local__58.GetPairPtr(__Local__58.AddDefaultValue_Invalid_NeedsRehash());
	__Local__61.Key = 0;
	auto& __Local__62 = (*(AccessPrivateProperty<FGuid >(&(__Local__61.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__62 = FGuid(0x2D2CE917, 0x4C85D39E, 0xD2A23A87, 0x7EE0A1CB);
	auto& __Local__63 = (*(AccessPrivateProperty<uint16 >(&(__Local__61.Value), FMovieSceneEvaluationTrack::__PPO__EvaluationPriority() )));
	__Local__63 = 1000;
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__61.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	__Local__64 = TArray<FMovieSceneSegment> ();
	__Local__64.Reserve(1);
	__Local__64.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__61.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__65 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__65.Reserve(1);
	__Local__65.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieScene2DTransformSectionTemplate::StaticStruct()));
	auto& __Local__66 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__65[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() )));
	__Local__66.Keys = TArray<FRichCurveKey> ();
	__Local__66.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__66.Keys.GetData(), 2);
	auto& __Local__67 = __Local__66.Keys[0];
	__Local__67.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__67.Value = 1.000000f;
	auto& __Local__68 = __Local__66.Keys[1];
	__Local__68.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__68.Time = 0.300000f;
	__Local__68.Value = 2.000000f;
	auto& __Local__69 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__65[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() , sizeof(FRichCurve ), 1)));
	__Local__69.Keys = TArray<FRichCurveKey> ();
	__Local__69.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__69.Keys.GetData(), 2);
	auto& __Local__70 = __Local__69.Keys[0];
	__Local__70.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__70.Value = 1.000000f;
	auto& __Local__71 = __Local__69.Keys[1];
	__Local__71.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__71.Time = 0.300000f;
	__Local__71.Value = 2.000000f;
	auto& __Local__72 = (*(AccessPrivateProperty<EMovieSceneBlendType >((((FMovieScene2DTransformSectionTemplate*)__Local__65[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__BlendType() )));
	__Local__72 = EMovieSceneBlendType::Absolute;
	auto& __Local__73 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieScene2DTransformSectionTemplate*)__Local__65[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__73.PropertyName = FName(TEXT("RenderTransform"));
	__Local__73.PropertyPath = FString(TEXT("RenderTransform"));
	auto& __Local__74 = (*(AccessPrivateProperty<EMovieSceneCompletionMode >((((FMovieScene2DTransformSectionTemplate*)__Local__65[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__CompletionMode() )));
	__Local__74 = EMovieSceneCompletionMode::RestoreState;
	auto& __Local__75 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieScene2DTransformSectionTemplate*)__Local__65[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__75 = __Local__22;
	TMap<uint32,FMovieSceneEvaluationTrack>::ElementType& __Local__76 = *(TMap<uint32,FMovieSceneEvaluationTrack>::ElementType*)__Local__58.GetPairPtr(__Local__58.AddDefaultValue_Invalid_NeedsRehash());
	__Local__76.Key = 1;
	auto& __Local__77 = (*(AccessPrivateProperty<FGuid >(&(__Local__76.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__77 = FGuid(0x2D2CE917, 0x4C85D39E, 0xD2A23A87, 0x7EE0A1CB);
	auto& __Local__78 = (*(AccessPrivateProperty<uint16 >(&(__Local__76.Value), FMovieSceneEvaluationTrack::__PPO__EvaluationPriority() )));
	__Local__78 = 1000;
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__76.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	__Local__79 = TArray<FMovieSceneSegment> ();
	__Local__79.Reserve(1);
	__Local__79.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__76.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__80 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__80.Reserve(1);
	__Local__80.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[0].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[0].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[0].Keys.GetData(), 1);
	auto& __Local__81 = ((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[0].Keys[0];
	__Local__81.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__81.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[1].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[1].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[1].Keys.GetData(), 1);
	auto& __Local__82 = ((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[1].Keys[0];
	__Local__82.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__82.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[2].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[2].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[2].Keys.GetData(), 1);
	auto& __Local__83 = ((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[2].Keys[0];
	__Local__83.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__83.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[3].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[3].Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[3].Keys.GetData(), 2);
	auto& __Local__84 = ((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[3].Keys[0];
	__Local__84.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__84.Value = 1.000000f;
	auto& __Local__85 = ((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->Curves[3].Keys[1];
	__Local__85.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__85.Time = 0.300000f;
	((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__86 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__86.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__86.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__87 = (*(AccessPrivateProperty<EMovieSceneCompletionMode >((((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__CompletionMode() )));
	__Local__87 = EMovieSceneCompletionMode::RestoreState;
	auto& __Local__88 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__80[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__88 = __Local__38;
	__Local__58.Rehash();
	__Local__1->EvaluationTemplate.EvaluationField.Ranges = TArray<FFloatRange> ();
	__Local__1->EvaluationTemplate.EvaluationField.Ranges.Reserve(1);
	__Local__1->EvaluationTemplate.EvaluationField.Ranges.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)));
	__Local__1->EvaluationTemplate.EvaluationField.Groups = TArray<FMovieSceneEvaluationGroup> ();
	__Local__1->EvaluationTemplate.EvaluationField.Groups.AddUninitialized(1);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__1->EvaluationTemplate.EvaluationField.Groups.GetData(), 1);
	auto& __Local__89 = __Local__1->EvaluationTemplate.EvaluationField.Groups[0];
	__Local__89.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__89.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__89.LUTIndices.GetData(), 1);
	auto& __Local__90 = __Local__89.LUTIndices[0];
	__Local__90.NumEvalPtrs = 2;
	__Local__89.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__89.SegmentPtrLUT.AddUninitialized(2);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__89.SegmentPtrLUT.GetData(), 2);
	auto& __Local__91 = __Local__89.SegmentPtrLUT[0];
	auto& __Local__92 = (*(AccessPrivateProperty<uint32 >(&(__Local__91.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__92 = 0;
	auto& __Local__93 = (*(AccessPrivateProperty<uint32 >(&(__Local__91.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__93 = 1;
	auto& __Local__94 = __Local__89.SegmentPtrLUT[1];
	auto& __Local__95 = (*(AccessPrivateProperty<uint32 >(&(__Local__94.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__95 = 0;
	auto& __Local__96 = (*(AccessPrivateProperty<uint32 >(&(__Local__94.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__96 = 0;
	__Local__1->EvaluationTemplate.EvaluationField.MetaData = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__1->EvaluationTemplate.EvaluationField.MetaData.AddUninitialized(1);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__1->EvaluationTemplate.EvaluationField.MetaData.GetData(), 1);
	auto& __Local__97 = __Local__1->EvaluationTemplate.EvaluationField.MetaData[0];
	__Local__97.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__97.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__97.ActiveSequences.GetData(), 1);
	auto& __Local__98 = __Local__97.ActiveSequences[0];
	auto& __Local__99 = (*(AccessPrivateProperty<uint32 >(&(__Local__98), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__99 = 0;
	__Local__97.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__97.ActiveEntities.AddUninitialized(4);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__97.ActiveEntities.GetData(), 4);
	auto& __Local__100 = __Local__97.ActiveEntities[0];
	auto& __Local__101 = (*(AccessPrivateProperty<uint32 >(&(__Local__100.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__101 = 0;
	auto& __Local__102 = (*(AccessPrivateProperty<uint32 >(&(__Local__100.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__102 = 0;
	__Local__100.Key.SectionIdentifier = 0;
	__Local__100.EvaluationIndex = 3;
	auto& __Local__103 = __Local__97.ActiveEntities[1];
	auto& __Local__104 = (*(AccessPrivateProperty<uint32 >(&(__Local__103.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__104 = 0;
	auto& __Local__105 = (*(AccessPrivateProperty<uint32 >(&(__Local__103.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__105 = 0;
	__Local__103.EvaluationIndex = 2;
	auto& __Local__106 = __Local__97.ActiveEntities[2];
	auto& __Local__107 = (*(AccessPrivateProperty<uint32 >(&(__Local__106.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__107 = 0;
	auto& __Local__108 = (*(AccessPrivateProperty<uint32 >(&(__Local__106.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__108 = 1;
	__Local__106.Key.SectionIdentifier = 0;
	__Local__106.EvaluationIndex = 1;
	auto& __Local__109 = __Local__97.ActiveEntities[3];
	auto& __Local__110 = (*(AccessPrivateProperty<uint32 >(&(__Local__109.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__110 = 0;
	auto& __Local__111 = (*(AccessPrivateProperty<uint32 >(&(__Local__109.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__111 = 1;
	auto& __Local__112 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__1->EvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__113 = (*(AccessPrivateProperty<uint32 >(&(__Local__112.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__113 = 1;
	__Local__112.TrackReferenceCounts = {};
	__Local__112.TrackReferenceCounts.Reserve(2);
	static TWeakObjectPtr<UProperty> __Local__116{};
	const UProperty* __Local__115 = __Local__116.Get();
	if (nullptr == __Local__115)
	{
		__Local__115 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackReferenceCounts")));
		check(__Local__115);
		__Local__116 = __Local__115;
	}
	FScriptMapHelper __Local__114(CastChecked<UMapProperty>(__Local__115), &__Local__112.TrackReferenceCounts);
	TMap<FMovieSceneTrackIdentifier,int32>::ElementType& __Local__117 = *(TMap<FMovieSceneTrackIdentifier,int32>::ElementType*)__Local__114.GetPairPtr(__Local__114.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__118 = (*(AccessPrivateProperty<uint32 >(&(__Local__117.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__118 = 0;
	__Local__117.Value = 0;
	TMap<FMovieSceneTrackIdentifier,int32>::ElementType& __Local__119 = *(TMap<FMovieSceneTrackIdentifier,int32>::ElementType*)__Local__114.GetPairPtr(__Local__114.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__120 = (*(AccessPrivateProperty<uint32 >(&(__Local__119.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__120 = 1;
	__Local__119.Value = 1;
	__Local__114.Rehash();
	__Local__112.TrackSignatureToTrackIdentifier = {};
	__Local__112.TrackSignatureToTrackIdentifier.Reserve(2);
	static TWeakObjectPtr<UProperty> __Local__123{};
	const UProperty* __Local__122 = __Local__123.Get();
	if (nullptr == __Local__122)
	{
		__Local__122 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackSignatureToTrackIdentifier")));
		check(__Local__122);
		__Local__123 = __Local__122;
	}
	FScriptMapHelper __Local__121(CastChecked<UMapProperty>(__Local__122), &__Local__112.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifiers>::ElementType& __Local__124 = *(TMap<FGuid,FMovieSceneTrackIdentifiers>::ElementType*)__Local__121.GetPairPtr(__Local__121.AddDefaultValue_Invalid_NeedsRehash());
	__Local__124.Key.A = 2046203214;
	__Local__124.Key.B = 1291747068;
	__Local__124.Key.C = -589123922;
	__Local__124.Key.D = -1546470313;
	__Local__124.Value.Data = TArray<FMovieSceneTrackIdentifier> ();
	__Local__124.Value.Data.AddUninitialized(1);
	FMovieSceneTrackIdentifier::StaticStruct()->InitializeStruct(__Local__124.Value.Data.GetData(), 1);
	auto& __Local__125 = __Local__124.Value.Data[0];
	auto& __Local__126 = (*(AccessPrivateProperty<uint32 >(&(__Local__125), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__126 = 0;
	TMap<FGuid,FMovieSceneTrackIdentifiers>::ElementType& __Local__127 = *(TMap<FGuid,FMovieSceneTrackIdentifiers>::ElementType*)__Local__121.GetPairPtr(__Local__121.AddDefaultValue_Invalid_NeedsRehash());
	__Local__127.Key.A = -1739504780;
	__Local__127.Key.B = 1306934157;
	__Local__127.Key.C = 1374869659;
	__Local__127.Key.D = -144281098;
	__Local__127.Value.Data = TArray<FMovieSceneTrackIdentifier> ();
	__Local__127.Value.Data.AddUninitialized(1);
	FMovieSceneTrackIdentifier::StaticStruct()->InitializeStruct(__Local__127.Value.Data.GetData(), 1);
	auto& __Local__128 = __Local__127.Value.Data[0];
	auto& __Local__129 = (*(AccessPrivateProperty<uint32 >(&(__Local__128), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__129 = 1;
	__Local__121.Rehash();
	auto& __Local__130 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__130 = FGuid(0x7E3D27C5, 0x4A731CE2, 0x3C79ED8E, 0x4F1C5AFF);
}
void UTouchRipple_C__pf2792847264::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__131;
	SlotNames.Append(__Local__131);
}
void UTouchRipple_C__pf2792847264::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__132;
	__Local__132.Reserve(1);
	__Local__132.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UTouchRipple_C__pf2792847264::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__133;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UTouchRipple_C__pf2792847264::StaticClass())->MiscConvertedSubobjects[0]), __Local__132, __Local__133);
}
void UTouchRipple_C__pf2792847264::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UTouchRipple_C__pf2792847264::bpf__ExecuteUbergraph_TouchRipple__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	bpv__RippleEffectTriggered__pf = false;
	SetVisibility(ESlateVisibility::Collapsed);
	return; // KCST_GotoReturn
}
void UTouchRipple_C__pf2792847264::bpf__ExecuteUbergraph_TouchRipple__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpf__GetIsRippleEffectFinished__pf(/*out*/ b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf);
	if (!b0l__CallFunc_GetIsRippleEffectFinished_IsFinished__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__RippleEffectTriggered__pf = false;
	SetVisibility(ESlateVisibility::Collapsed);
	return; // KCST_GotoReturn
}
void UTouchRipple_C__pf2792847264::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_TouchRipple__pf_1(8);
}
void UTouchRipple_C__pf2792847264::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_TouchRipple__pf_0(5);
}
void UTouchRipple_C__pf2792847264::bpf__TriggerRipple__pf(FVector2D bpp__TouchPosition__pf)
{
	UUserWidget::SetPositionInViewport(bpp__TouchPosition__pf, true);
	SetVisibility(ESlateVisibility::Visible);
	UUserWidget::PlayAnimation(bpv__TouchRippleEffect__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
	bpv__RippleEffectTriggered__pf = true;
}
void UTouchRipple_C__pf2792847264::bpf__GetIsRippleEffectFinished__pf(/*out*/ bool& bpp__IsFinished__pf)
{
	bool bpfv__CallFunc_IsAnimationPlaying_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bpfv__CallFunc_IsAnimationPlaying_ReturnValue__pf = UUserWidget::IsAnimationPlaying(bpv__TouchRippleEffect__pf);
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsAnimationPlaying_ReturnValue__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__RippleEffectTriggered__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
	bpp__IsFinished__pf = bpfv__CallFunc_BooleanAND_ReturnValue__pf;
}
void UTouchRipple_C__pf2792847264::bpf__IsRippleVisible__pf(/*out*/ bool& bpp__IsVisible__pf)
{
	ESlateVisibility bpfv__CallFunc_GetVisibility_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bpfv__CallFunc_GetVisibility_ReturnValue__pf = UWidget::GetVisibility();
	bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetVisibility_ReturnValue__pf), static_cast<uint8>(ESlateVisibility::Visible));
	bpp__IsVisible__pf = bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf;
}
void UTouchRipple_C__pf2792847264::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Project/Textures/Touch_Effect_xxxhdpi.Touch_Effect_xxxhdpi 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void UTouchRipple_C__pf2792847264::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UTouchRipple_C__pf2792847264
{
	FRegisterHelper__UTouchRipple_C__pf2792847264()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Project/Blueprints/TouchRipple"), &UTouchRipple_C__pf2792847264::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UTouchRipple_C__pf2792847264 Instance;
};
FRegisterHelper__UTouchRipple_C__pf2792847264 FRegisterHelper__UTouchRipple_C__pf2792847264::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
