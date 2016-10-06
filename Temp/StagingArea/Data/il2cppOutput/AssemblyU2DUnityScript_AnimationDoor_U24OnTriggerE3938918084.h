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
#include "UnityEngine_UnityEngine_RaycastHit317570005.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationDoor/$OnTriggerEnter$27/$
struct  U24_t3938918086  : public GenericGeneratorEnumerator_1_t774740154
{
public:
	// UnityEngine.RaycastHit AnimationDoor/$OnTriggerEnter$27/$::$hit$28
	RaycastHit_t317570005  ___U24hitU2428_2;
	// UnityEngine.Vector3 AnimationDoor/$OnTriggerEnter$27/$::$fwd$29
	Vector3_t465617797  ___U24fwdU2429_3;
	// UnityEngine.Collider AnimationDoor/$OnTriggerEnter$27/$::$other$30
	Collider_t2798266161 * ___U24otherU2430_4;
	// AnimationDoor AnimationDoor/$OnTriggerEnter$27/$::$self_$31
	AnimationDoor_t2906836782 * ___U24self_U2431_5;

public:
	inline static int32_t get_offset_of_U24hitU2428_2() { return static_cast<int32_t>(offsetof(U24_t3938918086, ___U24hitU2428_2)); }
	inline RaycastHit_t317570005  get_U24hitU2428_2() const { return ___U24hitU2428_2; }
	inline RaycastHit_t317570005 * get_address_of_U24hitU2428_2() { return &___U24hitU2428_2; }
	inline void set_U24hitU2428_2(RaycastHit_t317570005  value)
	{
		___U24hitU2428_2 = value;
	}

	inline static int32_t get_offset_of_U24fwdU2429_3() { return static_cast<int32_t>(offsetof(U24_t3938918086, ___U24fwdU2429_3)); }
	inline Vector3_t465617797  get_U24fwdU2429_3() const { return ___U24fwdU2429_3; }
	inline Vector3_t465617797 * get_address_of_U24fwdU2429_3() { return &___U24fwdU2429_3; }
	inline void set_U24fwdU2429_3(Vector3_t465617797  value)
	{
		___U24fwdU2429_3 = value;
	}

	inline static int32_t get_offset_of_U24otherU2430_4() { return static_cast<int32_t>(offsetof(U24_t3938918086, ___U24otherU2430_4)); }
	inline Collider_t2798266161 * get_U24otherU2430_4() const { return ___U24otherU2430_4; }
	inline Collider_t2798266161 ** get_address_of_U24otherU2430_4() { return &___U24otherU2430_4; }
	inline void set_U24otherU2430_4(Collider_t2798266161 * value)
	{
		___U24otherU2430_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24otherU2430_4, value);
	}

	inline static int32_t get_offset_of_U24self_U2431_5() { return static_cast<int32_t>(offsetof(U24_t3938918086, ___U24self_U2431_5)); }
	inline AnimationDoor_t2906836782 * get_U24self_U2431_5() const { return ___U24self_U2431_5; }
	inline AnimationDoor_t2906836782 ** get_address_of_U24self_U2431_5() { return &___U24self_U2431_5; }
	inline void set_U24self_U2431_5(AnimationDoor_t2906836782 * value)
	{
		___U24self_U2431_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U2431_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
