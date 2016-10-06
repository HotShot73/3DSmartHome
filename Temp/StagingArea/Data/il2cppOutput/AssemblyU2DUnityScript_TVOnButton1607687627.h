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

// TVOnButton
struct  TVOnButton_t1607687628  : public MonoBehaviour_t774292115
{
public:
	// System.Boolean TVOnButton::task5done
	bool ___task5done_2;
	// UnityEngine.GameObject TVOnButton::FirstPerson
	GameObject_t1366199518 * ___FirstPerson_3;
	// UnityEngine.GameObject TVOnButton::TV
	GameObject_t1366199518 * ___TV_4;

public:
	inline static int32_t get_offset_of_task5done_2() { return static_cast<int32_t>(offsetof(TVOnButton_t1607687628, ___task5done_2)); }
	inline bool get_task5done_2() const { return ___task5done_2; }
	inline bool* get_address_of_task5done_2() { return &___task5done_2; }
	inline void set_task5done_2(bool value)
	{
		___task5done_2 = value;
	}

	inline static int32_t get_offset_of_FirstPerson_3() { return static_cast<int32_t>(offsetof(TVOnButton_t1607687628, ___FirstPerson_3)); }
	inline GameObject_t1366199518 * get_FirstPerson_3() const { return ___FirstPerson_3; }
	inline GameObject_t1366199518 ** get_address_of_FirstPerson_3() { return &___FirstPerson_3; }
	inline void set_FirstPerson_3(GameObject_t1366199518 * value)
	{
		___FirstPerson_3 = value;
		Il2CppCodeGenWriteBarrier(&___FirstPerson_3, value);
	}

	inline static int32_t get_offset_of_TV_4() { return static_cast<int32_t>(offsetof(TVOnButton_t1607687628, ___TV_4)); }
	inline GameObject_t1366199518 * get_TV_4() const { return ___TV_4; }
	inline GameObject_t1366199518 ** get_address_of_TV_4() { return &___TV_4; }
	inline void set_TV_4(GameObject_t1366199518 * value)
	{
		___TV_4 = value;
		Il2CppCodeGenWriteBarrier(&___TV_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
