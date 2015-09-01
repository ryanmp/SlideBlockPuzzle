#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1780;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t308;
// System.Object[]
struct ObjectU5BU5D_t229;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1839;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1778;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11980_gshared (Collection_1_t1780 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11980(__this, method) (( void (*) (Collection_1_t1780 *, const MethodInfo*))Collection_1__ctor_m11980_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11981_gshared (Collection_1_t1780 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11981(__this, method) (( bool (*) (Collection_1_t1780 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11981_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11982_gshared (Collection_1_t1780 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11982(__this, ___array, ___index, method) (( void (*) (Collection_1_t1780 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11982_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11983_gshared (Collection_1_t1780 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11983(__this, method) (( Object_t * (*) (Collection_1_t1780 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11983_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11984_gshared (Collection_1_t1780 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11984(__this, ___value, method) (( int32_t (*) (Collection_1_t1780 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11984_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11985_gshared (Collection_1_t1780 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11985(__this, ___value, method) (( bool (*) (Collection_1_t1780 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11985_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11986_gshared (Collection_1_t1780 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11986(__this, ___value, method) (( int32_t (*) (Collection_1_t1780 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11986_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11987_gshared (Collection_1_t1780 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11987(__this, ___index, ___value, method) (( void (*) (Collection_1_t1780 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11987_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11988_gshared (Collection_1_t1780 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11988(__this, ___value, method) (( void (*) (Collection_1_t1780 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11988_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11989_gshared (Collection_1_t1780 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11989(__this, method) (( Object_t * (*) (Collection_1_t1780 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11989_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11990_gshared (Collection_1_t1780 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11990(__this, ___index, method) (( Object_t * (*) (Collection_1_t1780 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11990_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11991_gshared (Collection_1_t1780 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11991(__this, ___index, ___value, method) (( void (*) (Collection_1_t1780 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11991_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11992_gshared (Collection_1_t1780 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11992(__this, ___item, method) (( void (*) (Collection_1_t1780 *, Object_t *, const MethodInfo*))Collection_1_Add_m11992_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11993_gshared (Collection_1_t1780 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11993(__this, method) (( void (*) (Collection_1_t1780 *, const MethodInfo*))Collection_1_Clear_m11993_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11994_gshared (Collection_1_t1780 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11994(__this, method) (( void (*) (Collection_1_t1780 *, const MethodInfo*))Collection_1_ClearItems_m11994_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11995_gshared (Collection_1_t1780 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11995(__this, ___item, method) (( bool (*) (Collection_1_t1780 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11995_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11996_gshared (Collection_1_t1780 * __this, ObjectU5BU5D_t229* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11996(__this, ___array, ___index, method) (( void (*) (Collection_1_t1780 *, ObjectU5BU5D_t229*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11996_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11997_gshared (Collection_1_t1780 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11997(__this, method) (( Object_t* (*) (Collection_1_t1780 *, const MethodInfo*))Collection_1_GetEnumerator_m11997_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11998_gshared (Collection_1_t1780 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11998(__this, ___item, method) (( int32_t (*) (Collection_1_t1780 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11998_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11999_gshared (Collection_1_t1780 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11999(__this, ___index, ___item, method) (( void (*) (Collection_1_t1780 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11999_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12000_gshared (Collection_1_t1780 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12000(__this, ___index, ___item, method) (( void (*) (Collection_1_t1780 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12000_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12001_gshared (Collection_1_t1780 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12001(__this, ___item, method) (( bool (*) (Collection_1_t1780 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12001_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12002_gshared (Collection_1_t1780 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12002(__this, ___index, method) (( void (*) (Collection_1_t1780 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12002_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12003_gshared (Collection_1_t1780 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12003(__this, ___index, method) (( void (*) (Collection_1_t1780 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12003_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12004_gshared (Collection_1_t1780 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12004(__this, method) (( int32_t (*) (Collection_1_t1780 *, const MethodInfo*))Collection_1_get_Count_m12004_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12005_gshared (Collection_1_t1780 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12005(__this, ___index, method) (( Object_t * (*) (Collection_1_t1780 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12005_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12006_gshared (Collection_1_t1780 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12006(__this, ___index, ___value, method) (( void (*) (Collection_1_t1780 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12006_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12007_gshared (Collection_1_t1780 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12007(__this, ___index, ___item, method) (( void (*) (Collection_1_t1780 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12007_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12008_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12008(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12008_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12009_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12009(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12009_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12010_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12010(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12010_gshared)(__this /* static, unused */, ___list, method)
