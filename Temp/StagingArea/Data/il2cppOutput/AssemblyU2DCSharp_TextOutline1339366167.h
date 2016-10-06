#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextMesh
struct TextMesh_t3293161711;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2660348527;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextOutline
struct  TextOutline_t1339366167  : public MonoBehaviour_t774292115
{
public:
	// System.Single TextOutline::pixelSize
	float ___pixelSize_2;
	// UnityEngine.Color TextOutline::outlineColor
	Color_t2250949164  ___outlineColor_3;
	// System.Boolean TextOutline::resolutionDependant
	bool ___resolutionDependant_4;
	// System.Int32 TextOutline::doubleResolution
	int32_t ___doubleResolution_5;
	// UnityEngine.TextMesh TextOutline::textMesh
	TextMesh_t3293161711 * ___textMesh_6;
	// UnityEngine.MeshRenderer TextOutline::meshRenderer
	MeshRenderer_t2660348527 * ___meshRenderer_7;

public:
	inline static int32_t get_offset_of_pixelSize_2() { return static_cast<int32_t>(offsetof(TextOutline_t1339366167, ___pixelSize_2)); }
	inline float get_pixelSize_2() const { return ___pixelSize_2; }
	inline float* get_address_of_pixelSize_2() { return &___pixelSize_2; }
	inline void set_pixelSize_2(float value)
	{
		___pixelSize_2 = value;
	}

	inline static int32_t get_offset_of_outlineColor_3() { return static_cast<int32_t>(offsetof(TextOutline_t1339366167, ___outlineColor_3)); }
	inline Color_t2250949164  get_outlineColor_3() const { return ___outlineColor_3; }
	inline Color_t2250949164 * get_address_of_outlineColor_3() { return &___outlineColor_3; }
	inline void set_outlineColor_3(Color_t2250949164  value)
	{
		___outlineColor_3 = value;
	}

	inline static int32_t get_offset_of_resolutionDependant_4() { return static_cast<int32_t>(offsetof(TextOutline_t1339366167, ___resolutionDependant_4)); }
	inline bool get_resolutionDependant_4() const { return ___resolutionDependant_4; }
	inline bool* get_address_of_resolutionDependant_4() { return &___resolutionDependant_4; }
	inline void set_resolutionDependant_4(bool value)
	{
		___resolutionDependant_4 = value;
	}

	inline static int32_t get_offset_of_doubleResolution_5() { return static_cast<int32_t>(offsetof(TextOutline_t1339366167, ___doubleResolution_5)); }
	inline int32_t get_doubleResolution_5() const { return ___doubleResolution_5; }
	inline int32_t* get_address_of_doubleResolution_5() { return &___doubleResolution_5; }
	inline void set_doubleResolution_5(int32_t value)
	{
		___doubleResolution_5 = value;
	}

	inline static int32_t get_offset_of_textMesh_6() { return static_cast<int32_t>(offsetof(TextOutline_t1339366167, ___textMesh_6)); }
	inline TextMesh_t3293161711 * get_textMesh_6() const { return ___textMesh_6; }
	inline TextMesh_t3293161711 ** get_address_of_textMesh_6() { return &___textMesh_6; }
	inline void set_textMesh_6(TextMesh_t3293161711 * value)
	{
		___textMesh_6 = value;
		Il2CppCodeGenWriteBarrier(&___textMesh_6, value);
	}

	inline static int32_t get_offset_of_meshRenderer_7() { return static_cast<int32_t>(offsetof(TextOutline_t1339366167, ___meshRenderer_7)); }
	inline MeshRenderer_t2660348527 * get_meshRenderer_7() const { return ___meshRenderer_7; }
	inline MeshRenderer_t2660348527 ** get_address_of_meshRenderer_7() { return &___meshRenderer_7; }
	inline void set_meshRenderer_7(MeshRenderer_t2660348527 * value)
	{
		___meshRenderer_7 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
