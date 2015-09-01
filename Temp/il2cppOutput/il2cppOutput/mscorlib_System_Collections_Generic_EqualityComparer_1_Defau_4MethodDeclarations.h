#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t1581;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m9793_gshared (DefaultComparer_t1581 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9793(__this, method) (( void (*) (DefaultComparer_t1581 *, const MethodInfo*))DefaultComparer__ctor_m9793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9794_gshared (DefaultComparer_t1581 * __this, UILineInfo_t180  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9794(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1581 *, UILineInfo_t180 , const MethodInfo*))DefaultComparer_GetHashCode_m9794_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9795_gshared (DefaultComparer_t1581 * __this, UILineInfo_t180  ___x, UILineInfo_t180  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9795(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1581 *, UILineInfo_t180 , UILineInfo_t180 , const MethodInfo*))DefaultComparer_Equals_m9795_gshared)(__this, ___x, ___y, method)
