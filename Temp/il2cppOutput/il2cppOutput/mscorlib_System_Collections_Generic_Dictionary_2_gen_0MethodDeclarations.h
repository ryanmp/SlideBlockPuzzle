#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t104;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t324;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t1856;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t90;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t1537;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t351;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1521;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t1857;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t338;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t1858;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t1859;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t585;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m8955(__this, method) (( void (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2__ctor_m8956_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m1280(__this, ___comparer, method) (( void (*) (Dictionary_2_t104 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8957_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m8958(__this, ___dictionary, method) (( void (*) (Dictionary_2_t104 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8959_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m8960(__this, ___capacity, method) (( void (*) (Dictionary_2_t104 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8961_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m8962(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t104 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8963_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m8964(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t104 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2__ctor_m8965_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8966(__this, method) (( Object_t* (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8967_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8968(__this, method) (( Object_t* (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8969_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8970(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8971_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8972(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t104 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8973_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m8974(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t104 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8975_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m8976(__this, ___key, method) (( bool (*) (Dictionary_2_t104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8977_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m8978(__this, ___key, method) (( void (*) (Dictionary_2_t104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8979_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8980(__this, method) (( Object_t * (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8981_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8982(__this, method) (( bool (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8983_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8984(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t104 *, KeyValuePair_2_t1536 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8985_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8986(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t104 *, KeyValuePair_2_t1536 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8987_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8988(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t104 *, KeyValuePair_2U5BU5D_t1858*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8989_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8990(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t104 *, KeyValuePair_2_t1536 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8991_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8992(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t104 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8993_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8994(__this, method) (( Object_t * (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8995_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8996(__this, method) (( Object_t* (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8997_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8998(__this, method) (( Object_t * (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m9000(__this, method) (( int32_t (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_get_Count_m9001_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m9002(__this, ___key, method) (( GUIStyle_t90 * (*) (Dictionary_2_t104 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9003_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9004(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t104 *, String_t*, GUIStyle_t90 *, const MethodInfo*))Dictionary_2_set_Item_m9005_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9006(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t104 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9007_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9008(__this, ___size, method) (( void (*) (Dictionary_2_t104 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9009_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9010(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t104 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9011_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9012(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1536  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t90 *, const MethodInfo*))Dictionary_2_make_pair_m9013_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9014(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t90 *, const MethodInfo*))Dictionary_2_pick_key_m9015_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9016(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t90 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t90 *, const MethodInfo*))Dictionary_2_pick_value_m9017_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9018(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t104 *, KeyValuePair_2U5BU5D_t1858*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9019_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m9020(__this, method) (( void (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_Resize_m9021_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m9022(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t104 *, String_t*, GUIStyle_t90 *, const MethodInfo*))Dictionary_2_Add_m9023_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m9024(__this, method) (( void (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_Clear_m9025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9026(__this, ___key, method) (( bool (*) (Dictionary_2_t104 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9027_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9028(__this, ___value, method) (( bool (*) (Dictionary_2_t104 *, GUIStyle_t90 *, const MethodInfo*))Dictionary_2_ContainsValue_m9029_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9030(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t104 *, SerializationInfo_t338 *, StreamingContext_t339 , const MethodInfo*))Dictionary_2_GetObjectData_m9031_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9032(__this, ___sender, method) (( void (*) (Dictionary_2_t104 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9033_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m9034(__this, ___key, method) (( bool (*) (Dictionary_2_t104 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9035_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9036(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t104 *, String_t*, GUIStyle_t90 **, const MethodInfo*))Dictionary_2_TryGetValue_m9037_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m9038(__this, method) (( KeyCollection_t1537 * (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_get_Keys_m9039_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m1281(__this, method) (( ValueCollection_t351 * (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_get_Values_m9040_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9041(__this, ___key, method) (( String_t* (*) (Dictionary_2_t104 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9042_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9043(__this, ___value, method) (( GUIStyle_t90 * (*) (Dictionary_2_t104 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9044_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9045(__this, ___pair, method) (( bool (*) (Dictionary_2_t104 *, KeyValuePair_2_t1536 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9046_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9047(__this, method) (( Enumerator_t1538  (*) (Dictionary_2_t104 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9048_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9049(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t586  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t90 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9050_gshared)(__this /* static, unused */, ___key, ___value, method)
