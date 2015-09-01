#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t402;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t1942;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Type[]
struct TypeU5BU5D_t226;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m1400(__this, method) (( void (*) (List_1_t402 *, const MethodInfo*))List_1__ctor_m1351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m11112(__this, ___capacity, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1__ctor_m8454_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m11113(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8456_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11114(__this, method) (( Object_t* (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11115(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t402 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8460_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11116(__this, method) (( Object_t * (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11117(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8464_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11118(__this, ___item, method) (( bool (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8466_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11119(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11120(__this, ___index, ___item, method) (( void (*) (List_1_t402 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8470_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11121(__this, ___item, method) (( void (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11122(__this, method) (( bool (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8474_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11123(__this, method) (( Object_t * (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8476_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11124(__this, ___index, method) (( Object_t * (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8478_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11125(__this, ___index, ___value, method) (( void (*) (List_1_t402 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m11126(__this, ___item, method) (( void (*) (List_1_t402 *, Type_t *, const MethodInfo*))List_1_Add_m8482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11127(__this, ___newCount, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8484_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m11128(__this, method) (( void (*) (List_1_t402 *, const MethodInfo*))List_1_Clear_m8486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m11129(__this, ___item, method) (( bool (*) (List_1_t402 *, Type_t *, const MethodInfo*))List_1_Contains_m8488_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11130(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t402 *, TypeU5BU5D_t226*, int32_t, const MethodInfo*))List_1_CopyTo_m8490_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m11131(__this, method) (( Enumerator_t1686  (*) (List_1_t402 *, const MethodInfo*))List_1_GetEnumerator_m8491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m11132(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Type_t *, const MethodInfo*))List_1_IndexOf_m8493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11133(__this, ___start, ___delta, method) (( void (*) (List_1_t402 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8495_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11134(__this, ___index, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m11135(__this, ___index, ___item, method) (( void (*) (List_1_t402 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m8499_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m11136(__this, ___item, method) (( bool (*) (List_1_t402 *, Type_t *, const MethodInfo*))List_1_Remove_m8501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11137(__this, ___index, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8503_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1401(__this, method) (( TypeU5BU5D_t226* (*) (List_1_t402 *, const MethodInfo*))List_1_ToArray_m8505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m11138(__this, method) (( int32_t (*) (List_1_t402 *, const MethodInfo*))List_1_get_Capacity_m8507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11139(__this, ___value, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8509_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m11140(__this, method) (( int32_t (*) (List_1_t402 *, const MethodInfo*))List_1_get_Count_m8511_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m11141(__this, ___index, method) (( Type_t * (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_get_Item_m8513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m11142(__this, ___index, ___value, method) (( void (*) (List_1_t402 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m8515_gshared)(__this, ___index, ___value, method)
