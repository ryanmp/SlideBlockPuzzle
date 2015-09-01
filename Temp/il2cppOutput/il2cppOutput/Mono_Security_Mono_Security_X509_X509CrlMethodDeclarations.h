#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t591;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t618;
// System.Byte[]
struct ByteU5BU5D_t131;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t593;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t474;
// System.Security.Cryptography.DSA
struct DSA_t587;
// System.Security.Cryptography.RSA
struct RSA_t588;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t463;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m2812 (X509Crl_t591 * __this, ByteU5BU5D_t131* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m2813 (X509Crl_t591 * __this, ByteU5BU5D_t131* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t618 * X509Crl_get_Extensions_m2435 (X509Crl_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t131* X509Crl_get_Hash_m2814 (X509Crl_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m2443 (X509Crl_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t85  X509Crl_get_NextUpdate_m2441 (X509Crl_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m2815 (X509Crl_t591 * __this, ByteU5BU5D_t131* ___array1, ByteU5BU5D_t131* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t593 * X509Crl_GetCrlEntry_m2439 (X509Crl_t591 * __this, X509Certificate_t474 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t593 * X509Crl_GetCrlEntry_m2816 (X509Crl_t591 * __this, ByteU5BU5D_t131* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m2817 (X509Crl_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m2818 (X509Crl_t591 * __this, DSA_t587 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m2819 (X509Crl_t591 * __this, RSA_t588 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m2438 (X509Crl_t591 * __this, AsymmetricAlgorithm_t463 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
