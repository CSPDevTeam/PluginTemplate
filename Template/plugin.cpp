#include "pch.h"
#include <plugin.h>

cspLogger logger("Template");

void PluginInit() {
	logger.info("plugin loaded.");
}