#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpringJoint
struct SpringJoint_t2135276538;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragRigidbody
struct  DragRigidbody_t836548095  : public MonoBehaviour_t774292115
{
public:
	// System.Single DragRigidbody::spring
	float ___spring_2;
	// System.Single DragRigidbody::damper
	float ___damper_3;
	// System.Single DragRigidbody::drag
	float ___drag_4;
	// System.Single DragRigidbody::angularDrag
	float ___angularDrag_5;
	// System.Single DragRigidbody::distance
	float ___distance_6;
	// System.Boolean DragRigidbody::attachToCenterOfMass
	bool ___attachToCenterOfMass_7;
	// UnityEngine.SpringJoint DragRigidbody::springJoint
	SpringJoint_t2135276538 * ___springJoint_8;

public:
	inline static int32_t get_offset_of_spring_2() { return static_cast<int32_t>(offsetof(DragRigidbody_t836548095, ___spring_2)); }
	inline float get_spring_2() const { return ___spring_2; }
	inline float* get_address_of_spring_2() { return &___spring_2; }
	inline void set_spring_2(float value)
	{
		___spring_2 = value;
	}

	inline static int32_t get_offset_of_damper_3() { return static_cast<int32_t>(offsetof(DragRigidbody_t836548095, ___damper_3)); }
	inline float get_damper_3() const { return ___damper_3; }
	inline float* get_address_of_damper_3() { return &___damper_3; }
	inline void set_damper_3(float value)
	{
		___damper_3 = value;
	}

	inline static int32_t get_offset_of_drag_4() { return static_cast<int32_t>(offsetof(DragRigidbody_t836548095, ___drag_4)); }
	inline float get_drag_4() const { return ___drag_4; }
	inline float* get_address_of_drag_4() { return &___drag_4; }
	inline void set_drag_4(float value)
	{
		___drag_4 = value;
	}

	inline static int32_t get_offset_of_angularDrag_5() { return static_cast<int32_t>(offsetof(DragRigidbody_t836548095, ___angularDrag_5)); }
	inline float get_angularDrag_5() const { return ___angularDrag_5; }
	inline float* get_address_of_angularDrag_5() { return &___angularDrag_5; }
	inline void set_angularDrag_5(float value)
	{
		___angularDrag_5 = value;
	}

	inline static int32_t get_offset_of_distance_6() { return static_cast<int32_t>(offsetof(DragRigidbody_t836548095, ___distance_6)); }
	inline float get_distance_6() const { return ___distance_6; }
	inline float* get_address_of_distance_6() { return &___distance_6; }
	inline void set_distance_6(float value)
	{
		___distance_6 = value;
	}

	inline static int32_t get_offset_of_attachToCenterOfMass_7() { return static_cast<int32_t>(offsetof(DragRigidbody_t836548095, ___attachToCenterOfMass_7)); }
	inline bool get_attachToCenterOfMass_7() const { return ___attachToCenterOfMass_7; }
	inline bool* get_address_of_attachToCenterOfMass_7() { return &___attachToCenterOfMass_7; }
	inline void set_attachToCenterOfMass_7(bool value)
	{
		___attachToCenterOfMass_7 = value;
	}

	inline static int32_t get_offset_of_springJoint_8() { return static_cast<int32_t>(offsetof(DragRigidbody_t836548095, ___springJoint_8)); }
	inline SpringJoint_t2135276538 * get_springJoint_8() const { return ___springJoint_8; }
	inline SpringJoint_t2135276538 ** get_address_of_springJoint_8() { return &___springJoint_8; }
	inline void set_springJoint_8(SpringJoint_t2135276538 * value)
	{
		___springJoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___springJoint_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
