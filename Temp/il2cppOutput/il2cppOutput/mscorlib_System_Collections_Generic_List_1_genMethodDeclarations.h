#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t4;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t1837;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t21;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m17_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1__ctor_m17(__this, method) (( void (*) (List_1_t4 *, const MethodInfo*))List_1__ctor_m17_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8400_gshared (List_1_t4 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8400(__this, ___capacity, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1__ctor_m8400_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m8401_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8401(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8401_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8402_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8402(__this, method) (( Object_t* (*) (List_1_t4 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8402_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8403_gshared (List_1_t4 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8403(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8403_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8404_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8404(__this, method) (( Object_t * (*) (List_1_t4 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8404_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8405_gshared (List_1_t4 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8405(__this, ___item, method) (( int32_t (*) (List_1_t4 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8405_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8406_gshared (List_1_t4 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8406(__this, ___item, method) (( bool (*) (List_1_t4 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8406_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8407_gshared (List_1_t4 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8407(__this, ___item, method) (( int32_t (*) (List_1_t4 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8407_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8408_gshared (List_1_t4 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8408(__this, ___index, ___item, method) (( void (*) (List_1_t4 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8408_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8409_gshared (List_1_t4 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8409(__this, ___item, method) (( void (*) (List_1_t4 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8409_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410(__this, method) (( bool (*) (List_1_t4 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8411_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8411(__this, method) (( Object_t * (*) (List_1_t4 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8412_gshared (List_1_t4 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8412(__this, ___index, method) (( Object_t * (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8412_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8413_gshared (List_1_t4 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8413(__this, ___index, ___value, method) (( void (*) (List_1_t4 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m8414_gshared (List_1_t4 * __this, Vector3_t11  ___item, const MethodInfo* method);
#define List_1_Add_m8414(__this, ___item, method) (( void (*) (List_1_t4 *, Vector3_t11 , const MethodInfo*))List_1_Add_m8414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8415_gshared (List_1_t4 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8415(__this, ___newCount, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8415_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m8416_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_Clear_m8416(__this, method) (( void (*) (List_1_t4 *, const MethodInfo*))List_1_Clear_m8416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m8417_gshared (List_1_t4 * __this, Vector3_t11  ___item, const MethodInfo* method);
#define List_1_Contains_m8417(__this, ___item, method) (( bool (*) (List_1_t4 *, Vector3_t11 , const MethodInfo*))List_1_Contains_m8417_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8418_gshared (List_1_t4 * __this, Vector3U5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8418(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4 *, Vector3U5BU5D_t21*, int32_t, const MethodInfo*))List_1_CopyTo_m8418_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t20  List_1_GetEnumerator_m28_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28(__this, method) (( Enumerator_t20  (*) (List_1_t4 *, const MethodInfo*))List_1_GetEnumerator_m28_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8419_gshared (List_1_t4 * __this, Vector3_t11  ___item, const MethodInfo* method);
#define List_1_IndexOf_m8419(__this, ___item, method) (( int32_t (*) (List_1_t4 *, Vector3_t11 , const MethodInfo*))List_1_IndexOf_m8419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8420_gshared (List_1_t4 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8420(__this, ___start, ___delta, method) (( void (*) (List_1_t4 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8420_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8421_gshared (List_1_t4 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8421(__this, ___index, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8421_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8422_gshared (List_1_t4 * __this, int32_t ___index, Vector3_t11  ___item, const MethodInfo* method);
#define List_1_Insert_m8422(__this, ___index, ___item, method) (( void (*) (List_1_t4 *, int32_t, Vector3_t11 , const MethodInfo*))List_1_Insert_m8422_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m8423_gshared (List_1_t4 * __this, Vector3_t11  ___item, const MethodInfo* method);
#define List_1_Remove_m8423(__this, ___item, method) (( bool (*) (List_1_t4 *, Vector3_t11 , const MethodInfo*))List_1_Remove_m8423_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8424_gshared (List_1_t4 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8424(__this, ___index, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8424_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t21* List_1_ToArray_m8425_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_ToArray_m8425(__this, method) (( Vector3U5BU5D_t21* (*) (List_1_t4 *, const MethodInfo*))List_1_ToArray_m8425_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8426_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8426(__this, method) (( int32_t (*) (List_1_t4 *, const MethodInfo*))List_1_get_Capacity_m8426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8427_gshared (List_1_t4 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8427(__this, ___value, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8427_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m8428_gshared (List_1_t4 * __this, const MethodInfo* method);
#define List_1_get_Count_m8428(__this, method) (( int32_t (*) (List_1_t4 *, const MethodInfo*))List_1_get_Count_m8428_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t11  List_1_get_Item_m8429_gshared (List_1_t4 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8429(__this, ___index, method) (( Vector3_t11  (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_get_Item_m8429_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8430_gshared (List_1_t4 * __this, int32_t ___index, Vector3_t11  ___value, const MethodInfo* method);
#define List_1_set_Item_m8430(__this, ___index, ___value, method) (( void (*) (List_1_t4 *, int32_t, Vector3_t11 , const MethodInfo*))List_1_set_Item_m8430_gshared)(__this, ___index, ___value, method)
