#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t552;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t596;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t570;

// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern "C" void Expression__ctor_m2139 (Expression_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" int32_t Expression_GetFixedWidth_m2140 (Expression_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t570 * Expression_GetAnchorInfo_m2141 (Expression_t552 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
