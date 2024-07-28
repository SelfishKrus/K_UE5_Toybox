// Fill out your copyright notice in the Description page of Project Settings.

#include "K_UE5_Toybox.h"
#include "Modules/ModuleManager.h"

#include "Misc/Paths.h"

void FShaderBitsModule::StartupModule()
{
	//#if (ENGINE_MINOR_VERSION >= 21)
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
	//#endif
}

void FShaderBitsModule::ShutdownModule()
{
}

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, K_UE5_Toybox, "K_UE5_Toybox" );
IMPLEMENT_PRIMARY_GAME_MODULE(FShaderBitsModule, Project, "Project");