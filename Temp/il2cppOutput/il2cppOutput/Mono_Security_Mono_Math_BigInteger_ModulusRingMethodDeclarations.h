﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t651;
// Mono.Math.BigInteger
struct BigInteger_t650;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2560 (ModulusRing_t651 * __this, BigInteger_t650 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2561 (ModulusRing_t651 * __this, BigInteger_t650 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t650 * ModulusRing_Multiply_m2562 (ModulusRing_t651 * __this, BigInteger_t650 * ___a, BigInteger_t650 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t650 * ModulusRing_Difference_m2563 (ModulusRing_t651 * __this, BigInteger_t650 * ___a, BigInteger_t650 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t650 * ModulusRing_Pow_m2564 (ModulusRing_t651 * __this, BigInteger_t650 * ___a, BigInteger_t650 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t650 * ModulusRing_Pow_m2565 (ModulusRing_t651 * __this, uint32_t ___b, BigInteger_t650 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
