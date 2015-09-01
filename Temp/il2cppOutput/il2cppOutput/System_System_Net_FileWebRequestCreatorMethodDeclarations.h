#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t439;
// System.Net.WebRequest
struct WebRequest_t438;
// System.Uri
struct Uri_t214;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1524 (FileWebRequestCreator_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t438 * FileWebRequestCreator_Create_m1525 (FileWebRequestCreator_t439 * __this, Uri_t214 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
