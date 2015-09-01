#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t440;
// System.Net.WebRequest
struct WebRequest_t438;
// System.Uri
struct Uri_t214;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1526 (FtpRequestCreator_t440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t438 * FtpRequestCreator_Create_m1527 (FtpRequestCreator_t440 * __this, Uri_t214 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
