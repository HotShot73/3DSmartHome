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

#include "Boo_Lang_Boo_Lang_GenericGenerator_1_gen3988798130.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationDoor/$OnTriggerExit$34
struct  U24OnTriggerExitU2434_t4081397982  : public GenericGenerator_1_t3988798130
{
public:
	// UnityEngine.Collider AnimationDoor/$OnTriggerExit$34::$other$37
	Collider_t2798266161 * ___U24otherU2437_0;
	// AnimationDoor AnimationDoor/$OnTriggerExit$34::$self_$38
	AnimationDoor_t2906836782 * ___U24self_U2438_1;

public:
	inline static int32_t get_offset_of_U24otherU2437_0() { return static_cast<int32_t>(offsetof(U24OnTriggerExitU2434_t4081397982, ___U24otherU2437_0)); }
	inline Collider_t2798266161 * get_U24otherU2437_0() const { return ___U24otherU2437_0; }
	inline Collider_t2798266161 ** get_address_of_U24otherU2437_0() { return &___U24otherU2437_0; }
	inline void set_U24otherU2437_0(Collider_t2798266161 * value)
	{
		___U24otherU2437_0 = value;
		Il2CppCodeGenWriteBarrier(&___U24otherU2437_0, value);
	}

	inline static int32_t get_offset_of_U24self_U2438_1() { return static_cast<int32_t>(offsetof(U24OnTriggerExitU2434_t4081397982, ___U24self_U2438_1)); }
	inline AnimationDoor_t2906836782 * get_U24self_U2438_1() const { return ___U24self_U2438_1; }
	inline AnimationDoor_t2906836782 ** get_address_of_U24self_U2438_1() { return &___U24self_U2438_1; }
	inline void set_U24self_U2438_1(AnimationDoor_t2906836782 * value)
	{
		___U24self_U2438_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U2438_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
