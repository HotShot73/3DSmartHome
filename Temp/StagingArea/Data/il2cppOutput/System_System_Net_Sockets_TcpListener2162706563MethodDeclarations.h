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

// System.Net.Sockets.TcpListener
struct TcpListener_t2162706563;
// System.Net.EndPoint
struct EndPoint_t1731883909;
// System.Net.Sockets.TcpClient
struct TcpClient_t3573885868;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1717401776.h"
#include "System_System_Net_EndPoint1731883909.h"

// System.Void System.Net.Sockets.TcpListener::.ctor(System.Int32)
extern "C"  void TcpListener__ctor_m2530284148 (TcpListener_t2162706563 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Init(System.Net.Sockets.AddressFamily,System.Net.EndPoint)
extern "C"  void TcpListener_Init_m1169079544 (TcpListener_t2162706563 * __this, int32_t ___family0, EndPoint_t1731883909 * ___ep1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
extern "C"  TcpClient_t3573885868 * TcpListener_AcceptTcpClient_m3428842100 (TcpListener_t2162706563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Finalize()
extern "C"  void TcpListener_Finalize_m998971995 (TcpListener_t2162706563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpListener::Pending()
extern "C"  bool TcpListener_Pending_m2411742554 (TcpListener_t2162706563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start()
extern "C"  void TcpListener_Start_m2176032785 (TcpListener_t2162706563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start(System.Int32)
extern "C"  void TcpListener_Start_m4269559932 (TcpListener_t2162706563 * __this, int32_t ___backlog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Stop()
extern "C"  void TcpListener_Stop_m3738266225 (TcpListener_t2162706563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
