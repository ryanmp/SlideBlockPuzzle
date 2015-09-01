#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack/Enumerator
struct Enumerator_t910;
// System.Object
struct Object_t;
// System.Collections.Stack
struct Stack_t300;

// System.Void System.Collections.Stack/Enumerator::.ctor(System.Collections.Stack)
extern "C" void Enumerator__ctor_m5060 (Enumerator_t910 * __this, Stack_t300 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m5061 (Enumerator_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m5062 (Enumerator_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
