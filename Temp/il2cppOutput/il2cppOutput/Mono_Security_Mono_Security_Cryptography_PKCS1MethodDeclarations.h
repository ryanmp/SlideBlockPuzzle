#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t669;
// System.Byte[]
struct ByteU5BU5D_t131;
// System.Security.Cryptography.RSA
struct RSA_t588;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t667;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m2685 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m2686 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___array1, ByteU5BU5D_t131* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t131* PKCS1_I2OSP_m2687 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t131* PKCS1_OS2IP_m2688 (Object_t * __this /* static, unused */, ByteU5BU5D_t131* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t131* PKCS1_RSASP1_m2689 (Object_t * __this /* static, unused */, RSA_t588 * ___rsa, ByteU5BU5D_t131* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t131* PKCS1_RSAVP1_m2690 (Object_t * __this /* static, unused */, RSA_t588 * ___rsa, ByteU5BU5D_t131* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t131* PKCS1_Sign_v15_m2691 (Object_t * __this /* static, unused */, RSA_t588 * ___rsa, HashAlgorithm_t667 * ___hash, ByteU5BU5D_t131* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m2692 (Object_t * __this /* static, unused */, RSA_t588 * ___rsa, HashAlgorithm_t667 * ___hash, ByteU5BU5D_t131* ___hashValue, ByteU5BU5D_t131* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m2693 (Object_t * __this /* static, unused */, RSA_t588 * ___rsa, HashAlgorithm_t667 * ___hash, ByteU5BU5D_t131* ___hashValue, ByteU5BU5D_t131* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t131* PKCS1_Encode_v15_m2694 (Object_t * __this /* static, unused */, HashAlgorithm_t667 * ___hash, ByteU5BU5D_t131* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
