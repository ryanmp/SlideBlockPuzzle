#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Enumerator_t1619;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1613;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10248_gshared (Enumerator_t1619 * __this, Dictionary_2_t1613 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10248(__this, ___dictionary, method) (( void (*) (Enumerator_t1619 *, Dictionary_2_t1613 *, const MethodInfo*))Enumerator__ctor_m10248_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10249_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10249(__this, method) (( Object_t * (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10249_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t586  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10250_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10250(__this, method) (( DictionaryEntry_t586  (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10250_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10251_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10251(__this, method) (( Object_t * (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10251_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10252_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10252(__this, method) (( Object_t * (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10252_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10253_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10253(__this, method) (( bool (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_MoveNext_m10253_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1614  Enumerator_get_Current_m10254_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10254(__this, method) (( KeyValuePair_2_t1614  (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_get_Current_m10254_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10255_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10255(__this, method) (( uint64_t (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_get_CurrentKey_m10255_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10256_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10256(__this, method) (( Object_t * (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_get_CurrentValue_m10256_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10257_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10257(__this, method) (( void (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_VerifyState_m10257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10258_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10258(__this, method) (( void (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_VerifyCurrent_m10258_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10259_gshared (Enumerator_t1619 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10259(__this, method) (( void (*) (Enumerator_t1619 *, const MethodInfo*))Enumerator_Dispose_m10259_gshared)(__this, method)
