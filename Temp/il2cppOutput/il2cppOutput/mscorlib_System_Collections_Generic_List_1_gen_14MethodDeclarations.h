#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t290;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t285;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t1956;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t1715;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m1423(__this, method) (( void (*) (List_1_t290 *, const MethodInfo*))List_1__ctor_m1351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m11437(__this, ___capacity, method) (( void (*) (List_1_t290 *, int32_t, const MethodInfo*))List_1__ctor_m8454_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m11438(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8456_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11439(__this, method) (( Object_t* (*) (List_1_t290 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11440(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t290 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8460_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11441(__this, method) (( Object_t * (*) (List_1_t290 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11442(__this, ___item, method) (( int32_t (*) (List_1_t290 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8464_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11443(__this, ___item, method) (( bool (*) (List_1_t290 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8466_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11444(__this, ___item, method) (( int32_t (*) (List_1_t290 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11445(__this, ___index, ___item, method) (( void (*) (List_1_t290 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8470_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11446(__this, ___item, method) (( void (*) (List_1_t290 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11447(__this, method) (( bool (*) (List_1_t290 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8474_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11448(__this, method) (( Object_t * (*) (List_1_t290 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8476_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11449(__this, ___index, method) (( Object_t * (*) (List_1_t290 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8478_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11450(__this, ___index, ___value, method) (( void (*) (List_1_t290 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m11451(__this, ___item, method) (( void (*) (List_1_t290 *, BaseInvokableCall_t285 *, const MethodInfo*))List_1_Add_m8482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11452(__this, ___newCount, method) (( void (*) (List_1_t290 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8484_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m11453(__this, method) (( void (*) (List_1_t290 *, const MethodInfo*))List_1_Clear_m8486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m11454(__this, ___item, method) (( bool (*) (List_1_t290 *, BaseInvokableCall_t285 *, const MethodInfo*))List_1_Contains_m8488_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11455(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t290 *, BaseInvokableCallU5BU5D_t1715*, int32_t, const MethodInfo*))List_1_CopyTo_m8490_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m11456(__this, method) (( Enumerator_t1716  (*) (List_1_t290 *, const MethodInfo*))List_1_GetEnumerator_m8491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m11457(__this, ___item, method) (( int32_t (*) (List_1_t290 *, BaseInvokableCall_t285 *, const MethodInfo*))List_1_IndexOf_m8493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11458(__this, ___start, ___delta, method) (( void (*) (List_1_t290 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8495_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11459(__this, ___index, method) (( void (*) (List_1_t290 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m11460(__this, ___index, ___item, method) (( void (*) (List_1_t290 *, int32_t, BaseInvokableCall_t285 *, const MethodInfo*))List_1_Insert_m8499_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m11461(__this, ___item, method) (( bool (*) (List_1_t290 *, BaseInvokableCall_t285 *, const MethodInfo*))List_1_Remove_m8501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11462(__this, ___index, method) (( void (*) (List_1_t290 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8503_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m11463(__this, method) (( BaseInvokableCallU5BU5D_t1715* (*) (List_1_t290 *, const MethodInfo*))List_1_ToArray_m8505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m11464(__this, method) (( int32_t (*) (List_1_t290 *, const MethodInfo*))List_1_get_Capacity_m8507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11465(__this, ___value, method) (( void (*) (List_1_t290 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8509_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m11466(__this, method) (( int32_t (*) (List_1_t290 *, const MethodInfo*))List_1_get_Count_m8511_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m11467(__this, ___index, method) (( BaseInvokableCall_t285 * (*) (List_1_t290 *, int32_t, const MethodInfo*))List_1_get_Item_m8513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m11468(__this, ___index, ___value, method) (( void (*) (List_1_t290 *, int32_t, BaseInvokableCall_t285 *, const MethodInfo*))List_1_set_Item_m8515_gshared)(__this, ___index, ___value, method)
