#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t134;
struct CacheIndex_t134_marshaled;

void CacheIndex_t134_marshal(const CacheIndex_t134& unmarshaled, CacheIndex_t134_marshaled& marshaled);
void CacheIndex_t134_marshal_back(const CacheIndex_t134_marshaled& marshaled, CacheIndex_t134& unmarshaled);
void CacheIndex_t134_marshal_cleanup(CacheIndex_t134_marshaled& marshaled);
