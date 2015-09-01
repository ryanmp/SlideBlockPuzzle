#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t37;
struct AsyncOperation_t37_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m607 (AsyncOperation_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m608 (AsyncOperation_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m609 (AsyncOperation_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t37_marshal(const AsyncOperation_t37& unmarshaled, AsyncOperation_t37_marshaled& marshaled);
void AsyncOperation_t37_marshal_back(const AsyncOperation_t37_marshaled& marshaled, AsyncOperation_t37& unmarshaled);
void AsyncOperation_t37_marshal_cleanup(AsyncOperation_t37_marshaled& marshaled);
