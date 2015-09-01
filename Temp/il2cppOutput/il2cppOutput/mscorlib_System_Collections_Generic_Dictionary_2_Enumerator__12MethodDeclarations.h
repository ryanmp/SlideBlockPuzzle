#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t1663;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1660;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10944_gshared (Enumerator_t1663 * __this, Dictionary_2_t1660 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10944(__this, ___dictionary, method) (( void (*) (Enumerator_t1663 *, Dictionary_2_t1660 *, const MethodInfo*))Enumerator__ctor_m10944_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10945_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10945(__this, method) (( Object_t * (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10945_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t586  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10946_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10946(__this, method) (( DictionaryEntry_t586  (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10946_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10947_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10947(__this, method) (( Object_t * (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10947_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10948_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10948(__this, method) (( Object_t * (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10948_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10949_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10949(__this, method) (( bool (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_MoveNext_m10949_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1634  Enumerator_get_Current_m10950_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10950(__this, method) (( KeyValuePair_2_t1634  (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_get_Current_m10950_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10951_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10951(__this, method) (( Object_t * (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_get_CurrentKey_m10951_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1526  Enumerator_get_CurrentValue_m10952_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10952(__this, method) (( KeyValuePair_2_t1526  (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_get_CurrentValue_m10952_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m10953_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10953(__this, method) (( void (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_VerifyState_m10953_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10954_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10954(__this, method) (( void (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_VerifyCurrent_m10954_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m10955_gshared (Enumerator_t1663 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10955(__this, method) (( void (*) (Enumerator_t1663 *, const MethodInfo*))Enumerator_Dispose_m10955_gshared)(__this, method)
