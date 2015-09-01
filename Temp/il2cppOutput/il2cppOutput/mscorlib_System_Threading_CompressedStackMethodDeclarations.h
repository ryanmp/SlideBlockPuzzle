#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CompressedStack
struct CompressedStack_t1255;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t338;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern "C" void CompressedStack__ctor_m7424 (CompressedStack_t1255 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern "C" void CompressedStack__ctor_m7425 (CompressedStack_t1255 * __this, CompressedStack_t1255 * ___cs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern "C" CompressedStack_t1255 * CompressedStack_CreateCopy_m7426 (CompressedStack_t1255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern "C" CompressedStack_t1255 * CompressedStack_Capture_m7427 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CompressedStack_GetObjectData_m7428 (CompressedStack_t1255 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C" bool CompressedStack_IsEmpty_m7429 (CompressedStack_t1255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
