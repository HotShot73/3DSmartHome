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
// UnityEngine.AudioClip
struct AudioClip_t3927647597;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TVOnButton
struct  TVOnButton_t1607687627  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject TVOnButton::tvOn
	GameObject_t1366199518 * ___tvOn_2;
	// UnityEngine.GameObject TVOnButton::tvOff
	GameObject_t1366199518 * ___tvOff_3;
	// UnityEngine.AudioClip TVOnButton::audioOn
	AudioClip_t3927647597 * ___audioOn_4;
	// UnityEngine.GameObject TVOnButton::TV
	GameObject_t1366199518 * ___TV_5;

public:
	inline static int32_t get_offset_of_tvOn_2() { return static_cast<int32_t>(offsetof(TVOnButton_t1607687627, ___tvOn_2)); }
	inline GameObject_t1366199518 * get_tvOn_2() const { return ___tvOn_2; }
	inline GameObject_t1366199518 ** get_address_of_tvOn_2() { return &___tvOn_2; }
	inline void set_tvOn_2(GameObject_t1366199518 * value)
	{
		___tvOn_2 = value;
		Il2CppCodeGenWriteBarrier(&___tvOn_2, value);
	}

	inline static int32_t get_offset_of_tvOff_3() { return static_cast<int32_t>(offsetof(TVOnButton_t1607687627, ___tvOff_3)); }
	inline GameObject_t1366199518 * get_tvOff_3() const { return ___tvOff_3; }
	inline GameObject_t1366199518 ** get_address_of_tvOff_3() { return &___tvOff_3; }
	inline void set_tvOff_3(GameObject_t1366199518 * value)
	{
		___tvOff_3 = value;
		Il2CppCodeGenWriteBarrier(&___tvOff_3, value);
	}

	inline static int32_t get_offset_of_audioOn_4() { return static_cast<int32_t>(offsetof(TVOnButton_t1607687627, ___audioOn_4)); }
	inline AudioClip_t3927647597 * get_audioOn_4() const { return ___audioOn_4; }
	inline AudioClip_t3927647597 ** get_address_of_audioOn_4() { return &___audioOn_4; }
	inline void set_audioOn_4(AudioClip_t3927647597 * value)
	{
		___audioOn_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioOn_4, value);
	}

	inline static int32_t get_offset_of_TV_5() { return static_cast<int32_t>(offsetof(TVOnButton_t1607687627, ___TV_5)); }
	inline GameObject_t1366199518 * get_TV_5() const { return ___TV_5; }
	inline GameObject_t1366199518 ** get_address_of_TV_5() { return &___TV_5; }
	inline void set_TV_5(GameObject_t1366199518 * value)
	{
		___TV_5 = value;
		Il2CppCodeGenWriteBarrier(&___TV_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
