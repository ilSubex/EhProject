// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EH_GP3_25 : ModuleRules
{
	public EH_GP3_25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
