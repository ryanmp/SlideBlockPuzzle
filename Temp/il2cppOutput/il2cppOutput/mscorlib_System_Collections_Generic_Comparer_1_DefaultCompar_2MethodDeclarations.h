#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1826;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12255_gshared (DefaultComparer_t1826 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12255(__this, method) (( void (*) (DefaultComparer_t1826 *, const MethodInfo*))DefaultComparer__ctor_m12255_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12256_gshared (DefaultComparer_t1826 * __this, DateTimeOffset_t390  ___x, DateTimeOffset_t390  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12256(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1826 *, DateTimeOffset_t390 , DateTimeOffset_t390 , const MethodInfo*))DefaultComparer_Compare_m12256_gshared)(__this, ___x, ___y, method)
