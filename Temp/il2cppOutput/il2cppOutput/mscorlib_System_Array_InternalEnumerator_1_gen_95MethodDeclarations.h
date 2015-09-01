﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t1815;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12175_gshared (InternalEnumerator_1_t1815 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12175(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1815 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12175_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12176_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12176(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12176_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12177_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12177(__this, method) (( void (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12177_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12178_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12178(__this, method) (( bool (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12178_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t374  InternalEnumerator_1_get_Current_m12179_gshared (InternalEnumerator_1_t1815 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12179(__this, method) (( Decimal_t374  (*) (InternalEnumerator_1_t1815 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12179_gshared)(__this, method)