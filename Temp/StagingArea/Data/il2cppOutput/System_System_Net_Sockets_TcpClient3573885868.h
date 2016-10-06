#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.NetworkStream
struct NetworkStream_t3743878534;
// System.Net.Sockets.Socket
struct Socket_t1433122463;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpClient
struct  TcpClient_t3573885868  : public Il2CppObject
{
public:
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::stream
	NetworkStream_t3743878534 * ___stream_0;
	// System.Boolean System.Net.Sockets.TcpClient::active
	bool ___active_1;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::client
	Socket_t1433122463 * ___client_2;
	// System.Boolean System.Net.Sockets.TcpClient::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(TcpClient_t3573885868, ___stream_0)); }
	inline NetworkStream_t3743878534 * get_stream_0() const { return ___stream_0; }
	inline NetworkStream_t3743878534 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(NetworkStream_t3743878534 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_active_1() { return static_cast<int32_t>(offsetof(TcpClient_t3573885868, ___active_1)); }
	inline bool get_active_1() const { return ___active_1; }
	inline bool* get_address_of_active_1() { return &___active_1; }
	inline void set_active_1(bool value)
	{
		___active_1 = value;
	}

	inline static int32_t get_offset_of_client_2() { return static_cast<int32_t>(offsetof(TcpClient_t3573885868, ___client_2)); }
	inline Socket_t1433122463 * get_client_2() const { return ___client_2; }
	inline Socket_t1433122463 ** get_address_of_client_2() { return &___client_2; }
	inline void set_client_2(Socket_t1433122463 * value)
	{
		___client_2 = value;
		Il2CppCodeGenWriteBarrier(&___client_2, value);
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(TcpClient_t3573885868, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
