#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1461;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m8387_gshared (GenericEqualityComparer_1_t1461 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m8387(__this, method) (( void (*) (GenericEqualityComparer_1_t1461 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m8387_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12278_gshared (GenericEqualityComparer_1_t1461 * __this, Guid_t391  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m12278(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1461 *, Guid_t391 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m12278_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12279_gshared (GenericEqualityComparer_1_t1461 * __this, Guid_t391  ___x, Guid_t391  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m12279(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1461 *, Guid_t391 , Guid_t391 , const MethodInfo*))GenericEqualityComparer_1_Equals_m12279_gshared)(__this, ___x, ___y, method)
