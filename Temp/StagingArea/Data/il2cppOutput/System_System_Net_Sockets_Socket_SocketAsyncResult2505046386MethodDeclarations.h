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

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2505046386;
// System.Net.Sockets.Socket
struct Socket_t1433122463;
// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Collections.Queue
struct Queue_t3616109649;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t3298020627;
// System.Net.Sockets.Socket/Worker
struct Worker_t3456015182;
// System.Exception
struct Exception_t1145979430;
// System.Threading.WaitHandle
struct WaitHandle_t313797096;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket1433122463.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "System_System_Net_Sockets_Socket_SocketOperation3414194946.h"
#include "mscorlib_System_Collections_Queue3616109649.h"
#include "System_System_Net_Sockets_Socket_Worker3456015182.h"
#include "mscorlib_System_Exception1145979430.h"
#include "System_System_Net_Sockets_SocketError3447067203.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C"  void SocketAsyncResult__ctor_m3610384401 (SocketAsyncResult_t2505046386 * __this, Socket_t1433122463 * ___sock0, Il2CppObject * ___state1, AsyncCallback_t889871978 * ___callback2, int32_t ___operation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C"  void SocketAsyncResult_CheckIfThrowDelayedException_m2680742 (SocketAsyncResult_t2505046386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C"  void SocketAsyncResult_CompleteAllOnDispose_m1527088695 (SocketAsyncResult_t2505046386 * __this, Queue_t3616109649 * ___queue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C"  void SocketAsyncResult_CompleteDisposed_m3930996852 (SocketAsyncResult_t2505046386 * __this, Il2CppObject * ___unused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C"  void SocketAsyncResult_Complete_m3262128441 (SocketAsyncResult_t2505046386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C"  SocketAsyncCall_t3298020627 * SocketAsyncResult_GetDelegate_m3612551969 (SocketAsyncResult_t2505046386 * __this, Worker_t3456015182 * ___worker0, int32_t ___op1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C"  void SocketAsyncResult_Complete_m3498292430 (SocketAsyncResult_t2505046386 * __this, int32_t ___total0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C"  void SocketAsyncResult_Complete_m3680801433 (SocketAsyncResult_t2505046386 * __this, Exception_t1145979430 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * SocketAsyncResult_get_AsyncState_m1332753569 (SocketAsyncResult_t2505046386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t313797096 * SocketAsyncResult_get_AsyncWaitHandle_m2157367075 (SocketAsyncResult_t2505046386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C"  bool SocketAsyncResult_get_IsCompleted_m3547199576 (SocketAsyncResult_t2505046386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C"  void SocketAsyncResult_set_IsCompleted_m954671257 (SocketAsyncResult_t2505046386 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C"  int32_t SocketAsyncResult_get_Total_m995672677 (SocketAsyncResult_t2505046386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C"  void SocketAsyncResult_set_Total_m54998826 (SocketAsyncResult_t2505046386 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C"  int32_t SocketAsyncResult_get_ErrorCode_m3838729530 (SocketAsyncResult_t2505046386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
