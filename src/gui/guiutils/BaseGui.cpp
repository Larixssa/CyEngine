#include "BaseGui.h"

/// <summary>
/// Main code would go in the create() function.
/// </summary>
void BaseGui::create() {}


/// <summary>
/// Create must be called here or code can be also put in here.
/// Main entry point for the create() function.
/// </summary>
void BaseGui::load()
{
	// Define main class.
	BaseGui bGui;

	// Run create() function from class.
	bGui.create();
}