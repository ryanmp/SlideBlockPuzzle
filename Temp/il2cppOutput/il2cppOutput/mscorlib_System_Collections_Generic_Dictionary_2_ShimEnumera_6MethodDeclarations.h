#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t1736;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1724;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11661_gshared (ShimEnumerator_t1736 * __this, Dictionary_2_t1724 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11661(__this, ___host, method) (( void (*) (ShimEnumerator_t1736 *, Dictionary_2_t1724 *, const MethodInfo*))ShimEnumerator__ctor_m11661_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11662_gshared (ShimEnumerator_t1736 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11662(__this, method) (( bool (*) (ShimEnumerator_t1736 *, const MethodInfo*))ShimEnumerator_MoveNext_m11662_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t586  ShimEnumerator_get_Entry_m11663_gshared (ShimEnumerator_t1736 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11663(__this, method) (( DictionaryEntry_t586  (*) (ShimEnumerator_t1736 *, const MethodInfo*))ShimEnumerator_get_Entry_m11663_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11664_gshared (ShimEnumerator_t1736 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11664(__this, method) (( Object_t * (*) (ShimEnumerator_t1736 *, const MethodInfo*))ShimEnumerator_get_Key_m11664_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11665_gshared (ShimEnumerator_t1736 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11665(__this, method) (( Object_t * (*) (ShimEnumerator_t1736 *, const MethodInfo*))ShimEnumerator_get_Value_m11665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11666_gshared (ShimEnumerator_t1736 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11666(__this, method) (( Object_t * (*) (ShimEnumerator_t1736 *, const MethodInfo*))ShimEnumerator_get_Current_m11666_gshared)(__this, method)
