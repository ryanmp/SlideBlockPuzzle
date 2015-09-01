#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Enumerator_t1700;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1694;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11291_gshared (Enumerator_t1700 * __this, Dictionary_2_t1694 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11291(__this, ___dictionary, method) (( void (*) (Enumerator_t1700 *, Dictionary_2_t1694 *, const MethodInfo*))Enumerator__ctor_m11291_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11292_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11292(__this, method) (( Object_t * (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11292_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t586  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11293_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11293(__this, method) (( DictionaryEntry_t586  (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11293_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11294_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11294(__this, method) (( Object_t * (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11294_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11295_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11295(__this, method) (( Object_t * (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11295_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11296_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11296(__this, method) (( bool (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_MoveNext_m11296_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t1695  Enumerator_get_Current_m11297_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11297(__this, method) (( KeyValuePair_2_t1695  (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_get_Current_m11297_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11298_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11298(__this, method) (( Object_t * (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_get_CurrentKey_m11298_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11299_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11299(__this, method) (( int32_t (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_get_CurrentValue_m11299_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m11300_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11300(__this, method) (( void (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_VerifyState_m11300_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11301_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11301(__this, method) (( void (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_VerifyCurrent_m11301_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m11302_gshared (Enumerator_t1700 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11302(__this, method) (( void (*) (Enumerator_t1700 *, const MethodInfo*))Enumerator_Dispose_m11302_gshared)(__this, method)
