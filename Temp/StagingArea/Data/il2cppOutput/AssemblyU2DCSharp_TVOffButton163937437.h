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

// TVOffButton
struct  TVOffButton_t163937437  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject TVOffButton::tvOn
	GameObject_t1366199518 * ___tvOn_2;
	// UnityEngine.GameObject TVOffButton::tvOff
	GameObject_t1366199518 * ___tvOff_3;
	// UnityEngine.GameObject TVOffButton::TV
	GameObject_t1366199518 * ___TV_4;

public:
	inline static int32_t get_offset_of_tvOn_2() { return static_cast<int32_t>(offsetof(TVOffButton_t163937437, ___tvOn_2)); }
	inline GameObject_t1366199518 * get_tvOn_2() const { return ___tvOn_2; }
	inline GameObject_t1366199518 ** get_address_of_tvOn_2() { return &___tvOn_2; }
	inline void set_tvOn_2(GameObject_t1366199518 * value)
	{
		___tvOn_2 = value;
		Il2CppCodeGenWriteBarrier(&___tvOn_2, value);
	}

	inline static int32_t get_offset_of_tvOff_3() { return static_cast<int32_t>(offsetof(TVOffButton_t163937437, ___tvOff_3)); }
	inline GameObject_t1366199518 * get_tvOff_3() const { return ___tvOff_3; }
	inline GameObject_t1366199518 ** get_address_of_tvOff_3() { return &___tvOff_3; }
	inline void set_tvOff_3(GameObject_t1366199518 * value)
	{
		___tvOff_3 = value;
		Il2CppCodeGenWriteBarrier(&___tvOff_3, value);
	}

	inline static int32_t get_offset_of_TV_4() { return static_cast<int32_t>(offsetof(TVOffButton_t163937437, ___TV_4)); }
	inline GameObject_t1366199518 * get_TV_4() const { return ___TV_4; }
	inline GameObject_t1366199518 ** get_address_of_TV_4() { return &___TV_4; }
	inline void set_TV_4(GameObject_t1366199518 * value)
	{
		___TV_4 = value;
		Il2CppCodeGenWriteBarrier(&___TV_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
