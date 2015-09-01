#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t1638;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t325;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1636;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1658;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1861;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10495_gshared (ThreadSafeDictionary_2_t1638 * __this, ThreadSafeDictionaryValueFactory_2_t1636 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10495(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t1638 *, ThreadSafeDictionaryValueFactory_2_t1636 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10495_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10497_gshared (ThreadSafeDictionary_2_t1638 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10497(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1638 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10497_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10499_gshared (ThreadSafeDictionary_2_t1638 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10499(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1638 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10499_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10501_gshared (ThreadSafeDictionary_2_t1638 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10501(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1638 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10501_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10503_gshared (ThreadSafeDictionary_2_t1638 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10503(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1638 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10503_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10505_gshared (ThreadSafeDictionary_2_t1638 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10505(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1638 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10505_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10507_gshared (ThreadSafeDictionary_2_t1638 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10507(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t1638 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10507_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10509_gshared (ThreadSafeDictionary_2_t1638 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10509(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1638 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10509_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10511_gshared (ThreadSafeDictionary_2_t1638 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10511(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1638 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10511_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10513_gshared (ThreadSafeDictionary_2_t1638 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10513(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1638 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10513_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10515_gshared (ThreadSafeDictionary_2_t1638 * __this, KeyValuePair_2_t1526  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10515(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t1638 *, KeyValuePair_2_t1526 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10515_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10517_gshared (ThreadSafeDictionary_2_t1638 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10517(__this, method) (( void (*) (ThreadSafeDictionary_2_t1638 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10517_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10519_gshared (ThreadSafeDictionary_2_t1638 * __this, KeyValuePair_2_t1526  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10519(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1638 *, KeyValuePair_2_t1526 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10519_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10521_gshared (ThreadSafeDictionary_2_t1638 * __this, KeyValuePair_2U5BU5D_t1658* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10521(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t1638 *, KeyValuePair_2U5BU5D_t1658*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10521_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10523_gshared (ThreadSafeDictionary_2_t1638 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10523(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t1638 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10523_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10525_gshared (ThreadSafeDictionary_2_t1638 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10525(__this, method) (( bool (*) (ThreadSafeDictionary_2_t1638 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10525_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10527_gshared (ThreadSafeDictionary_2_t1638 * __this, KeyValuePair_2_t1526  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10527(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1638 *, KeyValuePair_2_t1526 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10527_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10529_gshared (ThreadSafeDictionary_2_t1638 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10529(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1638 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10529_gshared)(__this, method)
