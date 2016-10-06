#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t3248816485;
// System.Net.Sockets.TcpListener
struct TcpListener_t2162706563;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Server
struct  Server_t2724320767  : public MonoBehaviour_t774292115
{
public:
	// System.Boolean Server::mRunning
	bool ___mRunning_2;
	// System.Boolean Server::doorShouldOpen
	bool ___doorShouldOpen_3;
	// System.Boolean Server::doorShouldClose
	bool ___doorShouldClose_4;
	// System.String Server::msg
	String_t* ___msg_5;
	// System.Threading.Thread Server::mThread
	Thread_t3248816485 * ___mThread_6;
	// System.Net.Sockets.TcpListener Server::tcp_Listener
	TcpListener_t2162706563 * ___tcp_Listener_7;

public:
	inline static int32_t get_offset_of_mRunning_2() { return static_cast<int32_t>(offsetof(Server_t2724320767, ___mRunning_2)); }
	inline bool get_mRunning_2() const { return ___mRunning_2; }
	inline bool* get_address_of_mRunning_2() { return &___mRunning_2; }
	inline void set_mRunning_2(bool value)
	{
		___mRunning_2 = value;
	}

	inline static int32_t get_offset_of_doorShouldOpen_3() { return static_cast<int32_t>(offsetof(Server_t2724320767, ___doorShouldOpen_3)); }
	inline bool get_doorShouldOpen_3() const { return ___doorShouldOpen_3; }
	inline bool* get_address_of_doorShouldOpen_3() { return &___doorShouldOpen_3; }
	inline void set_doorShouldOpen_3(bool value)
	{
		___doorShouldOpen_3 = value;
	}

	inline static int32_t get_offset_of_doorShouldClose_4() { return static_cast<int32_t>(offsetof(Server_t2724320767, ___doorShouldClose_4)); }
	inline bool get_doorShouldClose_4() const { return ___doorShouldClose_4; }
	inline bool* get_address_of_doorShouldClose_4() { return &___doorShouldClose_4; }
	inline void set_doorShouldClose_4(bool value)
	{
		___doorShouldClose_4 = value;
	}

	inline static int32_t get_offset_of_msg_5() { return static_cast<int32_t>(offsetof(Server_t2724320767, ___msg_5)); }
	inline String_t* get_msg_5() const { return ___msg_5; }
	inline String_t** get_address_of_msg_5() { return &___msg_5; }
	inline void set_msg_5(String_t* value)
	{
		___msg_5 = value;
		Il2CppCodeGenWriteBarrier(&___msg_5, value);
	}

	inline static int32_t get_offset_of_mThread_6() { return static_cast<int32_t>(offsetof(Server_t2724320767, ___mThread_6)); }
	inline Thread_t3248816485 * get_mThread_6() const { return ___mThread_6; }
	inline Thread_t3248816485 ** get_address_of_mThread_6() { return &___mThread_6; }
	inline void set_mThread_6(Thread_t3248816485 * value)
	{
		___mThread_6 = value;
		Il2CppCodeGenWriteBarrier(&___mThread_6, value);
	}

	inline static int32_t get_offset_of_tcp_Listener_7() { return static_cast<int32_t>(offsetof(Server_t2724320767, ___tcp_Listener_7)); }
	inline TcpListener_t2162706563 * get_tcp_Listener_7() const { return ___tcp_Listener_7; }
	inline TcpListener_t2162706563 ** get_address_of_tcp_Listener_7() { return &___tcp_Listener_7; }
	inline void set_tcp_Listener_7(TcpListener_t2162706563 * value)
	{
		___tcp_Listener_7 = value;
		Il2CppCodeGenWriteBarrier(&___tcp_Listener_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
