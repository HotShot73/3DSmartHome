#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NoButton
struct  NoButton_t3770108981  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject NoButton::messageContainer
	GameObject_t1366199518 * ___messageContainer_2;

public:
	inline static int32_t get_offset_of_messageContainer_2() { return static_cast<int32_t>(offsetof(NoButton_t3770108981, ___messageContainer_2)); }
	inline GameObject_t1366199518 * get_messageContainer_2() const { return ___messageContainer_2; }
	inline GameObject_t1366199518 ** get_address_of_messageContainer_2() { return &___messageContainer_2; }
	inline void set_messageContainer_2(GameObject_t1366199518 * value)
	{
		___messageContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&___messageContainer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
