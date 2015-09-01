#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t1460;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m8386_gshared (GenericComparer_1_t1460 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8386(__this, method) (( void (*) (GenericComparer_1_t1460 *, const MethodInfo*))GenericComparer_1__ctor_m8386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12271_gshared (GenericComparer_1_t1460 * __this, Guid_t391  ___x, Guid_t391  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12271(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1460 *, Guid_t391 , Guid_t391 , const MethodInfo*))GenericComparer_1_Compare_m12271_gshared)(__this, ___x, ___y, method)
