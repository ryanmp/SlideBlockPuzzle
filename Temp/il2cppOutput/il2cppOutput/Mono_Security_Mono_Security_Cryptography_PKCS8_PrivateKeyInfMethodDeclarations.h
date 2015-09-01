#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t670;
// System.Byte[]
struct ByteU5BU5D_t131;
// System.Security.Cryptography.RSA
struct RSA_t588;
// System.Security.Cryptography.DSA
struct DSA_t587;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m2695 (PrivateKeyInfo_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m2696 (PrivateKeyInfo_t670 * __this, ByteU5BU5D_t131* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t131* PrivateKeyInfo_get_PrivateKey_m2697 (PrivateKeyInfo_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m2698 (PrivateKeyInfo_t670 * __this, ByteU5BU5D_t131* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t131* PrivateKeyInfo_RemoveLeadingZero_m2699 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t131* PrivateKeyInfo_Normalize_m2700 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t588 * PrivateKeyInfo_DecodeRSA_m2701 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t587 * PrivateKeyInfo_DecodeDSA_m2702 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___privateKey, DSAParameters_t611  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
