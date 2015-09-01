#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t8;
// UnityEngine.Coroutine
struct Coroutine_t48;
struct Coroutine_t48_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t308;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m19 (MonoBehaviour_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t48 * MonoBehaviour_StartCoroutine_m676 (MonoBehaviour_t8 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t48 * MonoBehaviour_StartCoroutine_Auto_m677 (MonoBehaviour_t8 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
