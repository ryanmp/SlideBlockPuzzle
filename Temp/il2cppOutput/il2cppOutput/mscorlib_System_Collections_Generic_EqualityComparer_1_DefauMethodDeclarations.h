#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t1469;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m8450_gshared (DefaultComparer_t1469 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m8450(__this, method) (( void (*) (DefaultComparer_t1469 *, const MethodInfo*))DefaultComparer__ctor_m8450_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m8451_gshared (DefaultComparer_t1469 * __this, Vector3_t11  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m8451(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1469 *, Vector3_t11 , const MethodInfo*))DefaultComparer_GetHashCode_m8451_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m8452_gshared (DefaultComparer_t1469 * __this, Vector3_t11  ___x, Vector3_t11  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m8452(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1469 *, Vector3_t11 , Vector3_t11 , const MethodInfo*))DefaultComparer_Equals_m8452_gshared)(__this, ___x, ___y, method)
