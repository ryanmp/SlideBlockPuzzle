#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t721;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t463;
// System.Byte[]
struct ByteU5BU5D_t131;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter__ctor_m3098 (RSASslSignatureDeformatter_t721 * __this, AsymmetricAlgorithm_t463 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSASslSignatureDeformatter_VerifySignature_m3099 (RSASslSignatureDeformatter_t721 * __this, ByteU5BU5D_t131* ___rgbHash, ByteU5BU5D_t131* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureDeformatter_SetHashAlgorithm_m3100 (RSASslSignatureDeformatter_t721 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter_SetKey_m3101 (RSASslSignatureDeformatter_t721 * __this, AsymmetricAlgorithm_t463 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
