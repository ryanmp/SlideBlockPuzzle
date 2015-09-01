#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1660;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t325;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t1935;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t1661;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t1665;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1523;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t1936;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t338;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t1937;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t1938;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t585;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m10829_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10829(__this, method) (( void (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2__ctor_m10829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10831_gshared (Dictionary_2_t1660 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10831(__this, ___comparer, method) (( void (*) (Dictionary_2_t1660 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10831_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10833_gshared (Dictionary_2_t1660 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10833(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1660 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10833_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10835_gshared (Dictionary_2_t1660 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10835(__this, ___capacity, method) (( void (*) (Dictionary_2_t1660 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10835_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10837_gshared (Dictionary_2_t1660 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10837(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1660 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10837_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10839_gshared (Dictionary_2_t1660 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10839(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1660 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2__ctor_m10839_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10841_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10841(__this, method) (( Object_t* (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10841_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10843_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10843(__this, method) (( Object_t* (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10843_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10845_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10845(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10845_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10847_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10847(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1660 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10847_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10849_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10849(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1660 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10849_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10851_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10851(__this, ___key, method) (( bool (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10851_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10853_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10853(__this, ___key, method) (( void (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10853_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10855_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10855(__this, method) (( Object_t * (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10855_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10857_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10857(__this, method) (( bool (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10857_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10859_gshared (Dictionary_2_t1660 * __this, KeyValuePair_2_t1634  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10859(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1660 *, KeyValuePair_2_t1634 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10859_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10861_gshared (Dictionary_2_t1660 * __this, KeyValuePair_2_t1634  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10861(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1660 *, KeyValuePair_2_t1634 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10861_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10863_gshared (Dictionary_2_t1660 * __this, KeyValuePair_2U5BU5D_t1937* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10863(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1660 *, KeyValuePair_2U5BU5D_t1937*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10863_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10865_gshared (Dictionary_2_t1660 * __this, KeyValuePair_2_t1634  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10865(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1660 *, KeyValuePair_2_t1634 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10865_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10867_gshared (Dictionary_2_t1660 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10867(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1660 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10867_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10869_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10869(__this, method) (( Object_t * (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10869_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10871_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10871(__this, method) (( Object_t* (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10871_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10873_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10873(__this, method) (( Object_t * (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10873_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10875_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10875(__this, method) (( int32_t (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_get_Count_m10875_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t1526  Dictionary_2_get_Item_m10877_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10877(__this, ___key, method) (( KeyValuePair_2_t1526  (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10877_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10879_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, KeyValuePair_2_t1526  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10879(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1660 *, Object_t *, KeyValuePair_2_t1526 , const MethodInfo*))Dictionary_2_set_Item_m10879_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10881_gshared (Dictionary_2_t1660 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10881(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1660 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10881_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10883_gshared (Dictionary_2_t1660 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10883(__this, ___size, method) (( void (*) (Dictionary_2_t1660 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10883_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10885_gshared (Dictionary_2_t1660 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10885(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1660 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10885_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1634  Dictionary_2_make_pair_m10887_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1526  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10887(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1634  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1526 , const MethodInfo*))Dictionary_2_make_pair_m10887_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m10889_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1526  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10889(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1526 , const MethodInfo*))Dictionary_2_pick_key_m10889_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t1526  Dictionary_2_pick_value_m10891_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1526  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10891(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1526  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1526 , const MethodInfo*))Dictionary_2_pick_value_m10891_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10893_gshared (Dictionary_2_t1660 * __this, KeyValuePair_2U5BU5D_t1937* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10893(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1660 *, KeyValuePair_2U5BU5D_t1937*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10893_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m10895_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10895(__this, method) (( void (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_Resize_m10895_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10897_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, KeyValuePair_2_t1526  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10897(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1660 *, Object_t *, KeyValuePair_2_t1526 , const MethodInfo*))Dictionary_2_Add_m10897_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m10899_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10899(__this, method) (( void (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_Clear_m10899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10901_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10901(__this, ___key, method) (( bool (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10901_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10903_gshared (Dictionary_2_t1660 * __this, KeyValuePair_2_t1526  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10903(__this, ___value, method) (( bool (*) (Dictionary_2_t1660 *, KeyValuePair_2_t1526 , const MethodInfo*))Dictionary_2_ContainsValue_m10903_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10905_gshared (Dictionary_2_t1660 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10905(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1660 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2_GetObjectData_m10905_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10907_gshared (Dictionary_2_t1660 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10907(__this, ___sender, method) (( void (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10907_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10909_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10909(__this, ___key, method) (( bool (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10909_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10911_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, KeyValuePair_2_t1526 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10911(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1660 *, Object_t *, KeyValuePair_2_t1526 *, const MethodInfo*))Dictionary_2_TryGetValue_m10911_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t1661 * Dictionary_2_get_Keys_m10913_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10913(__this, method) (( KeyCollection_t1661 * (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_get_Keys_m10913_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t1665 * Dictionary_2_get_Values_m10915_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10915(__this, method) (( ValueCollection_t1665 * (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_get_Values_m10915_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10917_gshared (Dictionary_2_t1660 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10917(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10917_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t1526  Dictionary_2_ToTValue_m10919_gshared (Dictionary_2_t1660 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10919(__this, ___value, method) (( KeyValuePair_2_t1526  (*) (Dictionary_2_t1660 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10919_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10921_gshared (Dictionary_2_t1660 * __this, KeyValuePair_2_t1634  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10921(__this, ___pair, method) (( bool (*) (Dictionary_2_t1660 *, KeyValuePair_2_t1634 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10921_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t1663  Dictionary_2_GetEnumerator_m10923_gshared (Dictionary_2_t1660 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10923(__this, method) (( Enumerator_t1663  (*) (Dictionary_2_t1660 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10923_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t586  Dictionary_2_U3CCopyToU3Em__0_m10925_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1526  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10925(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t586  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1526 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10925_gshared)(__this /* static, unused */, ___key, ___value, method)
