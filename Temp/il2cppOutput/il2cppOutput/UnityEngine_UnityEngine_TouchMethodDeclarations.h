#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t31;
struct Touch_t31_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t13  Touch_get_position_m66 (Touch_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m64 (Touch_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t31_marshal(const Touch_t31& unmarshaled, Touch_t31_marshaled& marshaled);
void Touch_t31_marshal_back(const Touch_t31_marshaled& marshaled, Touch_t31& unmarshaled);
void Touch_t31_marshal_cleanup(Touch_t31_marshaled& marshaled);
