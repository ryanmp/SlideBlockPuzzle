#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t1596;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1584;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9974_gshared (ShimEnumerator_t1596 * __this, Dictionary_2_t1584 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9974(__this, ___host, method) (( void (*) (ShimEnumerator_t1596 *, Dictionary_2_t1584 *, const MethodInfo*))ShimEnumerator__ctor_m9974_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9975_gshared (ShimEnumerator_t1596 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9975(__this, method) (( bool (*) (ShimEnumerator_t1596 *, const MethodInfo*))ShimEnumerator_MoveNext_m9975_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t586  ShimEnumerator_get_Entry_m9976_gshared (ShimEnumerator_t1596 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9976(__this, method) (( DictionaryEntry_t586  (*) (ShimEnumerator_t1596 *, const MethodInfo*))ShimEnumerator_get_Entry_m9976_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9977_gshared (ShimEnumerator_t1596 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9977(__this, method) (( Object_t * (*) (ShimEnumerator_t1596 *, const MethodInfo*))ShimEnumerator_get_Key_m9977_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9978_gshared (ShimEnumerator_t1596 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9978(__this, method) (( Object_t * (*) (ShimEnumerator_t1596 *, const MethodInfo*))ShimEnumerator_get_Value_m9978_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9979_gshared (ShimEnumerator_t1596 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9979(__this, method) (( Object_t * (*) (ShimEnumerator_t1596 *, const MethodInfo*))ShimEnumerator_get_Current_m9979_gshared)(__this, method)
