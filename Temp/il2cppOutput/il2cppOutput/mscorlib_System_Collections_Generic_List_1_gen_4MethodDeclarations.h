#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t130;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1862;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.String[]
struct StringU5BU5D_t18;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m1312(__this, method) (( void (*) (List_1_t130 *, const MethodInfo*))List_1__ctor_m1351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m9502(__this, ___capacity, method) (( void (*) (List_1_t130 *, int32_t, const MethodInfo*))List_1__ctor_m8454_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m9503(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8456_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9504(__this, method) (( Object_t* (*) (List_1_t130 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9505(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t130 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8460_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9506(__this, method) (( Object_t * (*) (List_1_t130 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9507(__this, ___item, method) (( int32_t (*) (List_1_t130 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8464_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9508(__this, ___item, method) (( bool (*) (List_1_t130 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8466_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9509(__this, ___item, method) (( int32_t (*) (List_1_t130 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9510(__this, ___index, ___item, method) (( void (*) (List_1_t130 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8470_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9511(__this, ___item, method) (( void (*) (List_1_t130 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9512(__this, method) (( bool (*) (List_1_t130 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8474_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9513(__this, method) (( Object_t * (*) (List_1_t130 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8476_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9514(__this, ___index, method) (( Object_t * (*) (List_1_t130 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8478_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9515(__this, ___index, ___value, method) (( void (*) (List_1_t130 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m9516(__this, ___item, method) (( void (*) (List_1_t130 *, String_t*, const MethodInfo*))List_1_Add_m8482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9517(__this, ___newCount, method) (( void (*) (List_1_t130 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8484_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m9518(__this, method) (( void (*) (List_1_t130 *, const MethodInfo*))List_1_Clear_m8486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m9519(__this, ___item, method) (( bool (*) (List_1_t130 *, String_t*, const MethodInfo*))List_1_Contains_m8488_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9520(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t130 *, StringU5BU5D_t18*, int32_t, const MethodInfo*))List_1_CopyTo_m8490_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m9521(__this, method) (( Enumerator_t1561  (*) (List_1_t130 *, const MethodInfo*))List_1_GetEnumerator_m8491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m9522(__this, ___item, method) (( int32_t (*) (List_1_t130 *, String_t*, const MethodInfo*))List_1_IndexOf_m8493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9523(__this, ___start, ___delta, method) (( void (*) (List_1_t130 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8495_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9524(__this, ___index, method) (( void (*) (List_1_t130 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m9525(__this, ___index, ___item, method) (( void (*) (List_1_t130 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m8499_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m9526(__this, ___item, method) (( bool (*) (List_1_t130 *, String_t*, const MethodInfo*))List_1_Remove_m8501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9527(__this, ___index, method) (( void (*) (List_1_t130 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8503_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m8373(__this, method) (( StringU5BU5D_t18* (*) (List_1_t130 *, const MethodInfo*))List_1_ToArray_m8505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m9528(__this, method) (( int32_t (*) (List_1_t130 *, const MethodInfo*))List_1_get_Capacity_m8507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9529(__this, ___value, method) (( void (*) (List_1_t130 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8509_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m9530(__this, method) (( int32_t (*) (List_1_t130 *, const MethodInfo*))List_1_get_Count_m8511_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m9531(__this, ___index, method) (( String_t* (*) (List_1_t130 *, int32_t, const MethodInfo*))List_1_get_Item_m8513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m9532(__this, ___index, ___value, method) (( void (*) (List_1_t130 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m8515_gshared)(__this, ___index, ___value, method)
