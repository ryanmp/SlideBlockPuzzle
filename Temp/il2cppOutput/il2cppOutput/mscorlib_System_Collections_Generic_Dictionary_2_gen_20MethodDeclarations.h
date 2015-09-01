#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1724;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t325;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t1957;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1728;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1732;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1523;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t1961;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t338;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1962;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1963;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t585;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m11485_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11485(__this, method) (( void (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2__ctor_m11485_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11486_gshared (Dictionary_2_t1724 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11486(__this, ___comparer, method) (( void (*) (Dictionary_2_t1724 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11486_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11488_gshared (Dictionary_2_t1724 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11488(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1724 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11488_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11490_gshared (Dictionary_2_t1724 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11490(__this, ___capacity, method) (( void (*) (Dictionary_2_t1724 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11490_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11492_gshared (Dictionary_2_t1724 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11492(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1724 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11492_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11494_gshared (Dictionary_2_t1724 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11494(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1724 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2__ctor_m11494_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11496_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11496(__this, method) (( Object_t* (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11496_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11498_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11498(__this, method) (( Object_t* (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11498_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11500_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11500(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11500_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11502_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11502(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1724 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11502_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11504_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11504(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1724 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11504_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11506_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11506(__this, ___key, method) (( bool (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11506_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11508_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11508(__this, ___key, method) (( void (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11508_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11510_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11510(__this, method) (( Object_t * (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11512_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11512(__this, method) (( bool (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11512_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11514_gshared (Dictionary_2_t1724 * __this, KeyValuePair_2_t1725  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11514(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1724 *, KeyValuePair_2_t1725 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11514_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11516_gshared (Dictionary_2_t1724 * __this, KeyValuePair_2_t1725  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11516(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1724 *, KeyValuePair_2_t1725 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11516_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11518_gshared (Dictionary_2_t1724 * __this, KeyValuePair_2U5BU5D_t1962* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11518(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1724 *, KeyValuePair_2U5BU5D_t1962*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11518_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11520_gshared (Dictionary_2_t1724 * __this, KeyValuePair_2_t1725  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11520(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1724 *, KeyValuePair_2_t1725 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11520_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11522_gshared (Dictionary_2_t1724 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11522(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1724 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11522_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11524_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11524(__this, method) (( Object_t * (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11524_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11526_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11526(__this, method) (( Object_t* (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11526_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11528_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11528(__this, method) (( Object_t * (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11528_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11530_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11530(__this, method) (( int32_t (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_get_Count_m11530_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m11532_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11532(__this, ___key, method) (( bool (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11532_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11534_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11534(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1724 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m11534_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11536_gshared (Dictionary_2_t1724 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11536(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1724 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11536_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11538_gshared (Dictionary_2_t1724 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11538(__this, ___size, method) (( void (*) (Dictionary_2_t1724 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11538_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11540_gshared (Dictionary_2_t1724 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11540(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1724 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11540_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1725  Dictionary_2_make_pair_m11542_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11542(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1725  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m11542_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11544_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11544(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m11544_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m11546_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11546(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m11546_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11548_gshared (Dictionary_2_t1724 * __this, KeyValuePair_2U5BU5D_t1962* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11548(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1724 *, KeyValuePair_2U5BU5D_t1962*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11548_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m11550_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11550(__this, method) (( void (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_Resize_m11550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11552_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1724 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m11552_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m11554_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11554(__this, method) (( void (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_Clear_m11554_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11556_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11556(__this, ___key, method) (( bool (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11556_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11558_gshared (Dictionary_2_t1724 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11558(__this, ___value, method) (( bool (*) (Dictionary_2_t1724 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m11558_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11560_gshared (Dictionary_2_t1724 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11560(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1724 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2_GetObjectData_m11560_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11562_gshared (Dictionary_2_t1724 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11562(__this, ___sender, method) (( void (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11562_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11564_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11564(__this, ___key, method) (( bool (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11564_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11566_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11566(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1724 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m11566_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t1728 * Dictionary_2_get_Keys_m11568_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11568(__this, method) (( KeyCollection_t1728 * (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_get_Keys_m11568_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1732 * Dictionary_2_get_Values_m11570_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11570(__this, method) (( ValueCollection_t1732 * (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_get_Values_m11570_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11572_gshared (Dictionary_2_t1724 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11572(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11572_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m11574_gshared (Dictionary_2_t1724 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11574(__this, ___value, method) (( bool (*) (Dictionary_2_t1724 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11574_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11576_gshared (Dictionary_2_t1724 * __this, KeyValuePair_2_t1725  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11576(__this, ___pair, method) (( bool (*) (Dictionary_2_t1724 *, KeyValuePair_2_t1725 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11576_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1730  Dictionary_2_GetEnumerator_m11578_gshared (Dictionary_2_t1724 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11578(__this, method) (( Enumerator_t1730  (*) (Dictionary_2_t1724 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11578_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t586  Dictionary_2_U3CCopyToU3Em__0_m11580_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11580(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t586  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11580_gshared)(__this /* static, unused */, ___key, ___value, method)
