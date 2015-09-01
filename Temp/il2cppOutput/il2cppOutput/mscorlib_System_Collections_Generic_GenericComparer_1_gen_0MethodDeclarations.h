#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
struct GenericComparer_1_t1458;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void GenericComparer_1__ctor_m8381_gshared (GenericComparer_1_t1458 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8381(__this, method) (( void (*) (GenericComparer_1_t1458 *, const MethodInfo*))GenericComparer_1__ctor_m8381_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12250_gshared (GenericComparer_1_t1458 * __this, DateTimeOffset_t390  ___x, DateTimeOffset_t390  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12250(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1458 *, DateTimeOffset_t390 , DateTimeOffset_t390 , const MethodInfo*))GenericComparer_1_Compare_m12250_gshared)(__this, ___x, ___y, method)
