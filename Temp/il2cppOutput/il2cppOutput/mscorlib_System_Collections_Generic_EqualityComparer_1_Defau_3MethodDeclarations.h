#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t1577;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m9742_gshared (DefaultComparer_t1577 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9742(__this, method) (( void (*) (DefaultComparer_t1577 *, const MethodInfo*))DefaultComparer__ctor_m9742_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9743_gshared (DefaultComparer_t1577 * __this, UICharInfo_t179  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9743(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1577 *, UICharInfo_t179 , const MethodInfo*))DefaultComparer_GetHashCode_m9743_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9744_gshared (DefaultComparer_t1577 * __this, UICharInfo_t179  ___x, UICharInfo_t179  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9744(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1577 *, UICharInfo_t179 , UICharInfo_t179 , const MethodInfo*))DefaultComparer_Equals_m9744_gshared)(__this, ___x, ___y, method)
