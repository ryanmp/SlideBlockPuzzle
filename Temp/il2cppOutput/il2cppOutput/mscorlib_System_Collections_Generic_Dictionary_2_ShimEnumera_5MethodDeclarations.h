#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t1706;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1694;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11337_gshared (ShimEnumerator_t1706 * __this, Dictionary_2_t1694 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11337(__this, ___host, method) (( void (*) (ShimEnumerator_t1706 *, Dictionary_2_t1694 *, const MethodInfo*))ShimEnumerator__ctor_m11337_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11338_gshared (ShimEnumerator_t1706 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11338(__this, method) (( bool (*) (ShimEnumerator_t1706 *, const MethodInfo*))ShimEnumerator_MoveNext_m11338_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t586  ShimEnumerator_get_Entry_m11339_gshared (ShimEnumerator_t1706 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11339(__this, method) (( DictionaryEntry_t586  (*) (ShimEnumerator_t1706 *, const MethodInfo*))ShimEnumerator_get_Entry_m11339_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11340_gshared (ShimEnumerator_t1706 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11340(__this, method) (( Object_t * (*) (ShimEnumerator_t1706 *, const MethodInfo*))ShimEnumerator_get_Key_m11340_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11341_gshared (ShimEnumerator_t1706 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11341(__this, method) (( Object_t * (*) (ShimEnumerator_t1706 *, const MethodInfo*))ShimEnumerator_get_Value_m11341_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11342_gshared (ShimEnumerator_t1706 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11342(__this, method) (( Object_t * (*) (ShimEnumerator_t1706 *, const MethodInfo*))ShimEnumerator_get_Current_m11342_gshared)(__this, method)
