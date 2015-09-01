#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t1590;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1584;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9928_gshared (Enumerator_t1590 * __this, Dictionary_2_t1584 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9928(__this, ___dictionary, method) (( void (*) (Enumerator_t1590 *, Dictionary_2_t1584 *, const MethodInfo*))Enumerator__ctor_m9928_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9929_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9929(__this, method) (( Object_t * (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9929_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t586  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9930_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9930(__this, method) (( DictionaryEntry_t586  (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9931_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9931(__this, method) (( Object_t * (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9931_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9932_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9932(__this, method) (( Object_t * (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9932_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9933_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9933(__this, method) (( bool (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_MoveNext_m9933_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t1585  Enumerator_get_Current_m9934_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9934(__this, method) (( KeyValuePair_2_t1585  (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_get_Current_m9934_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9935_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9935(__this, method) (( Object_t * (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_get_CurrentKey_m9935_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m9936_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9936(__this, method) (( int64_t (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_get_CurrentValue_m9936_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m9937_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9937(__this, method) (( void (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_VerifyState_m9937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9938_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9938(__this, method) (( void (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_VerifyCurrent_m9938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m9939_gshared (Enumerator_t1590 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9939(__this, method) (( void (*) (Enumerator_t1590 *, const MethodInfo*))Enumerator_Dispose_m9939_gshared)(__this, method)
