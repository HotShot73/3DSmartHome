#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3575456220;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MouseLook_RotationAxe732473481.h"
#include "UnityEngine_UnityEngine_Ray4121084637.h"
#include "UnityEngine_UnityEngine_RaycastHit317570005.h"
#include "UnityEngine_UnityEngine_CursorMode3350582580.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseLook
struct  MouseLook_t2643707144  : public MonoBehaviour_t774292115
{
public:
	// MouseLook/RotationAxes MouseLook::axes
	int32_t ___axes_2;
	// System.Single MouseLook::sensitivityX
	float ___sensitivityX_3;
	// System.Single MouseLook::sensitivityY
	float ___sensitivityY_4;
	// System.Single MouseLook::minimumX
	float ___minimumX_5;
	// System.Single MouseLook::maximumX
	float ___maximumX_6;
	// System.Single MouseLook::minimumY
	float ___minimumY_7;
	// System.Single MouseLook::maximumY
	float ___maximumY_8;
	// System.Single MouseLook::rotationY
	float ___rotationY_9;
	// UnityEngine.Ray MouseLook::ray
	Ray_t4121084637  ___ray_10;
	// UnityEngine.RaycastHit MouseLook::hit
	RaycastHit_t317570005  ___hit_11;
	// UnityEngine.Texture2D MouseLook::cursorTexture
	Texture2D_t3575456220 * ___cursorTexture_12;
	// UnityEngine.Texture2D MouseLook::cursorTexture2
	Texture2D_t3575456220 * ___cursorTexture2_13;
	// UnityEngine.CursorMode MouseLook::cursorMode
	int32_t ___cursorMode_14;
	// UnityEngine.Vector2 MouseLook::hotSpot
	Vector2_t465617798  ___hotSpot_15;

public:
	inline static int32_t get_offset_of_axes_2() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___axes_2)); }
	inline int32_t get_axes_2() const { return ___axes_2; }
	inline int32_t* get_address_of_axes_2() { return &___axes_2; }
	inline void set_axes_2(int32_t value)
	{
		___axes_2 = value;
	}

	inline static int32_t get_offset_of_sensitivityX_3() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___sensitivityX_3)); }
	inline float get_sensitivityX_3() const { return ___sensitivityX_3; }
	inline float* get_address_of_sensitivityX_3() { return &___sensitivityX_3; }
	inline void set_sensitivityX_3(float value)
	{
		___sensitivityX_3 = value;
	}

	inline static int32_t get_offset_of_sensitivityY_4() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___sensitivityY_4)); }
	inline float get_sensitivityY_4() const { return ___sensitivityY_4; }
	inline float* get_address_of_sensitivityY_4() { return &___sensitivityY_4; }
	inline void set_sensitivityY_4(float value)
	{
		___sensitivityY_4 = value;
	}

	inline static int32_t get_offset_of_minimumX_5() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___minimumX_5)); }
	inline float get_minimumX_5() const { return ___minimumX_5; }
	inline float* get_address_of_minimumX_5() { return &___minimumX_5; }
	inline void set_minimumX_5(float value)
	{
		___minimumX_5 = value;
	}

	inline static int32_t get_offset_of_maximumX_6() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___maximumX_6)); }
	inline float get_maximumX_6() const { return ___maximumX_6; }
	inline float* get_address_of_maximumX_6() { return &___maximumX_6; }
	inline void set_maximumX_6(float value)
	{
		___maximumX_6 = value;
	}

	inline static int32_t get_offset_of_minimumY_7() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___minimumY_7)); }
	inline float get_minimumY_7() const { return ___minimumY_7; }
	inline float* get_address_of_minimumY_7() { return &___minimumY_7; }
	inline void set_minimumY_7(float value)
	{
		___minimumY_7 = value;
	}

	inline static int32_t get_offset_of_maximumY_8() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___maximumY_8)); }
	inline float get_maximumY_8() const { return ___maximumY_8; }
	inline float* get_address_of_maximumY_8() { return &___maximumY_8; }
	inline void set_maximumY_8(float value)
	{
		___maximumY_8 = value;
	}

	inline static int32_t get_offset_of_rotationY_9() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___rotationY_9)); }
	inline float get_rotationY_9() const { return ___rotationY_9; }
	inline float* get_address_of_rotationY_9() { return &___rotationY_9; }
	inline void set_rotationY_9(float value)
	{
		___rotationY_9 = value;
	}

	inline static int32_t get_offset_of_ray_10() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___ray_10)); }
	inline Ray_t4121084637  get_ray_10() const { return ___ray_10; }
	inline Ray_t4121084637 * get_address_of_ray_10() { return &___ray_10; }
	inline void set_ray_10(Ray_t4121084637  value)
	{
		___ray_10 = value;
	}

	inline static int32_t get_offset_of_hit_11() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___hit_11)); }
	inline RaycastHit_t317570005  get_hit_11() const { return ___hit_11; }
	inline RaycastHit_t317570005 * get_address_of_hit_11() { return &___hit_11; }
	inline void set_hit_11(RaycastHit_t317570005  value)
	{
		___hit_11 = value;
	}

	inline static int32_t get_offset_of_cursorTexture_12() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___cursorTexture_12)); }
	inline Texture2D_t3575456220 * get_cursorTexture_12() const { return ___cursorTexture_12; }
	inline Texture2D_t3575456220 ** get_address_of_cursorTexture_12() { return &___cursorTexture_12; }
	inline void set_cursorTexture_12(Texture2D_t3575456220 * value)
	{
		___cursorTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___cursorTexture_12, value);
	}

	inline static int32_t get_offset_of_cursorTexture2_13() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___cursorTexture2_13)); }
	inline Texture2D_t3575456220 * get_cursorTexture2_13() const { return ___cursorTexture2_13; }
	inline Texture2D_t3575456220 ** get_address_of_cursorTexture2_13() { return &___cursorTexture2_13; }
	inline void set_cursorTexture2_13(Texture2D_t3575456220 * value)
	{
		___cursorTexture2_13 = value;
		Il2CppCodeGenWriteBarrier(&___cursorTexture2_13, value);
	}

	inline static int32_t get_offset_of_cursorMode_14() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___cursorMode_14)); }
	inline int32_t get_cursorMode_14() const { return ___cursorMode_14; }
	inline int32_t* get_address_of_cursorMode_14() { return &___cursorMode_14; }
	inline void set_cursorMode_14(int32_t value)
	{
		___cursorMode_14 = value;
	}

	inline static int32_t get_offset_of_hotSpot_15() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___hotSpot_15)); }
	inline Vector2_t465617798  get_hotSpot_15() const { return ___hotSpot_15; }
	inline Vector2_t465617798 * get_address_of_hotSpot_15() { return &___hotSpot_15; }
	inline void set_hotSpot_15(Vector2_t465617798  value)
	{
		___hotSpot_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
