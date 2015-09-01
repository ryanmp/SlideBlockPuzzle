#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t217;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1839;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Object[]
struct ObjectU5BU5D_t229;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1351_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1__ctor_m1351(__this, method) (( void (*) (List_1_t217 *, const MethodInfo*))List_1__ctor_m1351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8454_gshared (List_1_t217 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8454(__this, ___capacity, method) (( void (*) (List_1_t217 *, int32_t, const MethodInfo*))List_1__ctor_m8454_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8456_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8456(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8456_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8458_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8458(__this, method) (( Object_t* (*) (List_1_t217 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8460_gshared (List_1_t217 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8460(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t217 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8460_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8462_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8462(__this, method) (( Object_t * (*) (List_1_t217 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8464_gshared (List_1_t217 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8464(__this, ___item, method) (( int32_t (*) (List_1_t217 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8464_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8466_gshared (List_1_t217 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8466(__this, ___item, method) (( bool (*) (List_1_t217 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8466_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8468_gshared (List_1_t217 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8468(__this, ___item, method) (( int32_t (*) (List_1_t217 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8470_gshared (List_1_t217 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8470(__this, ___index, ___item, method) (( void (*) (List_1_t217 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8470_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8472_gshared (List_1_t217 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8472(__this, ___item, method) (( void (*) (List_1_t217 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8474_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8474(__this, method) (( bool (*) (List_1_t217 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8474_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8476_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8476(__this, method) (( Object_t * (*) (List_1_t217 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8476_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8478_gshared (List_1_t217 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8478(__this, ___index, method) (( Object_t * (*) (List_1_t217 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8478_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8480_gshared (List_1_t217 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8480(__this, ___index, ___value, method) (( void (*) (List_1_t217 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m8482_gshared (List_1_t217 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m8482(__this, ___item, method) (( void (*) (List_1_t217 *, Object_t *, const MethodInfo*))List_1_Add_m8482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8484_gshared (List_1_t217 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8484(__this, ___newCount, method) (( void (*) (List_1_t217 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8484_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m8486_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_Clear_m8486(__this, method) (( void (*) (List_1_t217 *, const MethodInfo*))List_1_Clear_m8486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m8488_gshared (List_1_t217 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m8488(__this, ___item, method) (( bool (*) (List_1_t217 *, Object_t *, const MethodInfo*))List_1_Contains_m8488_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8490_gshared (List_1_t217 * __this, ObjectU5BU5D_t229* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8490(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t217 *, ObjectU5BU5D_t229*, int32_t, const MethodInfo*))List_1_CopyTo_m8490_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1471  List_1_GetEnumerator_m8491_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8491(__this, method) (( Enumerator_t1471  (*) (List_1_t217 *, const MethodInfo*))List_1_GetEnumerator_m8491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8493_gshared (List_1_t217 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m8493(__this, ___item, method) (( int32_t (*) (List_1_t217 *, Object_t *, const MethodInfo*))List_1_IndexOf_m8493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8495_gshared (List_1_t217 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8495(__this, ___start, ___delta, method) (( void (*) (List_1_t217 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8495_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8497_gshared (List_1_t217 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8497(__this, ___index, method) (( void (*) (List_1_t217 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8499_gshared (List_1_t217 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m8499(__this, ___index, ___item, method) (( void (*) (List_1_t217 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m8499_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m8501_gshared (List_1_t217 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m8501(__this, ___item, method) (( bool (*) (List_1_t217 *, Object_t *, const MethodInfo*))List_1_Remove_m8501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8503_gshared (List_1_t217 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8503(__this, ___index, method) (( void (*) (List_1_t217 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8503_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t229* List_1_ToArray_m8505_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_ToArray_m8505(__this, method) (( ObjectU5BU5D_t229* (*) (List_1_t217 *, const MethodInfo*))List_1_ToArray_m8505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8507_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8507(__this, method) (( int32_t (*) (List_1_t217 *, const MethodInfo*))List_1_get_Capacity_m8507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8509_gshared (List_1_t217 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8509(__this, ___value, method) (( void (*) (List_1_t217 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8509_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m8511_gshared (List_1_t217 * __this, const MethodInfo* method);
#define List_1_get_Count_m8511(__this, method) (( int32_t (*) (List_1_t217 *, const MethodInfo*))List_1_get_Count_m8511_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m8513_gshared (List_1_t217 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8513(__this, ___index, method) (( Object_t * (*) (List_1_t217 *, int32_t, const MethodInfo*))List_1_get_Item_m8513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8515_gshared (List_1_t217 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m8515(__this, ___index, ___value, method) (( void (*) (List_1_t217 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m8515_gshared)(__this, ___index, ___value, method)
