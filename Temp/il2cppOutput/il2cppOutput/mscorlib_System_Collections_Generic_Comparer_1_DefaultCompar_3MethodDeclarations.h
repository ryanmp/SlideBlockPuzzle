#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1830;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12276_gshared (DefaultComparer_t1830 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12276(__this, method) (( void (*) (DefaultComparer_t1830 *, const MethodInfo*))DefaultComparer__ctor_m12276_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12277_gshared (DefaultComparer_t1830 * __this, Guid_t391  ___x, Guid_t391  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12277(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1830 *, Guid_t391 , Guid_t391 , const MethodInfo*))DefaultComparer_Compare_m12277_gshared)(__this, ___x, ___y, method)
