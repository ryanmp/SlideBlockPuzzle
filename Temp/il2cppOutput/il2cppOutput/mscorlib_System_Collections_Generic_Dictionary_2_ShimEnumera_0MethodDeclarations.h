#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1535;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1525;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9122_gshared (ShimEnumerator_t1535 * __this, Dictionary_2_t1525 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9122(__this, ___host, method) (( void (*) (ShimEnumerator_t1535 *, Dictionary_2_t1525 *, const MethodInfo*))ShimEnumerator__ctor_m9122_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9123_gshared (ShimEnumerator_t1535 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9123(__this, method) (( bool (*) (ShimEnumerator_t1535 *, const MethodInfo*))ShimEnumerator_MoveNext_m9123_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t586  ShimEnumerator_get_Entry_m9124_gshared (ShimEnumerator_t1535 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9124(__this, method) (( DictionaryEntry_t586  (*) (ShimEnumerator_t1535 *, const MethodInfo*))ShimEnumerator_get_Entry_m9124_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9125_gshared (ShimEnumerator_t1535 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9125(__this, method) (( Object_t * (*) (ShimEnumerator_t1535 *, const MethodInfo*))ShimEnumerator_get_Key_m9125_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9126_gshared (ShimEnumerator_t1535 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9126(__this, method) (( Object_t * (*) (ShimEnumerator_t1535 *, const MethodInfo*))ShimEnumerator_get_Value_m9126_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9127_gshared (ShimEnumerator_t1535 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9127(__this, method) (( Object_t * (*) (ShimEnumerator_t1535 *, const MethodInfo*))ShimEnumerator_get_Current_m9127_gshared)(__this, method)
