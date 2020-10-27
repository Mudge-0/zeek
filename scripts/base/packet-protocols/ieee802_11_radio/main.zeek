module PacketAnalyzer::IEEE802_11_RADIO;

const DLT_IEEE802_11 : count = 105;

event zeek_init()
	{
	PacketAnalyzer::register_packet_analyzer(PacketAnalyzer::ANALYZER_IEEE802_11_RADIO, DLT_IEEE802_11, PacketAnalyzer::ANALYZER_IEEE802_11);
	}