﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t1669;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1660;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10990_gshared (ShimEnumerator_t1669 * __this, Dictionary_2_t1660 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10990(__this, ___host, method) (( void (*) (ShimEnumerator_t1669 *, Dictionary_2_t1660 *, const MethodInfo*))ShimEnumerator__ctor_m10990_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10991_gshared (ShimEnumerator_t1669 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10991(__this, method) (( bool (*) (ShimEnumerator_t1669 *, const MethodInfo*))ShimEnumerator_MoveNext_m10991_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t586  ShimEnumerator_get_Entry_m10992_gshared (ShimEnumerator_t1669 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10992(__this, method) (( DictionaryEntry_t586  (*) (ShimEnumerator_t1669 *, const MethodInfo*))ShimEnumerator_get_Entry_m10992_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10993_gshared (ShimEnumerator_t1669 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10993(__this, method) (( Object_t * (*) (ShimEnumerator_t1669 *, const MethodInfo*))ShimEnumerator_get_Key_m10993_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10994_gshared (ShimEnumerator_t1669 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10994(__this, method) (( Object_t * (*) (ShimEnumerator_t1669 *, const MethodInfo*))ShimEnumerator_get_Value_m10994_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10995_gshared (ShimEnumerator_t1669 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10995(__this, method) (( Object_t * (*) (ShimEnumerator_t1669 *, const MethodInfo*))ShimEnumerator_get_Current_m10995_gshared)(__this, method)
