#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t1530;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1525;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9080_gshared (Enumerator_t1530 * __this, Dictionary_2_t1525 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9080(__this, ___dictionary, method) (( void (*) (Enumerator_t1530 *, Dictionary_2_t1525 *, const MethodInfo*))Enumerator__ctor_m9080_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9081_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9081(__this, method) (( Object_t * (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9081_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t586  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9082_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9082(__this, method) (( DictionaryEntry_t586  (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9082_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9083_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9083(__this, method) (( Object_t * (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9083_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9084_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9084(__this, method) (( Object_t * (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9085_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9085(__this, method) (( bool (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_MoveNext_m9085_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1526  Enumerator_get_Current_m9086_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9086(__this, method) (( KeyValuePair_2_t1526  (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_get_Current_m9086_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9087_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9087(__this, method) (( Object_t * (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_get_CurrentKey_m9087_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9088_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9088(__this, method) (( Object_t * (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_get_CurrentValue_m9088_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9089_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9089(__this, method) (( void (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_VerifyState_m9089_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9090_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9090(__this, method) (( void (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_VerifyCurrent_m9090_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9091_gshared (Enumerator_t1530 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9091(__this, method) (( void (*) (Enumerator_t1530 *, const MethodInfo*))Enumerator_Dispose_m9091_gshared)(__this, method)
