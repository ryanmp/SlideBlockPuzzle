#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t129;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t131;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t1877;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t773;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m1311(__this, method) (( void (*) (List_1_t129 *, const MethodInfo*))List_1__ctor_m1351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m9539(__this, ___capacity, method) (( void (*) (List_1_t129 *, int32_t, const MethodInfo*))List_1__ctor_m8454_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m9540(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8456_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9541(__this, method) (( Object_t* (*) (List_1_t129 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9542(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t129 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8460_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9543(__this, method) (( Object_t * (*) (List_1_t129 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9544(__this, ___item, method) (( int32_t (*) (List_1_t129 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8464_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9545(__this, ___item, method) (( bool (*) (List_1_t129 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8466_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9546(__this, ___item, method) (( int32_t (*) (List_1_t129 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9547(__this, ___index, ___item, method) (( void (*) (List_1_t129 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8470_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9548(__this, ___item, method) (( void (*) (List_1_t129 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9549(__this, method) (( bool (*) (List_1_t129 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8474_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9550(__this, method) (( Object_t * (*) (List_1_t129 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8476_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9551(__this, ___index, method) (( Object_t * (*) (List_1_t129 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8478_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9552(__this, ___index, ___value, method) (( void (*) (List_1_t129 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m9553(__this, ___item, method) (( void (*) (List_1_t129 *, ByteU5BU5D_t131*, const MethodInfo*))List_1_Add_m8482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9554(__this, ___newCount, method) (( void (*) (List_1_t129 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8484_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m9555(__this, method) (( void (*) (List_1_t129 *, const MethodInfo*))List_1_Clear_m8486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m9556(__this, ___item, method) (( bool (*) (List_1_t129 *, ByteU5BU5D_t131*, const MethodInfo*))List_1_Contains_m8488_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9557(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t129 *, ByteU5BU5DU5BU5D_t773*, int32_t, const MethodInfo*))List_1_CopyTo_m8490_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m9558(__this, method) (( Enumerator_t1562  (*) (List_1_t129 *, const MethodInfo*))List_1_GetEnumerator_m8491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m9559(__this, ___item, method) (( int32_t (*) (List_1_t129 *, ByteU5BU5D_t131*, const MethodInfo*))List_1_IndexOf_m8493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9560(__this, ___start, ___delta, method) (( void (*) (List_1_t129 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8495_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9561(__this, ___index, method) (( void (*) (List_1_t129 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m9562(__this, ___index, ___item, method) (( void (*) (List_1_t129 *, int32_t, ByteU5BU5D_t131*, const MethodInfo*))List_1_Insert_m8499_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m9563(__this, ___item, method) (( bool (*) (List_1_t129 *, ByteU5BU5D_t131*, const MethodInfo*))List_1_Remove_m8501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9564(__this, ___index, method) (( void (*) (List_1_t129 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8503_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m9565(__this, method) (( ByteU5BU5DU5BU5D_t773* (*) (List_1_t129 *, const MethodInfo*))List_1_ToArray_m8505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m9566(__this, method) (( int32_t (*) (List_1_t129 *, const MethodInfo*))List_1_get_Capacity_m8507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9567(__this, ___value, method) (( void (*) (List_1_t129 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8509_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m9568(__this, method) (( int32_t (*) (List_1_t129 *, const MethodInfo*))List_1_get_Count_m8511_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m9569(__this, ___index, method) (( ByteU5BU5D_t131* (*) (List_1_t129 *, int32_t, const MethodInfo*))List_1_get_Item_m8513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m9570(__this, ___index, ___value, method) (( void (*) (List_1_t129 *, int32_t, ByteU5BU5D_t131*, const MethodInfo*))List_1_set_Item_m8515_gshared)(__this, ___index, ___value, method)
