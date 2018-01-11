#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("GoogleARCoreBase"), TEXT("GoogleARCorePointCloudRendererComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ApplicationLifecycleComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("RobotBurst"), TEXT("ARManager"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("RobotBurst"), TEXT("ARDataInterface"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("RobotBurst"), TEXT("ARPlaneActor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("BlueprintMapLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("GoogleARCoreBase"), TEXT("EGoogleARCorePlaneTrackingState"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetArrayLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("GoogleARCoreBase"), TEXT("GoogleARCorePlane"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("GoogleARCoreBase"), TEXT("GoogleARCoreFrameFunctionLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameplayStatics"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Project/Blueprints"), TEXT("TouchEffectComponent"), TEXT("TouchEffectComponent_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Project/Blueprints"), TEXT("ARCorePlaneActor"), TEXT("ARCorePlaneActor_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Project/Materials"), TEXT("ARPlane_Mat"), TEXT("ARPlane_Mat"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMaterialLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerController"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("WidgetBlueprintLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("UserWidget"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ActorComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Widget"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Project/Blueprints"), TEXT("TouchRipple"), TEXT("TouchRipple_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Project/Textures"), TEXT("Touch_Effect_xxxhdpi"), TEXT("Touch_Effect_xxxhdpi"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Image"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("SlateCore"), TEXT("Geometry"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("ESlateVisibility"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("WidgetAnimation"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CameraComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Pawn"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIController"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/RobotBurstAR/AnimationBPs/G4"), TEXT("G4s_C_Skeleton_BlendSpace1D"), TEXT("G4s_C_Skeleton_BlendSpace1D"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
	FBlueprintDependencyObjectRef(TEXT("/Game/RobotBurstAR/Character/Mesh/G4"), TEXT("G4s_C_Skeleton"), TEXT("G4s_C_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AnimInstance"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AnimGraphRuntime"), TEXT("AnimNode_Root"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AnimGraphRuntime"), TEXT("AnimNode_BlendSpacePlayer"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SkeletalMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 41));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
