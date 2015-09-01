#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t45;
struct YieldInstruction_t45_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m720 (YieldInstruction_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t45_marshal(const YieldInstruction_t45& unmarshaled, YieldInstruction_t45_marshaled& marshaled);
void YieldInstruction_t45_marshal_back(const YieldInstruction_t45_marshaled& marshaled, YieldInstruction_t45& unmarshaled);
void YieldInstruction_t45_marshal_cleanup(YieldInstruction_t45_marshaled& marshaled);
