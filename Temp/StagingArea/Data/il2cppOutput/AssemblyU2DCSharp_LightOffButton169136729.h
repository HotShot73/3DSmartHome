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

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightOffButton
struct  LightOffButton_t169136729  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject LightOffButton::light1a
	GameObject_t1366199518 * ___light1a_2;
	// UnityEngine.GameObject LightOffButton::light2a
	GameObject_t1366199518 * ___light2a_3;
	// UnityEngine.GameObject LightOffButton::light2b
	GameObject_t1366199518 * ___light2b_4;
	// UnityEngine.GameObject LightOffButton::light1b
	GameObject_t1366199518 * ___light1b_5;

public:
	inline static int32_t get_offset_of_light1a_2() { return static_cast<int32_t>(offsetof(LightOffButton_t169136729, ___light1a_2)); }
	inline GameObject_t1366199518 * get_light1a_2() const { return ___light1a_2; }
	inline GameObject_t1366199518 ** get_address_of_light1a_2() { return &___light1a_2; }
	inline void set_light1a_2(GameObject_t1366199518 * value)
	{
		___light1a_2 = value;
		Il2CppCodeGenWriteBarrier(&___light1a_2, value);
	}

	inline static int32_t get_offset_of_light2a_3() { return static_cast<int32_t>(offsetof(LightOffButton_t169136729, ___light2a_3)); }
	inline GameObject_t1366199518 * get_light2a_3() const { return ___light2a_3; }
	inline GameObject_t1366199518 ** get_address_of_light2a_3() { return &___light2a_3; }
	inline void set_light2a_3(GameObject_t1366199518 * value)
	{
		___light2a_3 = value;
		Il2CppCodeGenWriteBarrier(&___light2a_3, value);
	}

	inline static int32_t get_offset_of_light2b_4() { return static_cast<int32_t>(offsetof(LightOffButton_t169136729, ___light2b_4)); }
	inline GameObject_t1366199518 * get_light2b_4() const { return ___light2b_4; }
	inline GameObject_t1366199518 ** get_address_of_light2b_4() { return &___light2b_4; }
	inline void set_light2b_4(GameObject_t1366199518 * value)
	{
		___light2b_4 = value;
		Il2CppCodeGenWriteBarrier(&___light2b_4, value);
	}

	inline static int32_t get_offset_of_light1b_5() { return static_cast<int32_t>(offsetof(LightOffButton_t169136729, ___light1b_5)); }
	inline GameObject_t1366199518 * get_light1b_5() const { return ___light1b_5; }
	inline GameObject_t1366199518 ** get_address_of_light1b_5() { return &___light1b_5; }
	inline void set_light1b_5(GameObject_t1366199518 * value)
	{
		___light1b_5 = value;
		Il2CppCodeGenWriteBarrier(&___light1b_5, value);
	}
};

struct LightOffButton_t169136729_StaticFields
{
public:
	// System.Single LightOffButton::timeLightIsOn
	float ___timeLightIsOn_6;
	// System.Boolean LightOffButton::lightIsOn
	bool ___lightIsOn_7;

public:
	inline static int32_t get_offset_of_timeLightIsOn_6() { return static_cast<int32_t>(offsetof(LightOffButton_t169136729_StaticFields, ___timeLightIsOn_6)); }
	inline float get_timeLightIsOn_6() const { return ___timeLightIsOn_6; }
	inline float* get_address_of_timeLightIsOn_6() { return &___timeLightIsOn_6; }
	inline void set_timeLightIsOn_6(float value)
	{
		___timeLightIsOn_6 = value;
	}

	inline static int32_t get_offset_of_lightIsOn_7() { return static_cast<int32_t>(offsetof(LightOffButton_t169136729_StaticFields, ___lightIsOn_7)); }
	inline bool get_lightIsOn_7() const { return ___lightIsOn_7; }
	inline bool* get_address_of_lightIsOn_7() { return &___lightIsOn_7; }
	inline void set_lightIsOn_7(bool value)
	{
		___lightIsOn_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
