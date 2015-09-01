#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t81;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t338;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1415;
// System.Delegate
struct Delegate_t359;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m4012 (MulticastDelegate_t81 * __this, SerializationInfo_t338 * ___info, StreamingContext_t339  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m4013 (MulticastDelegate_t81 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m4014 (MulticastDelegate_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1415* MulticastDelegate_GetInvocationList_m4015 (MulticastDelegate_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t359 * MulticastDelegate_CombineImpl_m4016 (MulticastDelegate_t81 * __this, Delegate_t359 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4017 (MulticastDelegate_t81 * __this, MulticastDelegate_t81 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t81 * MulticastDelegate_KPM_m4018 (Object_t * __this /* static, unused */, MulticastDelegate_t81 * ___needle, MulticastDelegate_t81 * ___haystack, MulticastDelegate_t81 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t359 * MulticastDelegate_RemoveImpl_m4019 (MulticastDelegate_t81 * __this, Delegate_t359 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
