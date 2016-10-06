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
// AnimationDoor
struct AnimationDoor_t2906836782;

#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen774740154.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationDoor/$OnTriggerExit$34/$
struct  U24_t3938918087  : public GenericGeneratorEnumerator_1_t774740154
{
public:
	// UnityEngine.Collider AnimationDoor/$OnTriggerExit$34/$::$other$35
	Collider_t2798266161 * ___U24otherU2435_2;
	// AnimationDoor AnimationDoor/$OnTriggerExit$34/$::$self_$36
	AnimationDoor_t2906836782 * ___U24self_U2436_3;

public:
	inline static int32_t get_offset_of_U24otherU2435_2() { return static_cast<int32_t>(offsetof(U24_t3938918087, ___U24otherU2435_2)); }
	inline Collider_t2798266161 * get_U24otherU2435_2() const { return ___U24otherU2435_2; }
	inline Collider_t2798266161 ** get_address_of_U24otherU2435_2() { return &___U24otherU2435_2; }
	inline void set_U24otherU2435_2(Collider_t2798266161 * value)
	{
		___U24otherU2435_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24otherU2435_2, value);
	}

	inline static int32_t get_offset_of_U24self_U2436_3() { return static_cast<int32_t>(offsetof(U24_t3938918087, ___U24self_U2436_3)); }
	inline AnimationDoor_t2906836782 * get_U24self_U2436_3() const { return ___U24self_U2436_3; }
	inline AnimationDoor_t2906836782 ** get_address_of_U24self_U2436_3() { return &___U24self_U2436_3; }
	inline void set_U24self_U2436_3(AnimationDoor_t2906836782 * value)
	{
		___U24self_U2436_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U2436_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
