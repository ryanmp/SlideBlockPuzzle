#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t93;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t92;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t1855;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t1519;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m1277(__this, method) (( void (*) (List_1_t93 *, const MethodInfo*))List_1__ctor_m1351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m8919(__this, ___capacity, method) (( void (*) (List_1_t93 *, int32_t, const MethodInfo*))List_1__ctor_m8454_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m8920(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8456_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8921(__this, method) (( Object_t* (*) (List_1_t93 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m8922(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t93 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8460_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8923(__this, method) (( Object_t * (*) (List_1_t93 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m8924(__this, ___item, method) (( int32_t (*) (List_1_t93 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8464_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m8925(__this, ___item, method) (( bool (*) (List_1_t93 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8466_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m8926(__this, ___item, method) (( int32_t (*) (List_1_t93 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m8927(__this, ___index, ___item, method) (( void (*) (List_1_t93 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8470_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m8928(__this, ___item, method) (( void (*) (List_1_t93 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8929(__this, method) (( bool (*) (List_1_t93 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8474_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m8930(__this, method) (( Object_t * (*) (List_1_t93 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8476_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m8931(__this, ___index, method) (( Object_t * (*) (List_1_t93 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8478_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m8932(__this, ___index, ___value, method) (( void (*) (List_1_t93 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m8933(__this, ___item, method) (( void (*) (List_1_t93 *, GUILayoutEntry_t92 *, const MethodInfo*))List_1_Add_m8482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m8934(__this, ___newCount, method) (( void (*) (List_1_t93 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8484_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m8935(__this, method) (( void (*) (List_1_t93 *, const MethodInfo*))List_1_Clear_m8486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m8936(__this, ___item, method) (( bool (*) (List_1_t93 *, GUILayoutEntry_t92 *, const MethodInfo*))List_1_Contains_m8488_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m8937(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t93 *, GUILayoutEntryU5BU5D_t1519*, int32_t, const MethodInfo*))List_1_CopyTo_m8490_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1271(__this, method) (( Enumerator_t349  (*) (List_1_t93 *, const MethodInfo*))List_1_GetEnumerator_m8491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m8938(__this, ___item, method) (( int32_t (*) (List_1_t93 *, GUILayoutEntry_t92 *, const MethodInfo*))List_1_IndexOf_m8493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m8939(__this, ___start, ___delta, method) (( void (*) (List_1_t93 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8495_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m8940(__this, ___index, method) (( void (*) (List_1_t93 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m8941(__this, ___index, ___item, method) (( void (*) (List_1_t93 *, int32_t, GUILayoutEntry_t92 *, const MethodInfo*))List_1_Insert_m8499_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m8942(__this, ___item, method) (( bool (*) (List_1_t93 *, GUILayoutEntry_t92 *, const MethodInfo*))List_1_Remove_m8501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m8943(__this, ___index, method) (( void (*) (List_1_t93 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8503_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m8944(__this, method) (( GUILayoutEntryU5BU5D_t1519* (*) (List_1_t93 *, const MethodInfo*))List_1_ToArray_m8505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m8945(__this, method) (( int32_t (*) (List_1_t93 *, const MethodInfo*))List_1_get_Capacity_m8507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m8946(__this, ___value, method) (( void (*) (List_1_t93 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8509_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m8947(__this, method) (( int32_t (*) (List_1_t93 *, const MethodInfo*))List_1_get_Count_m8511_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m8948(__this, ___index, method) (( GUILayoutEntry_t92 * (*) (List_1_t93 *, int32_t, const MethodInfo*))List_1_get_Item_m8513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m8949(__this, ___index, ___value, method) (( void (*) (List_1_t93 *, int32_t, GUILayoutEntry_t92 *, const MethodInfo*))List_1_set_Item_m8515_gshared)(__this, ___index, ___value, method)
