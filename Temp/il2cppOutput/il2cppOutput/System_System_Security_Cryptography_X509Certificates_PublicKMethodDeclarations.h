#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t466;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t464;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t463;
// System.Security.Cryptography.Oid
struct Oid_t465;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t474;
// System.Byte[]
struct ByteU5BU5D_t131;
// System.Security.Cryptography.DSA
struct DSA_t587;
// System.Security.Cryptography.RSA
struct RSA_t588;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1641 (PublicKey_t466 * __this, X509Certificate_t474 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t464 * PublicKey_get_EncodedKeyValue_m1642 (PublicKey_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t464 * PublicKey_get_EncodedParameters_m1643 (PublicKey_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t463 * PublicKey_get_Key_m1644 (PublicKey_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t465 * PublicKey_get_Oid_m1645 (PublicKey_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t131* PublicKey_GetUnsignedBigInteger_m1646 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t587 * PublicKey_DecodeDSA_m1647 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___rawPublicKey, ByteU5BU5D_t131* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t588 * PublicKey_DecodeRSA_m1648 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
