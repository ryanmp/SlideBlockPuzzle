#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t611;
struct DSAParameters_t611_marshaled;

void DSAParameters_t611_marshal(const DSAParameters_t611& unmarshaled, DSAParameters_t611_marshaled& marshaled);
void DSAParameters_t611_marshal_back(const DSAParameters_t611_marshaled& marshaled, DSAParameters_t611& unmarshaled);
void DSAParameters_t611_marshal_cleanup(DSAParameters_t611_marshaled& marshaled);
