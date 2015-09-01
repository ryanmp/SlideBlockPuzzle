#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t50;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t78;
// System.AsyncCallback
struct AsyncCallback_t79;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m8559_gshared (Action_1_t50 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m8559(__this, ___object, ___method, method) (( void (*) (Action_1_t50 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m8559_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C" void Action_1_Invoke_m1257_gshared (Action_1_t50 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1257(__this, ___obj, method) (( void (*) (Action_1_t50 *, bool, const MethodInfo*))Action_1_Invoke_m1257_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m8560_gshared (Action_1_t50 * __this, bool ___obj, AsyncCallback_t79 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m8560(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t50 *, bool, AsyncCallback_t79 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m8560_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m8561_gshared (Action_1_t50 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m8561(__this, ___result, method) (( void (*) (Action_1_t50 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m8561_gshared)(__this, ___result, method)
