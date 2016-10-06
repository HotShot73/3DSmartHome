#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t3921196294;
// System.String[]
struct StringU5BU5D_t3764931161;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnNoteClick
struct  OnNoteClick_t3441504353  : public MonoBehaviour_t774292115
{
public:
	// System.String OnNoteClick::output
	String_t* ___output_2;
	// UnityEngine.UI.Text OnNoteClick::NoteText
	Text_t3921196294 * ___NoteText_3;
	// System.Single OnNoteClick::Delay
	float ___Delay_4;
	// System.String[] OnNoteClick::Text
	StringU5BU5D_t3764931161* ___Text_5;
	// System.Boolean OnNoteClick::doubleSpace
	bool ___doubleSpace_6;
	// System.String[] OnNoteClick::Note
	StringU5BU5D_t3764931161* ___Note_7;
	// System.String[] OnNoteClick::Note2
	StringU5BU5D_t3764931161* ___Note2_8;
	// System.Boolean OnNoteClick::clickedonce
	bool ___clickedonce_9;
	// UnityEngine.GameObject OnNoteClick::MouseImage
	GameObject_t1366199518 * ___MouseImage_10;
	// UnityEngine.GameObject OnNoteClick::KeyboardImage
	GameObject_t1366199518 * ___KeyboardImage_11;
	// UnityEngine.GameObject OnNoteClick::StartButton
	GameObject_t1366199518 * ___StartButton_12;

public:
	inline static int32_t get_offset_of_output_2() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___output_2)); }
	inline String_t* get_output_2() const { return ___output_2; }
	inline String_t** get_address_of_output_2() { return &___output_2; }
	inline void set_output_2(String_t* value)
	{
		___output_2 = value;
		Il2CppCodeGenWriteBarrier(&___output_2, value);
	}

	inline static int32_t get_offset_of_NoteText_3() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___NoteText_3)); }
	inline Text_t3921196294 * get_NoteText_3() const { return ___NoteText_3; }
	inline Text_t3921196294 ** get_address_of_NoteText_3() { return &___NoteText_3; }
	inline void set_NoteText_3(Text_t3921196294 * value)
	{
		___NoteText_3 = value;
		Il2CppCodeGenWriteBarrier(&___NoteText_3, value);
	}

	inline static int32_t get_offset_of_Delay_4() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___Delay_4)); }
	inline float get_Delay_4() const { return ___Delay_4; }
	inline float* get_address_of_Delay_4() { return &___Delay_4; }
	inline void set_Delay_4(float value)
	{
		___Delay_4 = value;
	}

	inline static int32_t get_offset_of_Text_5() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___Text_5)); }
	inline StringU5BU5D_t3764931161* get_Text_5() const { return ___Text_5; }
	inline StringU5BU5D_t3764931161** get_address_of_Text_5() { return &___Text_5; }
	inline void set_Text_5(StringU5BU5D_t3764931161* value)
	{
		___Text_5 = value;
		Il2CppCodeGenWriteBarrier(&___Text_5, value);
	}

	inline static int32_t get_offset_of_doubleSpace_6() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___doubleSpace_6)); }
	inline bool get_doubleSpace_6() const { return ___doubleSpace_6; }
	inline bool* get_address_of_doubleSpace_6() { return &___doubleSpace_6; }
	inline void set_doubleSpace_6(bool value)
	{
		___doubleSpace_6 = value;
	}

	inline static int32_t get_offset_of_Note_7() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___Note_7)); }
	inline StringU5BU5D_t3764931161* get_Note_7() const { return ___Note_7; }
	inline StringU5BU5D_t3764931161** get_address_of_Note_7() { return &___Note_7; }
	inline void set_Note_7(StringU5BU5D_t3764931161* value)
	{
		___Note_7 = value;
		Il2CppCodeGenWriteBarrier(&___Note_7, value);
	}

	inline static int32_t get_offset_of_Note2_8() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___Note2_8)); }
	inline StringU5BU5D_t3764931161* get_Note2_8() const { return ___Note2_8; }
	inline StringU5BU5D_t3764931161** get_address_of_Note2_8() { return &___Note2_8; }
	inline void set_Note2_8(StringU5BU5D_t3764931161* value)
	{
		___Note2_8 = value;
		Il2CppCodeGenWriteBarrier(&___Note2_8, value);
	}

	inline static int32_t get_offset_of_clickedonce_9() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___clickedonce_9)); }
	inline bool get_clickedonce_9() const { return ___clickedonce_9; }
	inline bool* get_address_of_clickedonce_9() { return &___clickedonce_9; }
	inline void set_clickedonce_9(bool value)
	{
		___clickedonce_9 = value;
	}

	inline static int32_t get_offset_of_MouseImage_10() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___MouseImage_10)); }
	inline GameObject_t1366199518 * get_MouseImage_10() const { return ___MouseImage_10; }
	inline GameObject_t1366199518 ** get_address_of_MouseImage_10() { return &___MouseImage_10; }
	inline void set_MouseImage_10(GameObject_t1366199518 * value)
	{
		___MouseImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___MouseImage_10, value);
	}

	inline static int32_t get_offset_of_KeyboardImage_11() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___KeyboardImage_11)); }
	inline GameObject_t1366199518 * get_KeyboardImage_11() const { return ___KeyboardImage_11; }
	inline GameObject_t1366199518 ** get_address_of_KeyboardImage_11() { return &___KeyboardImage_11; }
	inline void set_KeyboardImage_11(GameObject_t1366199518 * value)
	{
		___KeyboardImage_11 = value;
		Il2CppCodeGenWriteBarrier(&___KeyboardImage_11, value);
	}

	inline static int32_t get_offset_of_StartButton_12() { return static_cast<int32_t>(offsetof(OnNoteClick_t3441504353, ___StartButton_12)); }
	inline GameObject_t1366199518 * get_StartButton_12() const { return ___StartButton_12; }
	inline GameObject_t1366199518 ** get_address_of_StartButton_12() { return &___StartButton_12; }
	inline void set_StartButton_12(GameObject_t1366199518 * value)
	{
		___StartButton_12 = value;
		Il2CppCodeGenWriteBarrier(&___StartButton_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
