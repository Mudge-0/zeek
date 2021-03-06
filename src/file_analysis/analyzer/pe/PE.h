#pragma once

#include <string>

#include "Val.h"
#include "../File.h"
#include "pe_pac.h"

namespace zeek::file_analysis::detail {

/**
 * Analyze Portable Executable files
 */
class PE : public file_analysis::Analyzer {
public:
	~PE();

	static file_analysis::Analyzer* Instantiate(RecordValPtr args,
	                                            file_analysis::File* file)
		{ return new PE(std::move(args), file); }

	virtual bool DeliverStream(const u_char* data, uint64_t len);

	virtual bool EndOfFile();

protected:
	PE(RecordValPtr args, file_analysis::File* file);
	binpac::PE::File* interp;
	binpac::PE::MockConnection* conn;
	bool done;
};

} // namespace zeek::file_analysis::detail

namespace file_analysis {

using PE [[deprecated("Remove in v4.1. Use zeek::file_analysis::detail::PE.")]] = zeek::file_analysis::detail::PE;

} // namespace file_analysis
