#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t1758;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t521;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11866_gshared (ShimEnumerator_t1758 * __this, Dictionary_2_t521 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11866(__this, ___host, method) (( void (*) (ShimEnumerator_t1758 *, Dictionary_2_t521 *, const MethodInfo*))ShimEnumerator__ctor_m11866_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11867_gshared (ShimEnumerator_t1758 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11867(__this, method) (( bool (*) (ShimEnumerator_t1758 *, const MethodInfo*))ShimEnumerator_MoveNext_m11867_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t586  ShimEnumerator_get_Entry_m11868_gshared (ShimEnumerator_t1758 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11868(__this, method) (( DictionaryEntry_t586  (*) (ShimEnumerator_t1758 *, const MethodInfo*))ShimEnumerator_get_Entry_m11868_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11869_gshared (ShimEnumerator_t1758 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11869(__this, method) (( Object_t * (*) (ShimEnumerator_t1758 *, const MethodInfo*))ShimEnumerator_get_Key_m11869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11870_gshared (ShimEnumerator_t1758 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11870(__this, method) (( Object_t * (*) (ShimEnumerator_t1758 *, const MethodInfo*))ShimEnumerator_get_Value_m11870_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11871_gshared (ShimEnumerator_t1758 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11871(__this, method) (( Object_t * (*) (ShimEnumerator_t1758 *, const MethodInfo*))ShimEnumerator_get_Current_m11871_gshared)(__this, method)
