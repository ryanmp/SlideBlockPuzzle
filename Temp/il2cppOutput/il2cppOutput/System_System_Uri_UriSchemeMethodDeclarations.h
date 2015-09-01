#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t574;
struct UriScheme_t574_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m2246 (UriScheme_t574 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t574_marshal(const UriScheme_t574& unmarshaled, UriScheme_t574_marshaled& marshaled);
void UriScheme_t574_marshal_back(const UriScheme_t574_marshaled& marshaled, UriScheme_t574& unmarshaled);
void UriScheme_t574_marshal_cleanup(UriScheme_t574_marshaled& marshaled);
