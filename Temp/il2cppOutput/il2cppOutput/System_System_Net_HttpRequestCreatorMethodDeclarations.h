#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t444;
// System.Net.WebRequest
struct WebRequest_t438;
// System.Uri
struct Uri_t214;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1532 (HttpRequestCreator_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t438 * HttpRequestCreator_Create_m1533 (HttpRequestCreator_t444 * __this, Uri_t214 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
