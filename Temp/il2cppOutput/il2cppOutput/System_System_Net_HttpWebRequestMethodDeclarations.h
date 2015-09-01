#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t449;
// System.Uri
struct Uri_t214;
// System.Net.ServicePoint
struct ServicePoint_t448;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t338;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m1535 (HttpWebRequest_t449 * __this, Uri_t214 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m1536 (HttpWebRequest_t449 * __this, SerializationInfo_t338 * ___serializationInfo, StreamingContext_t339  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m1537 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1538 (HttpWebRequest_t449 * __this, SerializationInfo_t338 * ___serializationInfo, StreamingContext_t339  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t214 * HttpWebRequest_get_Address_m1539 (HttpWebRequest_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t448 * HttpWebRequest_get_ServicePoint_m1540 (HttpWebRequest_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t448 * HttpWebRequest_GetServicePoint_m1541 (HttpWebRequest_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m1542 (HttpWebRequest_t449 * __this, SerializationInfo_t338 * ___serializationInfo, StreamingContext_t339  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
