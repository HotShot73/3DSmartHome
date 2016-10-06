#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t2798266161;
// room1autolight
struct room1autolight_t2113639261;

#include "Boo_Lang_Boo_Lang_GenericGenerator_1_gen3988798130.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// room1autolight/$OnTriggerEnter$112
struct  U24OnTriggerEnterU24112_t709498869  : public GenericGenerator_1_t3988798130
{
public:
	// UnityEngine.Collider room1autolight/$OnTriggerEnter$112::$other$115
	Collider_t2798266161 * ___U24otherU24115_0;
	// room1autolight room1autolight/$OnTriggerEnter$112::$self_$116
	room1autolight_t2113639261 * ___U24self_U24116_1;

public:
	inline static int32_t get_offset_of_U24otherU24115_0() { return static_cast<int32_t>(offsetof(U24OnTriggerEnterU24112_t709498869, ___U24otherU24115_0)); }
	inline Collider_t2798266161 * get_U24otherU24115_0() const { return ___U24otherU24115_0; }
	inline Collider_t2798266161 ** get_address_of_U24otherU24115_0() { return &___U24otherU24115_0; }
	inline void set_U24otherU24115_0(Collider_t2798266161 * value)
	{
		___U24otherU24115_0 = value;
		Il2CppCodeGenWriteBarrier(&___U24otherU24115_0, value);
	}

	inline static int32_t get_offset_of_U24self_U24116_1() { return static_cast<int32_t>(offsetof(U24OnTriggerEnterU24112_t709498869, ___U24self_U24116_1)); }
	inline room1autolight_t2113639261 * get_U24self_U24116_1() const { return ___U24self_U24116_1; }
	inline room1autolight_t2113639261 ** get_address_of_U24self_U24116_1() { return &___U24self_U24116_1; }
	inline void set_U24self_U24116_1(room1autolight_t2113639261 * value)
	{
		___U24self_U24116_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U24116_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
