#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1613;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t1894;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t325;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t1617;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t1621;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t1610;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t1899;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t338;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t1900;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t1901;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t585;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10117_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10117(__this, method) (( void (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2__ctor_m10117_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10119_gshared (Dictionary_2_t1613 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10119(__this, ___comparer, method) (( void (*) (Dictionary_2_t1613 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10119_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10121_gshared (Dictionary_2_t1613 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10121(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1613 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10121_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10123_gshared (Dictionary_2_t1613 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10123(__this, ___capacity, method) (( void (*) (Dictionary_2_t1613 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10123_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10125_gshared (Dictionary_2_t1613 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10125(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1613 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10125_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10127_gshared (Dictionary_2_t1613 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10127(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1613 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2__ctor_m10127_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10129_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10129(__this, method) (( Object_t* (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10129_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10131_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10131(__this, method) (( Object_t* (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10131_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10133_gshared (Dictionary_2_t1613 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10133(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1613 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10133_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10135_gshared (Dictionary_2_t1613 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10135(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1613 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10135_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10137_gshared (Dictionary_2_t1613 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10137(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1613 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10137_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10139_gshared (Dictionary_2_t1613 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10139(__this, ___key, method) (( bool (*) (Dictionary_2_t1613 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10139_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10141_gshared (Dictionary_2_t1613 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10141(__this, ___key, method) (( void (*) (Dictionary_2_t1613 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10141_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10143_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10143(__this, method) (( Object_t * (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10145_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10145(__this, method) (( bool (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10145_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10147_gshared (Dictionary_2_t1613 * __this, KeyValuePair_2_t1614  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10147(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1613 *, KeyValuePair_2_t1614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10147_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10149_gshared (Dictionary_2_t1613 * __this, KeyValuePair_2_t1614  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10149(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1613 *, KeyValuePair_2_t1614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10149_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10151_gshared (Dictionary_2_t1613 * __this, KeyValuePair_2U5BU5D_t1900* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10151(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1613 *, KeyValuePair_2U5BU5D_t1900*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10151_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10153_gshared (Dictionary_2_t1613 * __this, KeyValuePair_2_t1614  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10153(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1613 *, KeyValuePair_2_t1614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10153_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10155_gshared (Dictionary_2_t1613 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10155(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1613 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10155_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10157_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10157(__this, method) (( Object_t * (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10157_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10159_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10159(__this, method) (( Object_t* (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10159_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10161_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10161(__this, method) (( Object_t * (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10161_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10163_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10163(__this, method) (( int32_t (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_get_Count_m10163_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10165_gshared (Dictionary_2_t1613 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10165(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1613 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m10165_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10167_gshared (Dictionary_2_t1613 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10167(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1613 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10167_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10169_gshared (Dictionary_2_t1613 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10169(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1613 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10169_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10171_gshared (Dictionary_2_t1613 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10171(__this, ___size, method) (( void (*) (Dictionary_2_t1613 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10171_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10173_gshared (Dictionary_2_t1613 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10173(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1613 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10173_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1614  Dictionary_2_make_pair_m10175_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10175(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1614  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m10177_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10177(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m10177_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10179_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10179(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10179_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10181_gshared (Dictionary_2_t1613 * __this, KeyValuePair_2U5BU5D_t1900* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10181(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1613 *, KeyValuePair_2U5BU5D_t1900*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10181_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10183_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10183(__this, method) (( void (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_Resize_m10183_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10185_gshared (Dictionary_2_t1613 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10185(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1613 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m10185_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10187_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10187(__this, method) (( void (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_Clear_m10187_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10189_gshared (Dictionary_2_t1613 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10189(__this, ___key, method) (( bool (*) (Dictionary_2_t1613 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m10189_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10191_gshared (Dictionary_2_t1613 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10191(__this, ___value, method) (( bool (*) (Dictionary_2_t1613 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10191_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10193_gshared (Dictionary_2_t1613 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10193(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1613 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2_GetObjectData_m10193_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10195_gshared (Dictionary_2_t1613 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10195(__this, ___sender, method) (( void (*) (Dictionary_2_t1613 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10195_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10197_gshared (Dictionary_2_t1613 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10197(__this, ___key, method) (( bool (*) (Dictionary_2_t1613 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m10197_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10199_gshared (Dictionary_2_t1613 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10199(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1613 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10199_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t1617 * Dictionary_2_get_Keys_m10201_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10201(__this, method) (( KeyCollection_t1617 * (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_get_Keys_m10201_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t1621 * Dictionary_2_get_Values_m10203_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10203(__this, method) (( ValueCollection_t1621 * (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_get_Values_m10203_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m10205_gshared (Dictionary_2_t1613 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10205(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t1613 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10205_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10207_gshared (Dictionary_2_t1613 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10207(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1613 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10207_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10209_gshared (Dictionary_2_t1613 * __this, KeyValuePair_2_t1614  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10209(__this, ___pair, method) (( bool (*) (Dictionary_2_t1613 *, KeyValuePair_2_t1614 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10209_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t1619  Dictionary_2_GetEnumerator_m10211_gshared (Dictionary_2_t1613 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10211(__this, method) (( Enumerator_t1619  (*) (Dictionary_2_t1613 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10211_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t586  Dictionary_2_U3CCopyToU3Em__0_m10213_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10213(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t586  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10213_gshared)(__this /* static, unused */, ___key, ___value, method)
