#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1462256537;
// System.Object
struct Il2CppObject;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2716717214;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa2716717214.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void DispatcherFactory__ctor_m3306016183 (DispatcherFactory_t1462256537 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C"  Dispatcher_t2716717214 * DispatcherFactory_Invoke_m1899124168 (DispatcherFactory_t1462256537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Dispatcher_t2716717214 * pinvoke_delegate_wrapper_DispatcherFactory_t1462256537(Il2CppObject* delegate);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DispatcherFactory_BeginInvoke_m2682006594 (DispatcherFactory_t1462256537 * __this, AsyncCallback_t889871978 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C"  Dispatcher_t2716717214 * DispatcherFactory_EndInvoke_m3732402012 (DispatcherFactory_t1462256537 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
