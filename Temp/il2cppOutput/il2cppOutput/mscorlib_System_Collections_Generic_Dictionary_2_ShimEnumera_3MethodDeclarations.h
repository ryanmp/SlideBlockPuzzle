#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t1625;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1613;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10294_gshared (ShimEnumerator_t1625 * __this, Dictionary_2_t1613 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10294(__this, ___host, method) (( void (*) (ShimEnumerator_t1625 *, Dictionary_2_t1613 *, const MethodInfo*))ShimEnumerator__ctor_m10294_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10295_gshared (ShimEnumerator_t1625 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10295(__this, method) (( bool (*) (ShimEnumerator_t1625 *, const MethodInfo*))ShimEnumerator_MoveNext_m10295_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t586  ShimEnumerator_get_Entry_m10296_gshared (ShimEnumerator_t1625 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10296(__this, method) (( DictionaryEntry_t586  (*) (ShimEnumerator_t1625 *, const MethodInfo*))ShimEnumerator_get_Entry_m10296_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10297_gshared (ShimEnumerator_t1625 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10297(__this, method) (( Object_t * (*) (ShimEnumerator_t1625 *, const MethodInfo*))ShimEnumerator_get_Key_m10297_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10298_gshared (ShimEnumerator_t1625 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10298(__this, method) (( Object_t * (*) (ShimEnumerator_t1625 *, const MethodInfo*))ShimEnumerator_get_Value_m10298_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10299_gshared (ShimEnumerator_t1625 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10299(__this, method) (( Object_t * (*) (ShimEnumerator_t1625 *, const MethodInfo*))ShimEnumerator_get_Current_m10299_gshared)(__this, method)
