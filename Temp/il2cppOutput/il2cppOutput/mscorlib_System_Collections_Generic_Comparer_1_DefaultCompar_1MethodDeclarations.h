#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t1822;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12238_gshared (DefaultComparer_t1822 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12238(__this, method) (( void (*) (DefaultComparer_t1822 *, const MethodInfo*))DefaultComparer__ctor_m12238_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12239_gshared (DefaultComparer_t1822 * __this, DateTime_t85  ___x, DateTime_t85  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12239(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1822 *, DateTime_t85 , DateTime_t85 , const MethodInfo*))DefaultComparer_Compare_m12239_gshared)(__this, ___x, ___y, method)
