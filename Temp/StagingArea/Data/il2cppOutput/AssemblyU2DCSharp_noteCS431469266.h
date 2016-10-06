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

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// noteCS
struct  noteCS_t431469266  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.UI.Text noteCS::noteText
	Text_t3921196294 * ___noteText_2;
	// UnityEngine.UI.Text noteCS::noteOutlineText
	Text_t3921196294 * ___noteOutlineText_3;
	// System.Boolean noteCS::noteShown
	bool ___noteShown_4;

public:
	inline static int32_t get_offset_of_noteText_2() { return static_cast<int32_t>(offsetof(noteCS_t431469266, ___noteText_2)); }
	inline Text_t3921196294 * get_noteText_2() const { return ___noteText_2; }
	inline Text_t3921196294 ** get_address_of_noteText_2() { return &___noteText_2; }
	inline void set_noteText_2(Text_t3921196294 * value)
	{
		___noteText_2 = value;
		Il2CppCodeGenWriteBarrier(&___noteText_2, value);
	}

	inline static int32_t get_offset_of_noteOutlineText_3() { return static_cast<int32_t>(offsetof(noteCS_t431469266, ___noteOutlineText_3)); }
	inline Text_t3921196294 * get_noteOutlineText_3() const { return ___noteOutlineText_3; }
	inline Text_t3921196294 ** get_address_of_noteOutlineText_3() { return &___noteOutlineText_3; }
	inline void set_noteOutlineText_3(Text_t3921196294 * value)
	{
		___noteOutlineText_3 = value;
		Il2CppCodeGenWriteBarrier(&___noteOutlineText_3, value);
	}

	inline static int32_t get_offset_of_noteShown_4() { return static_cast<int32_t>(offsetof(noteCS_t431469266, ___noteShown_4)); }
	inline bool get_noteShown_4() const { return ___noteShown_4; }
	inline bool* get_address_of_noteShown_4() { return &___noteShown_4; }
	inline void set_noteShown_4(bool value)
	{
		___noteShown_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
