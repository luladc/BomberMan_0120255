// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomberMan_0120255 : ModuleRules
{
	public BomberMan_0120255(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Niagara", "AIModule", "NavigationSystem" });
	}
}
