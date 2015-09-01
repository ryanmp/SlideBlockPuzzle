﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct RemotingSurrogateSelector_t1126;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t1192;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1125;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C" void RemotingSurrogateSelector__ctor_m6389 (RemotingSurrogateSelector_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern "C" void RemotingSurrogateSelector__cctor_m6390 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m6391 (RemotingSurrogateSelector_t1126 * __this, Type_t * ___type, StreamingContext_t339  ___context, Object_t ** ___ssout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
