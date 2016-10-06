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

// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t3768552235;
// System.Object
struct Il2CppObject;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3099937104;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_ParticleSystem3099937104.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UnityEngine.ParticleSystem/IteratorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void IteratorDelegate__ctor_m3692393942 (IteratorDelegate_t3768552235 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::Invoke(UnityEngine.ParticleSystem)
extern "C"  bool IteratorDelegate_Invoke_m3389138368 (IteratorDelegate_t3768552235 * __this, ParticleSystem_t3099937104 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_IteratorDelegate_t3768552235(Il2CppObject* delegate, ParticleSystem_t3099937104 * ___ps0);
// System.IAsyncResult UnityEngine.ParticleSystem/IteratorDelegate::BeginInvoke(UnityEngine.ParticleSystem,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * IteratorDelegate_BeginInvoke_m1741046139 (IteratorDelegate_t3768552235 * __this, ParticleSystem_t3099937104 * ___ps0, AsyncCallback_t889871978 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool IteratorDelegate_EndInvoke_m121475984 (IteratorDelegate_t3768552235 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
