﻿#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t131;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t618;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t593  : public Object_t
{
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t131* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t85  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t618 * ___extensions_2;
};