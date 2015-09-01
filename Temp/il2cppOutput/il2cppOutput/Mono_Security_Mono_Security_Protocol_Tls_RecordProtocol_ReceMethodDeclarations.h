#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t718;
// System.IO.Stream
struct Stream_t717;
// System.Byte[]
struct ByteU5BU5D_t131;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t22;
// System.Threading.WaitHandle
struct WaitHandle_t763;
// System.AsyncCallback
struct AsyncCallback_t79;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3047 (ReceiveRecordAsyncResult_t718 * __this, AsyncCallback_t79 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t131* ___initialBuffer, Stream_t717 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t717 * ReceiveRecordAsyncResult_get_Record_m3048 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t131* ReceiveRecordAsyncResult_get_ResultingBuffer_m3049 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t131* ReceiveRecordAsyncResult_get_InitialBuffer_m3050 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3051 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t22 * ReceiveRecordAsyncResult_get_AsyncException_m3052 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3053 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t763 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3054 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3055 (ReceiveRecordAsyncResult_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3056 (ReceiveRecordAsyncResult_t718 * __this, Exception_t22 * ___ex, ByteU5BU5D_t131* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3057 (ReceiveRecordAsyncResult_t718 * __this, Exception_t22 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3058 (ReceiveRecordAsyncResult_t718 * __this, ByteU5BU5D_t131* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
