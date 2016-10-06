#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t1433122463;
// System.Net.EndPoint
struct EndPoint_t1731883909;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpListener
struct  TcpListener_t2162706563  : public Il2CppObject
{
public:
	// System.Boolean System.Net.Sockets.TcpListener::active
	bool ___active_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::server
	Socket_t1433122463 * ___server_1;
	// System.Net.EndPoint System.Net.Sockets.TcpListener::savedEP
	EndPoint_t1731883909 * ___savedEP_2;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(TcpListener_t2162706563, ___active_0)); }
	inline bool get_active_0() const { return ___active_0; }
	inline bool* get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(bool value)
	{
		___active_0 = value;
	}

	inline static int32_t get_offset_of_server_1() { return static_cast<int32_t>(offsetof(TcpListener_t2162706563, ___server_1)); }
	inline Socket_t1433122463 * get_server_1() const { return ___server_1; }
	inline Socket_t1433122463 ** get_address_of_server_1() { return &___server_1; }
	inline void set_server_1(Socket_t1433122463 * value)
	{
		___server_1 = value;
		Il2CppCodeGenWriteBarrier(&___server_1, value);
	}

	inline static int32_t get_offset_of_savedEP_2() { return static_cast<int32_t>(offsetof(TcpListener_t2162706563, ___savedEP_2)); }
	inline EndPoint_t1731883909 * get_savedEP_2() const { return ___savedEP_2; }
	inline EndPoint_t1731883909 ** get_address_of_savedEP_2() { return &___savedEP_2; }
	inline void set_savedEP_2(EndPoint_t1731883909 * value)
	{
		___savedEP_2 = value;
		Il2CppCodeGenWriteBarrier(&___savedEP_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
