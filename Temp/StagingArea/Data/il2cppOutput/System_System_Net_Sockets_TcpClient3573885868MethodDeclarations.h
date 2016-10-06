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

// System.Net.Sockets.TcpClient
struct TcpClient_t3573885868;
// System.Net.Sockets.Socket
struct Socket_t1433122463;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t3743878534;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1717401776.h"
#include "System_System_Net_Sockets_Socket1433122463.h"

// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C"  void TcpClient__ctor_m1345314116 (TcpClient_t3573885868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C"  void TcpClient_System_IDisposable_Dispose_m129910969 (TcpClient_t3573885868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient_Init_m2339200298 (TcpClient_t3573885868 * __this, int32_t ___family0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
extern "C"  void TcpClient_set_Client_m4148144365 (TcpClient_t3573885868 * __this, Socket_t1433122463 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::SetTcpClient(System.Net.Sockets.Socket)
extern "C"  void TcpClient_SetTcpClient_m3061804461 (TcpClient_t3573885868 * __this, Socket_t1433122463 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C"  void TcpClient_Close_m4260227760 (TcpClient_t3573885868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C"  void TcpClient_Dispose_m2105752024 (TcpClient_t3573885868 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C"  void TcpClient_Finalize_m3794615336 (TcpClient_t3573885868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C"  NetworkStream_t3743878534 * TcpClient_GetStream_m872175179 (TcpClient_t3573885868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C"  void TcpClient_CheckDisposed_m3605359959 (TcpClient_t3573885868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
