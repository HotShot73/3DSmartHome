#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2805735124;
// DragRigidbody
struct DragRigidbody_t836548095;

#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen4059695288.h"
#include "UnityEngine_UnityEngine_Ray4121084637.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragRigidbody/$DragObject$9/$
struct  U24_t3938918085  : public GenericGeneratorEnumerator_1_t4059695288
{
public:
	// System.Single DragRigidbody/$DragObject$9/$::$oldDrag$10
	float ___U24oldDragU2410_2;
	// System.Single DragRigidbody/$DragObject$9/$::$oldAngularDrag$11
	float ___U24oldAngularDragU2411_3;
	// UnityEngine.Camera DragRigidbody/$DragObject$9/$::$mainCamera$12
	Camera_t2805735124 * ___U24mainCameraU2412_4;
	// UnityEngine.Ray DragRigidbody/$DragObject$9/$::$ray$13
	Ray_t4121084637  ___U24rayU2413_5;
	// System.Single DragRigidbody/$DragObject$9/$::$distance$14
	float ___U24distanceU2414_6;
	// DragRigidbody DragRigidbody/$DragObject$9/$::$self_$15
	DragRigidbody_t836548095 * ___U24self_U2415_7;

public:
	inline static int32_t get_offset_of_U24oldDragU2410_2() { return static_cast<int32_t>(offsetof(U24_t3938918085, ___U24oldDragU2410_2)); }
	inline float get_U24oldDragU2410_2() const { return ___U24oldDragU2410_2; }
	inline float* get_address_of_U24oldDragU2410_2() { return &___U24oldDragU2410_2; }
	inline void set_U24oldDragU2410_2(float value)
	{
		___U24oldDragU2410_2 = value;
	}

	inline static int32_t get_offset_of_U24oldAngularDragU2411_3() { return static_cast<int32_t>(offsetof(U24_t3938918085, ___U24oldAngularDragU2411_3)); }
	inline float get_U24oldAngularDragU2411_3() const { return ___U24oldAngularDragU2411_3; }
	inline float* get_address_of_U24oldAngularDragU2411_3() { return &___U24oldAngularDragU2411_3; }
	inline void set_U24oldAngularDragU2411_3(float value)
	{
		___U24oldAngularDragU2411_3 = value;
	}

	inline static int32_t get_offset_of_U24mainCameraU2412_4() { return static_cast<int32_t>(offsetof(U24_t3938918085, ___U24mainCameraU2412_4)); }
	inline Camera_t2805735124 * get_U24mainCameraU2412_4() const { return ___U24mainCameraU2412_4; }
	inline Camera_t2805735124 ** get_address_of_U24mainCameraU2412_4() { return &___U24mainCameraU2412_4; }
	inline void set_U24mainCameraU2412_4(Camera_t2805735124 * value)
	{
		___U24mainCameraU2412_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24mainCameraU2412_4, value);
	}

	inline static int32_t get_offset_of_U24rayU2413_5() { return static_cast<int32_t>(offsetof(U24_t3938918085, ___U24rayU2413_5)); }
	inline Ray_t4121084637  get_U24rayU2413_5() const { return ___U24rayU2413_5; }
	inline Ray_t4121084637 * get_address_of_U24rayU2413_5() { return &___U24rayU2413_5; }
	inline void set_U24rayU2413_5(Ray_t4121084637  value)
	{
		___U24rayU2413_5 = value;
	}

	inline static int32_t get_offset_of_U24distanceU2414_6() { return static_cast<int32_t>(offsetof(U24_t3938918085, ___U24distanceU2414_6)); }
	inline float get_U24distanceU2414_6() const { return ___U24distanceU2414_6; }
	inline float* get_address_of_U24distanceU2414_6() { return &___U24distanceU2414_6; }
	inline void set_U24distanceU2414_6(float value)
	{
		___U24distanceU2414_6 = value;
	}

	inline static int32_t get_offset_of_U24self_U2415_7() { return static_cast<int32_t>(offsetof(U24_t3938918085, ___U24self_U2415_7)); }
	inline DragRigidbody_t836548095 * get_U24self_U2415_7() const { return ___U24self_U2415_7; }
	inline DragRigidbody_t836548095 ** get_address_of_U24self_U2415_7() { return &___U24self_U2415_7; }
	inline void set_U24self_U2415_7(DragRigidbody_t836548095 * value)
	{
		___U24self_U2415_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U2415_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
