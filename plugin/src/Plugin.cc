#include "config.h"
#include "Plugin.h"

namespace zeek::plugin::Zeek_zeekjs-rust-hello-world { Plugin plugin; }

using namespace zeek::plugin::Zeek_zeekjs-rust-hello-world;

zeek::plugin::Configuration Plugin::Configure()
	{
	zeek::plugin::Configuration config;
	config.name = "Zeek::zeekjs-rust-hello-world";
	config.description = "TODO: Insert description";
	config.version.major = VERSION_MAJOR;
	config.version.minor = VERSION_MINOR;
	config.version.patch = VERSION_PATCH;
	return config;
	}
