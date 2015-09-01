#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// PlayerInput
struct  PlayerInput_t12  : public MonoBehaviour_t8
{
	// System.Single PlayerInput::fingerStartTime
	float ___fingerStartTime_2;
	// UnityEngine.Vector2 PlayerInput::fingerStartPos
	Vector2_t13  ___fingerStartPos_3;
	// System.Boolean PlayerInput::isSwipe
	bool ___isSwipe_4;
	// System.Single PlayerInput::minSwipeDist
	float ___minSwipeDist_5;
	// System.Single PlayerInput::maxSwipeTime
	float ___maxSwipeTime_6;
	// System.Single PlayerInput::ratio_for_nondiagonal
	float ___ratio_for_nondiagonal_7;
	// UnityEngine.GameObject PlayerInput::GenerateLevel
	GameObject_t1 * ___GenerateLevel_8;
	// UnityEngine.GameObject PlayerInput::MainCamera
	GameObject_t1 * ___MainCamera_9;
};
