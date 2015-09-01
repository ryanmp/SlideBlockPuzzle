﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Transform_1_t1551;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t78;
// System.AsyncCallback
struct AsyncCallback_t79;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m9348_gshared (Transform_1_t1551 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m9348(__this, ___object, ___method, method) (( void (*) (Transform_1_t1551 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9348_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1542  Transform_1_Invoke_m9349_gshared (Transform_1_t1551 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m9349(__this, ___key, ___value, method) (( KeyValuePair_2_t1542  (*) (Transform_1_t1551 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m9349_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m9350_gshared (Transform_1_t1551 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t79 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m9350(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1551 *, Object_t *, int32_t, AsyncCallback_t79 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9350_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1542  Transform_1_EndInvoke_m9351_gshared (Transform_1_t1551 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m9351(__this, ___result, method) (( KeyValuePair_2_t1542  (*) (Transform_1_t1551 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9351_gshared)(__this, ___result, method)