#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t178;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t102;
// System.IAsyncResult
struct IAsyncResult_t78;
// System.AsyncCallback
struct AsyncCallback_t79;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m9640(__this, ___object, ___method, method) (( void (*) (Action_1_t178 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m8563_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m1322(__this, ___obj, method) (( void (*) (Action_1_t178 *, Font_t102 *, const MethodInfo*))Action_1_Invoke_m8564_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m9641(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t178 *, Font_t102 *, AsyncCallback_t79 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m8566_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m9642(__this, ___result, method) (( void (*) (Action_1_t178 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m8568_gshared)(__this, ___result, method)
