// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MecaSOMA : ModuleRules
{
	public MecaSOMA(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
