#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t254;
struct GcScoreData_t254_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t264;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t264 * GcScoreData_ToScore_m1120 (GcScoreData_t254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t254_marshal(const GcScoreData_t254& unmarshaled, GcScoreData_t254_marshaled& marshaled);
void GcScoreData_t254_marshal_back(const GcScoreData_t254_marshaled& marshaled, GcScoreData_t254& unmarshaled);
void GcScoreData_t254_marshal_cleanup(GcScoreData_t254_marshaled& marshaled);
