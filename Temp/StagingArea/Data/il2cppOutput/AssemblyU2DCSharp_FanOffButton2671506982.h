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

// FanOffButton
struct  FanOffButton_t2671506982  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject FanOffButton::fan
	GameObject_t1366199518 * ___fan_2;
	// UnityEngine.GameObject FanOffButton::fanOn
	GameObject_t1366199518 * ___fanOn_3;
	// UnityEngine.GameObject FanOffButton::fanOff
	GameObject_t1366199518 * ___fanOff_4;

public:
	inline static int32_t get_offset_of_fan_2() { return static_cast<int32_t>(offsetof(FanOffButton_t2671506982, ___fan_2)); }
	inline GameObject_t1366199518 * get_fan_2() const { return ___fan_2; }
	inline GameObject_t1366199518 ** get_address_of_fan_2() { return &___fan_2; }
	inline void set_fan_2(GameObject_t1366199518 * value)
	{
		___fan_2 = value;
		Il2CppCodeGenWriteBarrier(&___fan_2, value);
	}

	inline static int32_t get_offset_of_fanOn_3() { return static_cast<int32_t>(offsetof(FanOffButton_t2671506982, ___fanOn_3)); }
	inline GameObject_t1366199518 * get_fanOn_3() const { return ___fanOn_3; }
	inline GameObject_t1366199518 ** get_address_of_fanOn_3() { return &___fanOn_3; }
	inline void set_fanOn_3(GameObject_t1366199518 * value)
	{
		___fanOn_3 = value;
		Il2CppCodeGenWriteBarrier(&___fanOn_3, value);
	}

	inline static int32_t get_offset_of_fanOff_4() { return static_cast<int32_t>(offsetof(FanOffButton_t2671506982, ___fanOff_4)); }
	inline GameObject_t1366199518 * get_fanOff_4() const { return ___fanOff_4; }
	inline GameObject_t1366199518 ** get_address_of_fanOff_4() { return &___fanOff_4; }
	inline void set_fanOff_4(GameObject_t1366199518 * value)
	{
		___fanOff_4 = value;
		Il2CppCodeGenWriteBarrier(&___fanOff_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
