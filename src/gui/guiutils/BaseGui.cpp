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
	// Run create() function.
	create();
}

/// <summary>
///		<para>Used for updating the status of a GUI.</para>
///		<para>Can be used for GUIs that require input.</para>
/// </summary>
/// <param name="status"></param>
void BaseGui::update(int status) {}