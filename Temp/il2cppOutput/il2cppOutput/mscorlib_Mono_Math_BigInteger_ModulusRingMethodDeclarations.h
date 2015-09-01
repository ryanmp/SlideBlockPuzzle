#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t849;
// Mono.Math.BigInteger
struct BigInteger_t848;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4437 (ModulusRing_t849 * __this, BigInteger_t848 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4438 (ModulusRing_t849 * __this, BigInteger_t848 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t848 * ModulusRing_Multiply_m4439 (ModulusRing_t849 * __this, BigInteger_t848 * ___a, BigInteger_t848 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t848 * ModulusRing_Difference_m4440 (ModulusRing_t849 * __this, BigInteger_t848 * ___a, BigInteger_t848 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t848 * ModulusRing_Pow_m4441 (ModulusRing_t849 * __this, BigInteger_t848 * ___a, BigInteger_t848 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t848 * ModulusRing_Pow_m4442 (ModulusRing_t849 * __this, uint32_t ___b, BigInteger_t848 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
