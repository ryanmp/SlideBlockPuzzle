#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t1480;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t78;
// System.AsyncCallback
struct AsyncCallback_t79;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m8563_gshared (Action_1_t1480 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m8563(__this, ___object, ___method, method) (( void (*) (Action_1_t1480 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m8563_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m8564_gshared (Action_1_t1480 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m8564(__this, ___obj, method) (( void (*) (Action_1_t1480 *, Object_t *, const MethodInfo*))Action_1_Invoke_m8564_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m8566_gshared (Action_1_t1480 * __this, Object_t * ___obj, AsyncCallback_t79 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m8566(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1480 *, Object_t *, AsyncCallback_t79 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m8566_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m8568_gshared (Action_1_t1480 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m8568(__this, ___result, method) (( void (*) (Action_1_t1480 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m8568_gshared)(__this, ___result, method)
