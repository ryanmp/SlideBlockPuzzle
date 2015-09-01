#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.Color[]
struct ColorU5BU5D_t2;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t4;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t5;
// UnityEngine.PhysicsMaterial2D
struct PhysicsMaterial2D_t6;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GenerateLevel
struct  GenerateLevel_t7  : public MonoBehaviour_t8
{
	// UnityEngine.GameObject GenerateLevel::block
	GameObject_t1 * ___block_2;
	// UnityEngine.GameObject GenerateLevel::fixed_block
	GameObject_t1 * ___fixed_block_3;
	// System.Int32 GenerateLevel::grid_dimensions
	int32_t ___grid_dimensions_4;
	// System.Single GenerateLevel::GRAVITY_MAGNITUDE
	float ___GRAVITY_MAGNITUDE_5;
	// UnityEngine.Color[] GenerateLevel::block_colors
	ColorU5BU5D_t2* ___block_colors_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> GenerateLevel::blocks
	List_1_t4 * ___blocks_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GenerateLevel::blocks_obs
	List_1_t5 * ___blocks_obs_8;
	// System.Single GenerateLevel::BLOCK_INIT_VELOCITY
	float ___BLOCK_INIT_VELOCITY_9;
	// UnityEngine.PhysicsMaterial2D GenerateLevel::default_physics_mat
	PhysicsMaterial2D_t6 * ___default_physics_mat_10;
};
