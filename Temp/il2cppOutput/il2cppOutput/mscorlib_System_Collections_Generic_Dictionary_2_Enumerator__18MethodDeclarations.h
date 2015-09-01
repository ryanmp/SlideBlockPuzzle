#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t1753;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t521;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11824_gshared (Enumerator_t1753 * __this, Dictionary_2_t521 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11824(__this, ___dictionary, method) (( void (*) (Enumerator_t1753 *, Dictionary_2_t521 *, const MethodInfo*))Enumerator__ctor_m11824_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11825_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11825(__this, method) (( Object_t * (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11825_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t586  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11826_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11826(__this, method) (( DictionaryEntry_t586  (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11827_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11827(__this, method) (( Object_t * (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11827_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11828_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11828(__this, method) (( Object_t * (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11828_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11829_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11829(__this, method) (( bool (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_MoveNext_m11829_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1749  Enumerator_get_Current_m11830_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11830(__this, method) (( KeyValuePair_2_t1749  (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_get_Current_m11830_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m11831_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11831(__this, method) (( int32_t (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_get_CurrentKey_m11831_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11832_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11832(__this, method) (( int32_t (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_get_CurrentValue_m11832_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11833_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11833(__this, method) (( void (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_VerifyState_m11833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11834_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11834(__this, method) (( void (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_VerifyCurrent_m11834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11835_gshared (Enumerator_t1753 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11835(__this, method) (( void (*) (Enumerator_t1753 *, const MethodInfo*))Enumerator_Dispose_m11835_gshared)(__this, method)
