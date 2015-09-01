#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t682;
// System.String[]
struct StringU5BU5D_t18;
// Mono.Security.ASN1
struct ASN1_t589;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m2854 (GeneralNames_t682 * __this, ASN1_t589 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t18* GeneralNames_get_DNSNames_m2855 (GeneralNames_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t18* GeneralNames_get_IPAddresses_m2856 (GeneralNames_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m2857 (GeneralNames_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
