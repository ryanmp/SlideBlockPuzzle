#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t320;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t195;
// System.IAsyncResult
struct IAsyncResult_t78;
// System.AsyncCallback
struct AsyncCallback_t79;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m10356(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t320 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m10357_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m10358(__this, ___response, method) (( void (*) (ResponseDelegate_1_t320 *, CreateMatchResponse_t195 *, const MethodInfo*))ResponseDelegate_1_Invoke_m10359_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m10360(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t320 *, CreateMatchResponse_t195 *, AsyncCallback_t79 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m10361_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m10362(__this, ___result, method) (( void (*) (ResponseDelegate_1_t320 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m10363_gshared)(__this, ___result, method)
