#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t181;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t1879;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t316;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m9648_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1__ctor_m9648(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1__ctor_m9648_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1323_gshared (List_1_t181 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1323(__this, ___capacity, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1__ctor_m1323_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m9649_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9649(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9649_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9650_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9650(__this, method) (( Object_t* (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9650_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m9651_gshared (List_1_t181 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m9651(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t181 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m9651_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m9652_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9652(__this, method) (( Object_t * (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m9652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m9653_gshared (List_1_t181 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m9653(__this, ___item, method) (( int32_t (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m9653_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m9654_gshared (List_1_t181 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m9654(__this, ___item, method) (( bool (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m9654_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m9655_gshared (List_1_t181 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m9655(__this, ___item, method) (( int32_t (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m9655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m9656_gshared (List_1_t181 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m9656(__this, ___index, ___item, method) (( void (*) (List_1_t181 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m9656_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m9657_gshared (List_1_t181 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m9657(__this, ___item, method) (( void (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m9657_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9658_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9658(__this, method) (( bool (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m9659_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m9659(__this, method) (( Object_t * (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m9659_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m9660_gshared (List_1_t181 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m9660(__this, ___index, method) (( Object_t * (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m9660_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m9661_gshared (List_1_t181 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m9661(__this, ___index, ___value, method) (( void (*) (List_1_t181 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m9661_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m9662_gshared (List_1_t181 * __this, UIVertex_t188  ___item, const MethodInfo* method);
#define List_1_Add_m9662(__this, ___item, method) (( void (*) (List_1_t181 *, UIVertex_t188 , const MethodInfo*))List_1_Add_m9662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9663_gshared (List_1_t181 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9663(__this, ___newCount, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9663_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m9664_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_Clear_m9664(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1_Clear_m9664_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m9665_gshared (List_1_t181 * __this, UIVertex_t188  ___item, const MethodInfo* method);
#define List_1_Contains_m9665(__this, ___item, method) (( bool (*) (List_1_t181 *, UIVertex_t188 , const MethodInfo*))List_1_Contains_m9665_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m9666_gshared (List_1_t181 * __this, UIVertexU5BU5D_t316* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m9666(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t181 *, UIVertexU5BU5D_t316*, int32_t, const MethodInfo*))List_1_CopyTo_m9666_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1571  List_1_GetEnumerator_m9667_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9667(__this, method) (( Enumerator_t1571  (*) (List_1_t181 *, const MethodInfo*))List_1_GetEnumerator_m9667_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m9668_gshared (List_1_t181 * __this, UIVertex_t188  ___item, const MethodInfo* method);
#define List_1_IndexOf_m9668(__this, ___item, method) (( int32_t (*) (List_1_t181 *, UIVertex_t188 , const MethodInfo*))List_1_IndexOf_m9668_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9669_gshared (List_1_t181 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9669(__this, ___start, ___delta, method) (( void (*) (List_1_t181 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9669_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9670_gshared (List_1_t181 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9670(__this, ___index, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9670_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m9671_gshared (List_1_t181 * __this, int32_t ___index, UIVertex_t188  ___item, const MethodInfo* method);
#define List_1_Insert_m9671(__this, ___index, ___item, method) (( void (*) (List_1_t181 *, int32_t, UIVertex_t188 , const MethodInfo*))List_1_Insert_m9671_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m9672_gshared (List_1_t181 * __this, UIVertex_t188  ___item, const MethodInfo* method);
#define List_1_Remove_m9672(__this, ___item, method) (( bool (*) (List_1_t181 *, UIVertex_t188 , const MethodInfo*))List_1_Remove_m9672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m9673_gshared (List_1_t181 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m9673(__this, ___index, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_RemoveAt_m9673_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t316* List_1_ToArray_m9674_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_ToArray_m9674(__this, method) (( UIVertexU5BU5D_t316* (*) (List_1_t181 *, const MethodInfo*))List_1_ToArray_m9674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9675_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9675(__this, method) (( int32_t (*) (List_1_t181 *, const MethodInfo*))List_1_get_Capacity_m9675_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9676_gshared (List_1_t181 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9676(__this, ___value, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9676_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m9677_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_get_Count_m9677(__this, method) (( int32_t (*) (List_1_t181 *, const MethodInfo*))List_1_get_Count_m9677_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t188  List_1_get_Item_m9678_gshared (List_1_t181 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m9678(__this, ___index, method) (( UIVertex_t188  (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_get_Item_m9678_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m9679_gshared (List_1_t181 * __this, int32_t ___index, UIVertex_t188  ___value, const MethodInfo* method);
#define List_1_set_Item_m9679(__this, ___index, ___value, method) (( void (*) (List_1_t181 *, int32_t, UIVertex_t188 , const MethodInfo*))List_1_set_Item_m9679_gshared)(__this, ___index, ___value, method)
