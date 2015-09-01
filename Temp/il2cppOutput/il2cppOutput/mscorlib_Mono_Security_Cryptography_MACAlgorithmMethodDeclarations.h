#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t857;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t631;
// System.Byte[]
struct ByteU5BU5D_t131;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m4574 (MACAlgorithm_t857 * __this, SymmetricAlgorithm_t631 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m4575 (MACAlgorithm_t857 * __this, ByteU5BU5D_t131* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m4576 (MACAlgorithm_t857 * __this, ByteU5BU5D_t131* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t131* MACAlgorithm_Final_m4577 (MACAlgorithm_t857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
