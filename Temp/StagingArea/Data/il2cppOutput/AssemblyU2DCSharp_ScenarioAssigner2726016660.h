#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t3747200355;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScenarioAssigner
struct  ScenarioAssigner_t2726016660  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.UI.InputField ScenarioAssigner::input
	InputField_t3747200355 * ___input_2;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(ScenarioAssigner_t2726016660, ___input_2)); }
	inline InputField_t3747200355 * get_input_2() const { return ___input_2; }
	inline InputField_t3747200355 ** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(InputField_t3747200355 * value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier(&___input_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
