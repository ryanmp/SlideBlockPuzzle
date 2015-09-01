#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1498;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1843;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t325;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1502;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1506;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1495;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t1848;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t338;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1849;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1850;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t585;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8668_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8668(__this, method) (( void (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2__ctor_m8668_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8670_gshared (Dictionary_2_t1498 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8670(__this, ___comparer, method) (( void (*) (Dictionary_2_t1498 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8670_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m8672_gshared (Dictionary_2_t1498 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m8672(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1498 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8672_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8674_gshared (Dictionary_2_t1498 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8674(__this, ___capacity, method) (( void (*) (Dictionary_2_t1498 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8674_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8676_gshared (Dictionary_2_t1498 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8676(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1498 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8676_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8678_gshared (Dictionary_2_t1498 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8678(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1498 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2__ctor_m8678_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8680_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8680(__this, method) (( Object_t* (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8680_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8682_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8682(__this, method) (( Object_t* (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8684_gshared (Dictionary_2_t1498 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8684(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8684_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8686_gshared (Dictionary_2_t1498 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8686(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1498 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8686_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8688_gshared (Dictionary_2_t1498 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8688(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1498 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8688_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8690_gshared (Dictionary_2_t1498 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8690(__this, ___key, method) (( bool (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8690_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8692_gshared (Dictionary_2_t1498 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8692(__this, ___key, method) (( void (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8692_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8694_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8694(__this, method) (( Object_t * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8694_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8696_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8696(__this, method) (( bool (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8696_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8698_gshared (Dictionary_2_t1498 * __this, KeyValuePair_2_t1499  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8698(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1498 *, KeyValuePair_2_t1499 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8698_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8700_gshared (Dictionary_2_t1498 * __this, KeyValuePair_2_t1499  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8700(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1498 *, KeyValuePair_2_t1499 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8700_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8702_gshared (Dictionary_2_t1498 * __this, KeyValuePair_2U5BU5D_t1849* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8702(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1498 *, KeyValuePair_2U5BU5D_t1849*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8702_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8704_gshared (Dictionary_2_t1498 * __this, KeyValuePair_2_t1499  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8704(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1498 *, KeyValuePair_2_t1499 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8704_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8706_gshared (Dictionary_2_t1498 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8706(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1498 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8706_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8708_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8708(__this, method) (( Object_t * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8708_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8710_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8710(__this, method) (( Object_t* (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8710_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8712_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8712(__this, method) (( Object_t * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8714_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8714(__this, method) (( int32_t (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_get_Count_m8714_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m8716_gshared (Dictionary_2_t1498 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8716(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1498 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m8716_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8718_gshared (Dictionary_2_t1498 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8718(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1498 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m8718_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8720_gshared (Dictionary_2_t1498 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8720(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1498 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8720_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8722_gshared (Dictionary_2_t1498 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8722(__this, ___size, method) (( void (*) (Dictionary_2_t1498 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8722_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8724_gshared (Dictionary_2_t1498 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8724(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1498 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8724_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1499  Dictionary_2_make_pair_m8726_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8726(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1499  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m8726_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m8728_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m8728(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m8728_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m8730_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8730(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m8730_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8732_gshared (Dictionary_2_t1498 * __this, KeyValuePair_2U5BU5D_t1849* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8732(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1498 *, KeyValuePair_2U5BU5D_t1849*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8732_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m8734_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8734(__this, method) (( void (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_Resize_m8734_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8736_gshared (Dictionary_2_t1498 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8736(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1498 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m8736_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m8738_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8738(__this, method) (( void (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_Clear_m8738_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8740_gshared (Dictionary_2_t1498 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8740(__this, ___key, method) (( bool (*) (Dictionary_2_t1498 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m8740_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8742_gshared (Dictionary_2_t1498 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8742(__this, ___value, method) (( bool (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m8742_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8744_gshared (Dictionary_2_t1498 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8744(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1498 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2_GetObjectData_m8744_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8746_gshared (Dictionary_2_t1498 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8746(__this, ___sender, method) (( void (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8746_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8748_gshared (Dictionary_2_t1498 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8748(__this, ___key, method) (( bool (*) (Dictionary_2_t1498 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m8748_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8750_gshared (Dictionary_2_t1498 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8750(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1498 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m8750_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1502 * Dictionary_2_get_Keys_m8752_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m8752(__this, method) (( KeyCollection_t1502 * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_get_Keys_m8752_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1506 * Dictionary_2_get_Values_m8754_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8754(__this, method) (( ValueCollection_t1506 * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_get_Values_m8754_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m8756_gshared (Dictionary_2_t1498 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8756(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8756_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m8758_gshared (Dictionary_2_t1498 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8758(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8758_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8760_gshared (Dictionary_2_t1498 * __this, KeyValuePair_2_t1499  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8760(__this, ___pair, method) (( bool (*) (Dictionary_2_t1498 *, KeyValuePair_2_t1499 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8760_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1504  Dictionary_2_GetEnumerator_m8762_gshared (Dictionary_2_t1498 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8762(__this, method) (( Enumerator_t1504  (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8762_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t586  Dictionary_2_U3CCopyToU3Em__0_m8764_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8764(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t586  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8764_gshared)(__this /* static, unused */, ___key, ___value, method)
