#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.CharacterController
struct CharacterController_t2983510512;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UPArrowkey
struct  UPArrowkey_t1896124509  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject UPArrowkey::firstperson
	GameObject_t1366199518 * ___firstperson_2;
	// System.Single UPArrowkey::maxSpeed
	float ___maxSpeed_3;
	// System.Boolean UPArrowkey::buttonHeld
	bool ___buttonHeld_4;
	// UnityEngine.CharacterController UPArrowkey::chController
	CharacterController_t2983510512 * ___chController_5;

public:
	inline static int32_t get_offset_of_firstperson_2() { return static_cast<int32_t>(offsetof(UPArrowkey_t1896124509, ___firstperson_2)); }
	inline GameObject_t1366199518 * get_firstperson_2() const { return ___firstperson_2; }
	inline GameObject_t1366199518 ** get_address_of_firstperson_2() { return &___firstperson_2; }
	inline void set_firstperson_2(GameObject_t1366199518 * value)
	{
		___firstperson_2 = value;
		Il2CppCodeGenWriteBarrier(&___firstperson_2, value);
	}

	inline static int32_t get_offset_of_maxSpeed_3() { return static_cast<int32_t>(offsetof(UPArrowkey_t1896124509, ___maxSpeed_3)); }
	inline float get_maxSpeed_3() const { return ___maxSpeed_3; }
	inline float* get_address_of_maxSpeed_3() { return &___maxSpeed_3; }
	inline void set_maxSpeed_3(float value)
	{
		___maxSpeed_3 = value;
	}

	inline static int32_t get_offset_of_buttonHeld_4() { return static_cast<int32_t>(offsetof(UPArrowkey_t1896124509, ___buttonHeld_4)); }
	inline bool get_buttonHeld_4() const { return ___buttonHeld_4; }
	inline bool* get_address_of_buttonHeld_4() { return &___buttonHeld_4; }
	inline void set_buttonHeld_4(bool value)
	{
		___buttonHeld_4 = value;
	}

	inline static int32_t get_offset_of_chController_5() { return static_cast<int32_t>(offsetof(UPArrowkey_t1896124509, ___chController_5)); }
	inline CharacterController_t2983510512 * get_chController_5() const { return ___chController_5; }
	inline CharacterController_t2983510512 ** get_address_of_chController_5() { return &___chController_5; }
	inline void set_chController_5(CharacterController_t2983510512 * value)
	{
		___chController_5 = value;
		Il2CppCodeGenWriteBarrier(&___chController_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
