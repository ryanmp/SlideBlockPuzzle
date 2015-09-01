#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t323;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t205;
// System.IAsyncResult
struct IAsyncResult_t78;
// System.AsyncCallback
struct AsyncCallback_t79;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m10377(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t323 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m10357_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m10378(__this, ___response, method) (( void (*) (ResponseDelegate_1_t323 *, ListMatchResponse_t205 *, const MethodInfo*))ResponseDelegate_1_Invoke_m10359_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m10379(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t323 *, ListMatchResponse_t205 *, AsyncCallback_t79 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m10361_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m10380(__this, ___result, method) (( void (*) (ResponseDelegate_1_t323 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m10363_gshared)(__this, ___result, method)
