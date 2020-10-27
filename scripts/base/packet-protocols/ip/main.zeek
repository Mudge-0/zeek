module PacketAnalyzer::IP;

event zeek_init()
	{
	PacketAnalyzer::register_packet_analyzer(PacketAnalyzer::ANALYZER_IP, 4, PacketAnalyzer::ANALYZER_IPTUNNEL);
	PacketAnalyzer::register_packet_analyzer(PacketAnalyzer::ANALYZER_IP, 41, PacketAnalyzer::ANALYZER_IPTUNNEL);
	PacketAnalyzer::register_packet_analyzer(PacketAnalyzer::ANALYZER_IP, 47, PacketAnalyzer::ANALYZER_GRE);
	}
