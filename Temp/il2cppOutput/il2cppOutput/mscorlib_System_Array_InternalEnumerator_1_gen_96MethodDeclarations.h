#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t1816;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12180_gshared (InternalEnumerator_1_t1816 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12180(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1816 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12180_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12181_gshared (InternalEnumerator_1_t1816 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12181(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1816 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12181_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12182_gshared (InternalEnumerator_1_t1816 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12182(__this, method) (( void (*) (InternalEnumerator_1_t1816 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12182_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12183_gshared (InternalEnumerator_1_t1816 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12183(__this, method) (( bool (*) (InternalEnumerator_1_t1816 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12183_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t490  InternalEnumerator_1_get_Current_m12184_gshared (InternalEnumerator_1_t1816 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12184(__this, method) (( TimeSpan_t490  (*) (InternalEnumerator_1_t1816 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12184_gshared)(__this, method)
