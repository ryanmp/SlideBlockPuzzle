#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t75;
struct Gradient_t75_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m201 (Gradient_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m202 (Gradient_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m203 (Gradient_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m204 (Gradient_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t75_marshal(const Gradient_t75& unmarshaled, Gradient_t75_marshaled& marshaled);
void Gradient_t75_marshal_back(const Gradient_t75_marshaled& marshaled, Gradient_t75& unmarshaled);
void Gradient_t75_marshal_cleanup(Gradient_t75_marshaled& marshaled);
