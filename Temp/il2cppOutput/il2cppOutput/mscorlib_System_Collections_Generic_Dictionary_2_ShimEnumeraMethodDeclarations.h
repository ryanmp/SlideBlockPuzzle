#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1511;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1498;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m8850_gshared (ShimEnumerator_t1511 * __this, Dictionary_2_t1498 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m8850(__this, ___host, method) (( void (*) (ShimEnumerator_t1511 *, Dictionary_2_t1498 *, const MethodInfo*))ShimEnumerator__ctor_m8850_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m8851_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m8851(__this, method) (( bool (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_MoveNext_m8851_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t586  ShimEnumerator_get_Entry_m8852_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m8852(__this, method) (( DictionaryEntry_t586  (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_get_Entry_m8852_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m8853_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m8853(__this, method) (( Object_t * (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_get_Key_m8853_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m8854_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m8854(__this, method) (( Object_t * (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_get_Value_m8854_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m8855_gshared (ShimEnumerator_t1511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m8855(__this, method) (( Object_t * (*) (ShimEnumerator_t1511 *, const MethodInfo*))ShimEnumerator_get_Current_m8855_gshared)(__this, method)
