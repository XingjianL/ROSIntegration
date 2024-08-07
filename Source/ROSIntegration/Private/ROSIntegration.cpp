#include "ROSIntegration.h"

#define LOCTEXT_NAMESPACE "FROSIntegrationModule"

void FROSIntegrationModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FROSIntegrationModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

// IMPLEMENT_MODULE(FROSIntegrationModule, ROSIntegration)
// IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, ROSIntegration, "ROSIntegration" )
IMPLEMENT_GAME_MODULE( FDefaultGameModuleImpl, ROSIntegration)