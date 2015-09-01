#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1832;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12285_gshared (DefaultComparer_t1832 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12285(__this, method) (( void (*) (DefaultComparer_t1832 *, const MethodInfo*))DefaultComparer__ctor_m12285_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12286_gshared (DefaultComparer_t1832 * __this, Guid_t391  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12286(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1832 *, Guid_t391 , const MethodInfo*))DefaultComparer_GetHashCode_m12286_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12287_gshared (DefaultComparer_t1832 * __this, Guid_t391  ___x, Guid_t391  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12287(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1832 *, Guid_t391 , Guid_t391 , const MethodInfo*))DefaultComparer_Equals_m12287_gshared)(__this, ___x, ___y, method)
