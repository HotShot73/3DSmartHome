#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3921196294;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenue2
struct  MainMenue2_t1429814777  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.UI.Text MainMenue2::startText
	Text_t3921196294 * ___startText_2;
	// UnityEngine.GameObject MainMenue2::explore
	GameObject_t1366199518 * ___explore_3;

public:
	inline static int32_t get_offset_of_startText_2() { return static_cast<int32_t>(offsetof(MainMenue2_t1429814777, ___startText_2)); }
	inline Text_t3921196294 * get_startText_2() const { return ___startText_2; }
	inline Text_t3921196294 ** get_address_of_startText_2() { return &___startText_2; }
	inline void set_startText_2(Text_t3921196294 * value)
	{
		___startText_2 = value;
		Il2CppCodeGenWriteBarrier(&___startText_2, value);
	}

	inline static int32_t get_offset_of_explore_3() { return static_cast<int32_t>(offsetof(MainMenue2_t1429814777, ___explore_3)); }
	inline GameObject_t1366199518 * get_explore_3() const { return ___explore_3; }
	inline GameObject_t1366199518 ** get_address_of_explore_3() { return &___explore_3; }
	inline void set_explore_3(GameObject_t1366199518 * value)
	{
		___explore_3 = value;
		Il2CppCodeGenWriteBarrier(&___explore_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
