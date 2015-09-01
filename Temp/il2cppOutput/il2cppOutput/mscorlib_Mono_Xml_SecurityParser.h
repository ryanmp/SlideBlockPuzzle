#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t881;
// System.Collections.Stack
struct Stack_t300;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t882  : public SmallXmlParser_t883
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t881 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t881 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t300 * ___stack_15;
};
