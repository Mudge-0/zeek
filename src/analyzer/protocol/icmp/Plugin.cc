// See the file  in the main distribution directory for copyright.

#include "ICMP.h"
#include "plugin/Plugin.h"
#include "analyzer/Component.h"

namespace zeek::plugin::detail::Zeek_ICMP {

class Plugin : public zeek::plugin::Plugin {
public:
	zeek::plugin::Configuration Configure() override
		{
		AddComponent(new zeek::analyzer::Component("ICMP", zeek::analyzer::icmp::ICMP_Analyzer::Instantiate));

		zeek::plugin::Configuration config;
		config.name = "Zeek::ICMP";
		config.description = "ICMP analyzer";
		return config;
		}
} plugin;

} // namespace zeek::plugin::detail::Zeek_ICMP
