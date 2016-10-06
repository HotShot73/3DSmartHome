#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t3099937104;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AirConditionerOnButton
struct  AirConditionerOnButton_t2964638059  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.ParticleSystem AirConditionerOnButton::airconditioner
	ParticleSystem_t3099937104 * ___airconditioner_2;
	// UnityEngine.GameObject AirConditionerOnButton::AirConditioner
	GameObject_t1366199518 * ___AirConditioner_3;

public:
	inline static int32_t get_offset_of_airconditioner_2() { return static_cast<int32_t>(offsetof(AirConditionerOnButton_t2964638059, ___airconditioner_2)); }
	inline ParticleSystem_t3099937104 * get_airconditioner_2() const { return ___airconditioner_2; }
	inline ParticleSystem_t3099937104 ** get_address_of_airconditioner_2() { return &___airconditioner_2; }
	inline void set_airconditioner_2(ParticleSystem_t3099937104 * value)
	{
		___airconditioner_2 = value;
		Il2CppCodeGenWriteBarrier(&___airconditioner_2, value);
	}

	inline static int32_t get_offset_of_AirConditioner_3() { return static_cast<int32_t>(offsetof(AirConditionerOnButton_t2964638059, ___AirConditioner_3)); }
	inline GameObject_t1366199518 * get_AirConditioner_3() const { return ___AirConditioner_3; }
	inline GameObject_t1366199518 ** get_address_of_AirConditioner_3() { return &___AirConditioner_3; }
	inline void set_AirConditioner_3(GameObject_t1366199518 * value)
	{
		___AirConditioner_3 = value;
		Il2CppCodeGenWriteBarrier(&___AirConditioner_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
