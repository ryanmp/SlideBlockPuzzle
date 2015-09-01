#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1428;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m8383_gshared (Nullable_1_t1428 * __this, TimeSpan_t490  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8383(__this, ___value, method) (( void (*) (Nullable_1_t1428 *, TimeSpan_t490 , const MethodInfo*))Nullable_1__ctor_m8383_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8384_gshared (Nullable_1_t1428 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8384(__this, method) (( bool (*) (Nullable_1_t1428 *, const MethodInfo*))Nullable_1_get_HasValue_m8384_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t490  Nullable_1_get_Value_m8385_gshared (Nullable_1_t1428 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8385(__this, method) (( TimeSpan_t490  (*) (Nullable_1_t1428 *, const MethodInfo*))Nullable_1_get_Value_m8385_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m12267_gshared (Nullable_1_t1428 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12267(__this, ___other, method) (( bool (*) (Nullable_1_t1428 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m12267_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m12268_gshared (Nullable_1_t1428 * __this, Nullable_1_t1428  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12268(__this, ___other, method) (( bool (*) (Nullable_1_t1428 *, Nullable_1_t1428 , const MethodInfo*))Nullable_1_Equals_m12268_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m12269_gshared (Nullable_1_t1428 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m12269(__this, method) (( int32_t (*) (Nullable_1_t1428 *, const MethodInfo*))Nullable_1_GetHashCode_m12269_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m12270_gshared (Nullable_1_t1428 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m12270(__this, method) (( String_t* (*) (Nullable_1_t1428 *, const MethodInfo*))Nullable_1_ToString_m12270_gshared)(__this, method)
