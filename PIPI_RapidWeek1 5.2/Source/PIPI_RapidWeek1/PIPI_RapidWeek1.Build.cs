// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PIPI_RapidWeek1 : ModuleRules
{
	public PIPI_RapidWeek1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
