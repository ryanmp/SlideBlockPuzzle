#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MainCamera
struct  MainCamera_t10  : public MonoBehaviour_t8
{
	// UnityEngine.Transform MainCamera::target
	Transform_t9 * ___target_2;
	// UnityEngine.Vector3 MainCamera::new_position
	Vector3_t11  ___new_position_3;
	// System.Single MainCamera::move_start_time
	float ___move_start_time_4;
	// System.Single MainCamera::CAM_SHIFT_DISTANCE
	float ___CAM_SHIFT_DISTANCE_5;
	// System.Single MainCamera::CAM_SHIFT_TIME
	float ___CAM_SHIFT_TIME_6;
};
