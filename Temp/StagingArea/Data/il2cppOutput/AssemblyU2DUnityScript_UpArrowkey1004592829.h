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
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.UI.Button
struct Button_t2491204935;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpArrowkey
struct  UpArrowkey_t1004592829  : public MonoBehaviour_t774292115
{
public:
	// CharacterMotor UpArrowkey::motor
	CharacterMotor_t262030084 * ___motor_2;
	// System.Single UpArrowkey::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single UpArrowkey::speed
	float ___speed_4;
	// UnityEngine.GameObject UpArrowkey::firstperson
	GameObject_t1366199518 * ___firstperson_5;
	// UnityEngine.UI.Button UpArrowkey::uparrowbutton
	Button_t2491204935 * ___uparrowbutton_6;

public:
	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(UpArrowkey_t1004592829, ___motor_2)); }
	inline CharacterMotor_t262030084 * get_motor_2() const { return ___motor_2; }
	inline CharacterMotor_t262030084 ** get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(CharacterMotor_t262030084 * value)
	{
		___motor_2 = value;
		Il2CppCodeGenWriteBarrier(&___motor_2, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(UpArrowkey_t1004592829, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(UpArrowkey_t1004592829, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_firstperson_5() { return static_cast<int32_t>(offsetof(UpArrowkey_t1004592829, ___firstperson_5)); }
	inline GameObject_t1366199518 * get_firstperson_5() const { return ___firstperson_5; }
	inline GameObject_t1366199518 ** get_address_of_firstperson_5() { return &___firstperson_5; }
	inline void set_firstperson_5(GameObject_t1366199518 * value)
	{
		___firstperson_5 = value;
		Il2CppCodeGenWriteBarrier(&___firstperson_5, value);
	}

	inline static int32_t get_offset_of_uparrowbutton_6() { return static_cast<int32_t>(offsetof(UpArrowkey_t1004592829, ___uparrowbutton_6)); }
	inline Button_t2491204935 * get_uparrowbutton_6() const { return ___uparrowbutton_6; }
	inline Button_t2491204935 ** get_address_of_uparrowbutton_6() { return &___uparrowbutton_6; }
	inline void set_uparrowbutton_6(Button_t2491204935 * value)
	{
		___uparrowbutton_6 = value;
		Il2CppCodeGenWriteBarrier(&___uparrowbutton_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
