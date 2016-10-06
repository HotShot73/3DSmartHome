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
#include "UnityEngine_UnityEngine_CursorMode3350582580.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMEnueImage
struct  MainMEnueImage_t3871973674  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Texture2D MainMEnueImage::cursorTexture
	Texture2D_t3575456220 * ___cursorTexture_2;
	// UnityEngine.CursorMode MainMEnueImage::cursorMode
	int32_t ___cursorMode_3;
	// UnityEngine.Vector2 MainMEnueImage::hotSpot
	Vector2_t465617798  ___hotSpot_4;

public:
	inline static int32_t get_offset_of_cursorTexture_2() { return static_cast<int32_t>(offsetof(MainMEnueImage_t3871973674, ___cursorTexture_2)); }
	inline Texture2D_t3575456220 * get_cursorTexture_2() const { return ___cursorTexture_2; }
	inline Texture2D_t3575456220 ** get_address_of_cursorTexture_2() { return &___cursorTexture_2; }
	inline void set_cursorTexture_2(Texture2D_t3575456220 * value)
	{
		___cursorTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___cursorTexture_2, value);
	}

	inline static int32_t get_offset_of_cursorMode_3() { return static_cast<int32_t>(offsetof(MainMEnueImage_t3871973674, ___cursorMode_3)); }
	inline int32_t get_cursorMode_3() const { return ___cursorMode_3; }
	inline int32_t* get_address_of_cursorMode_3() { return &___cursorMode_3; }
	inline void set_cursorMode_3(int32_t value)
	{
		___cursorMode_3 = value;
	}

	inline static int32_t get_offset_of_hotSpot_4() { return static_cast<int32_t>(offsetof(MainMEnueImage_t3871973674, ___hotSpot_4)); }
	inline Vector2_t465617798  get_hotSpot_4() const { return ___hotSpot_4; }
	inline Vector2_t465617798 * get_address_of_hotSpot_4() { return &___hotSpot_4; }
	inline void set_hotSpot_4(Vector2_t465617798  value)
	{
		___hotSpot_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
