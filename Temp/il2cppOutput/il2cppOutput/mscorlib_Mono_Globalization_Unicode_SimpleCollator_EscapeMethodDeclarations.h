#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t835;
struct Escape_t835_marshaled;

void Escape_t835_marshal(const Escape_t835& unmarshaled, Escape_t835_marshaled& marshaled);
void Escape_t835_marshal_back(const Escape_t835_marshaled& marshaled, Escape_t835& unmarshaled);
void Escape_t835_marshal_cleanup(Escape_t835_marshaled& marshaled);
