#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3927647597;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TVAudio
struct  TVAudio_t367321488  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.AudioClip TVAudio::audioOn
	AudioClip_t3927647597 * ___audioOn_2;

public:
	inline static int32_t get_offset_of_audioOn_2() { return static_cast<int32_t>(offsetof(TVAudio_t367321488, ___audioOn_2)); }
	inline AudioClip_t3927647597 * get_audioOn_2() const { return ___audioOn_2; }
	inline AudioClip_t3927647597 ** get_address_of_audioOn_2() { return &___audioOn_2; }
	inline void set_audioOn_2(AudioClip_t3927647597 * value)
	{
		___audioOn_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioOn_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
