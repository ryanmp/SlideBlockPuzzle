#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t624;
// System.IO.TextReader
struct TextReader_t886;
// System.Text.Encoding
struct Encoding_t310;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t623  : public Object_t
{
};
struct Console_t623_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t624 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t624 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t886 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t310 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t310 * ___outputEncoding_4;
};
