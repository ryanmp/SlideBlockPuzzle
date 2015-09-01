#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t166;
struct AnimationCurve_t166_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t312;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m783 (AnimationCurve_t166 * __this, KeyframeU5BU5D_t312* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m784 (AnimationCurve_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m785 (AnimationCurve_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m786 (AnimationCurve_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m787 (AnimationCurve_t166 * __this, KeyframeU5BU5D_t312* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t166_marshal(const AnimationCurve_t166& unmarshaled, AnimationCurve_t166_marshaled& marshaled);
void AnimationCurve_t166_marshal_back(const AnimationCurve_t166_marshaled& marshaled, AnimationCurve_t166& unmarshaled);
void AnimationCurve_t166_marshal_cleanup(AnimationCurve_t166_marshaled& marshaled);
