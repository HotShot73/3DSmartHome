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
// UnityEngine.UI.Text
struct Text_t3921196294;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Start
struct  Start_t2130679484  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject Start::background
	GameObject_t1366199518 * ___background_2;
	// UnityEngine.UI.Text Start::loadText
	Text_t3921196294 * ___loadText_3;
	// UnityEngine.GameObject Start::progressBar
	GameObject_t1366199518 * ___progressBar_4;
	// System.Int32 Start::loadProgress
	int32_t ___loadProgress_5;

public:
	inline static int32_t get_offset_of_background_2() { return static_cast<int32_t>(offsetof(Start_t2130679484, ___background_2)); }
	inline GameObject_t1366199518 * get_background_2() const { return ___background_2; }
	inline GameObject_t1366199518 ** get_address_of_background_2() { return &___background_2; }
	inline void set_background_2(GameObject_t1366199518 * value)
	{
		___background_2 = value;
		Il2CppCodeGenWriteBarrier(&___background_2, value);
	}

	inline static int32_t get_offset_of_loadText_3() { return static_cast<int32_t>(offsetof(Start_t2130679484, ___loadText_3)); }
	inline Text_t3921196294 * get_loadText_3() const { return ___loadText_3; }
	inline Text_t3921196294 ** get_address_of_loadText_3() { return &___loadText_3; }
	inline void set_loadText_3(Text_t3921196294 * value)
	{
		___loadText_3 = value;
		Il2CppCodeGenWriteBarrier(&___loadText_3, value);
	}

	inline static int32_t get_offset_of_progressBar_4() { return static_cast<int32_t>(offsetof(Start_t2130679484, ___progressBar_4)); }
	inline GameObject_t1366199518 * get_progressBar_4() const { return ___progressBar_4; }
	inline GameObject_t1366199518 ** get_address_of_progressBar_4() { return &___progressBar_4; }
	inline void set_progressBar_4(GameObject_t1366199518 * value)
	{
		___progressBar_4 = value;
		Il2CppCodeGenWriteBarrier(&___progressBar_4, value);
	}

	inline static int32_t get_offset_of_loadProgress_5() { return static_cast<int32_t>(offsetof(Start_t2130679484, ___loadProgress_5)); }
	inline int32_t get_loadProgress_5() const { return ___loadProgress_5; }
	inline int32_t* get_address_of_loadProgress_5() { return &___loadProgress_5; }
	inline void set_loadProgress_5(int32_t value)
	{
		___loadProgress_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
