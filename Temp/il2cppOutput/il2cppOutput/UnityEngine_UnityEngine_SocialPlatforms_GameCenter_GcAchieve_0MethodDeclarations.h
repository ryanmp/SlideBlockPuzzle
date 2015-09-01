#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t253;
struct GcAchievementData_t253_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t262;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t262 * GcAchievementData_ToAchievement_m1119 (GcAchievementData_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t253_marshal(const GcAchievementData_t253& unmarshaled, GcAchievementData_t253_marshaled& marshaled);
void GcAchievementData_t253_marshal_back(const GcAchievementData_t253_marshaled& marshaled, GcAchievementData_t253& unmarshaled);
void GcAchievementData_t253_marshal_cleanup(GcAchievementData_t253_marshaled& marshaled);
