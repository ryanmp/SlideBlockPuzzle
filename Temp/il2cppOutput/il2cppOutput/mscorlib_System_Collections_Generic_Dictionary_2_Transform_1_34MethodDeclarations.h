#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>
struct Transform_1_t1701;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t78;
// System.AsyncCallback
struct AsyncCallback_t79;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11303_gshared (Transform_1_t1701 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11303(__this, ___object, ___method, method) (( void (*) (Transform_1_t1701 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11303_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m11304_gshared (Transform_1_t1701 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11304(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1701 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m11304_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11305_gshared (Transform_1_t1701 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t79 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11305(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1701 *, Object_t *, int32_t, AsyncCallback_t79 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11305_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m11306_gshared (Transform_1_t1701 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11306(__this, ___result, method) (( Object_t * (*) (Transform_1_t1701 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11306_gshared)(__this, ___result, method)
