﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t547;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t78;
// System.AsyncCallback
struct AsyncCallback_t79;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void CostDelegate__ctor_m2073 (CostDelegate_t547 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
extern "C" double CostDelegate_Invoke_m2074 (CostDelegate_t547 * __this, Interval_t544  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern "C" double pinvoke_delegate_wrapper_CostDelegate_t547(Il2CppObject* delegate, Interval_t544  ___i);
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
extern "C" Object_t * CostDelegate_BeginInvoke_m2075 (CostDelegate_t547 * __this, Interval_t544  ___i, AsyncCallback_t79 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
extern "C" double CostDelegate_EndInvoke_m2076 (CostDelegate_t547 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;