#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CharacterMotor
struct CharacterMotor_t262030084;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPSInputController
struct  FPSInputController_t4241249601  : public MonoBehaviour_t774292115
{
public:
	// CharacterMotor FPSInputController::motor
	CharacterMotor_t262030084 * ___motor_2;
	// System.Single FPSInputController::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single FPSInputController::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(FPSInputController_t4241249601, ___motor_2)); }
	inline CharacterMotor_t262030084 * get_motor_2() const { return ___motor_2; }
	inline CharacterMotor_t262030084 ** get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(CharacterMotor_t262030084 * value)
	{
		___motor_2 = value;
		Il2CppCodeGenWriteBarrier(&___motor_2, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(FPSInputController_t4241249601, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(FPSInputController_t4241249601, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
