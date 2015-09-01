#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t170;
struct SkeletonBone_t170_marshaled;

void SkeletonBone_t170_marshal(const SkeletonBone_t170& unmarshaled, SkeletonBone_t170_marshaled& marshaled);
void SkeletonBone_t170_marshal_back(const SkeletonBone_t170_marshaled& marshaled, SkeletonBone_t170& unmarshaled);
void SkeletonBone_t170_marshal_cleanup(SkeletonBone_t170_marshaled& marshaled);
