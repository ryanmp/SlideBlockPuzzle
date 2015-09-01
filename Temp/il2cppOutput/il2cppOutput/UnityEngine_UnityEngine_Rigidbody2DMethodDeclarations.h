#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t16;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RigidbodyConstraints2D
#include "UnityEngine_UnityEngine_RigidbodyConstraints2D.h"

// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m51 (Rigidbody2D_t16 * __this, Vector2_t13  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m742 (Rigidbody2D_t16 * __this, Vector2_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RigidbodyConstraints2D UnityEngine.Rigidbody2D::get_constraints()
extern "C" int32_t Rigidbody2D_get_constraints_m47 (Rigidbody2D_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
