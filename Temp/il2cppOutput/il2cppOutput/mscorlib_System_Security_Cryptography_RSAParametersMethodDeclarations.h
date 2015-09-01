#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t609;
struct RSAParameters_t609_marshaled;

void RSAParameters_t609_marshal(const RSAParameters_t609& unmarshaled, RSAParameters_t609_marshaled& marshaled);
void RSAParameters_t609_marshal_back(const RSAParameters_t609_marshaled& marshaled, RSAParameters_t609& unmarshaled);
void RSAParameters_t609_marshal_cleanup(RSAParameters_t609_marshaled& marshaled);
