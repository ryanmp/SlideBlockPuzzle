#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1828;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12264_gshared (DefaultComparer_t1828 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12264(__this, method) (( void (*) (DefaultComparer_t1828 *, const MethodInfo*))DefaultComparer__ctor_m12264_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12265_gshared (DefaultComparer_t1828 * __this, DateTimeOffset_t390  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12265(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1828 *, DateTimeOffset_t390 , const MethodInfo*))DefaultComparer_GetHashCode_m12265_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12266_gshared (DefaultComparer_t1828 * __this, DateTimeOffset_t390  ___x, DateTimeOffset_t390  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12266(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1828 *, DateTimeOffset_t390 , DateTimeOffset_t390 , const MethodInfo*))DefaultComparer_Equals_m12266_gshared)(__this, ___x, ___y, method)
