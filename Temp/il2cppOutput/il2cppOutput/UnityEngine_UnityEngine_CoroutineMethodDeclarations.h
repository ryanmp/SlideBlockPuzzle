#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t48;
struct Coroutine_t48_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m92 (Coroutine_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m93 (Coroutine_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m94 (Coroutine_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t48_marshal(const Coroutine_t48& unmarshaled, Coroutine_t48_marshaled& marshaled);
void Coroutine_t48_marshal_back(const Coroutine_t48_marshaled& marshaled, Coroutine_t48& unmarshaled);
void Coroutine_t48_marshal_cleanup(Coroutine_t48_marshaled& marshaled);
