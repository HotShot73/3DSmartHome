#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t585923902;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FanOnButtonClicked
struct  FanOnButtonClicked_t580456771  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.AudioSource FanOnButtonClicked::FanOnSwitch
	AudioSource_t585923902 * ___FanOnSwitch_2;
	// UnityEngine.AudioSource FanOnButtonClicked::Fansound
	AudioSource_t585923902 * ___Fansound_3;

public:
	inline static int32_t get_offset_of_FanOnSwitch_2() { return static_cast<int32_t>(offsetof(FanOnButtonClicked_t580456771, ___FanOnSwitch_2)); }
	inline AudioSource_t585923902 * get_FanOnSwitch_2() const { return ___FanOnSwitch_2; }
	inline AudioSource_t585923902 ** get_address_of_FanOnSwitch_2() { return &___FanOnSwitch_2; }
	inline void set_FanOnSwitch_2(AudioSource_t585923902 * value)
	{
		___FanOnSwitch_2 = value;
		Il2CppCodeGenWriteBarrier(&___FanOnSwitch_2, value);
	}

	inline static int32_t get_offset_of_Fansound_3() { return static_cast<int32_t>(offsetof(FanOnButtonClicked_t580456771, ___Fansound_3)); }
	inline AudioSource_t585923902 * get_Fansound_3() const { return ___Fansound_3; }
	inline AudioSource_t585923902 ** get_address_of_Fansound_3() { return &___Fansound_3; }
	inline void set_Fansound_3(AudioSource_t585923902 * value)
	{
		___Fansound_3 = value;
		Il2CppCodeGenWriteBarrier(&___Fansound_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
