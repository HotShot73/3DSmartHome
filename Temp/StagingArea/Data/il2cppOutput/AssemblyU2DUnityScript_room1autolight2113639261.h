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
// UnityEngine.AudioClip
struct AudioClip_t3927647597;
// UnityEngine.UI.Text
struct Text_t3921196294;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3099937104;
// UnityEngine.AudioSource
struct AudioSource_t585923902;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Animator
struct Animator_t2442207934;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// room1autolight
struct  room1autolight_t2113639261  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject room1autolight::light1a
	GameObject_t1366199518 * ___light1a_2;
	// UnityEngine.GameObject room1autolight::light1b
	GameObject_t1366199518 * ___light1b_3;
	// UnityEngine.GameObject room1autolight::light2a
	GameObject_t1366199518 * ___light2a_4;
	// UnityEngine.GameObject room1autolight::light2b
	GameObject_t1366199518 * ___light2b_5;
	// UnityEngine.AudioClip room1autolight::lightsound
	AudioClip_t3927647597 * ___lightsound_6;
	// UnityEngine.AudioClip room1autolight::airconditionersound
	AudioClip_t3927647597 * ___airconditionersound_7;
	// UnityEngine.UI.Text room1autolight::text1
	Text_t3921196294 * ___text1_8;
	// UnityEngine.UI.Text room1autolight::text1outline
	Text_t3921196294 * ___text1outline_9;
	// UnityEngine.ParticleSystem room1autolight::airconditioner
	ParticleSystem_t3099937104 * ___airconditioner_10;
	// UnityEngine.UI.Text room1autolight::text2
	Text_t3921196294 * ___text2_11;
	// UnityEngine.UI.Text room1autolight::text2outline
	Text_t3921196294 * ___text2outline_12;
	// UnityEngine.UI.Text room1autolight::text3
	Text_t3921196294 * ___text3_13;
	// UnityEngine.UI.Text room1autolight::text3outline
	Text_t3921196294 * ___text3outline_14;
	// UnityEngine.GameObject room1autolight::Fan
	GameObject_t1366199518 * ___Fan_15;
	// UnityEngine.GameObject room1autolight::FanMainBone
	GameObject_t1366199518 * ___FanMainBone_16;
	// UnityEngine.AudioSource room1autolight::FanOffSwitch
	AudioSource_t585923902 * ___FanOffSwitch_17;
	// UnityEngine.AudioSource room1autolight::Fansound
	AudioSource_t585923902 * ___Fansound_18;
	// System.Boolean room1autolight::FanOffNow
	bool ___FanOffNow_19;
	// UnityEngine.GameObject room1autolight::AirConOnButton
	GameObject_t1366199518 * ___AirConOnButton_20;
	// UnityEngine.GameObject room1autolight::jalousie
	GameObject_t1366199518 * ___jalousie_21;
	// UnityEngine.GameObject room1autolight::jalousie2
	GameObject_t1366199518 * ___jalousie2_22;
	// System.Boolean room1autolight::jalousiDownNow
	bool ___jalousiDownNow_23;
	// System.Boolean room1autolight::task2done
	bool ___task2done_24;
	// UnityEngine.GameObject room1autolight::LightOnButton
	GameObject_t1366199518 * ___LightOnButton_25;
	// UnityEngine.GameObject room1autolight::tvOnButton
	GameObject_t1366199518 * ___tvOnButton_26;
	// UnityEngine.GameObject room1autolight::AirConditionerOnButton
	GameObject_t1366199518 * ___AirConditionerOnButton_27;
	// UnityEngine.GameObject room1autolight::OnButtonClicks
	GameObject_t1366199518 * ___OnButtonClicks_28;
	// UnityEngine.GameObject room1autolight::UseKeyboardText
	GameObject_t1366199518 * ___UseKeyboardText_29;
	// UnityEngine.GameObject room1autolight::ArrowKeysImage
	GameObject_t1366199518 * ___ArrowKeysImage_30;
	// UnityEngine.GameObject room1autolight::FirstPerson
	GameObject_t1366199518 * ___FirstPerson_31;
	// UnityEngine.Transform room1autolight::FirstPersonTransform
	Transform_t224878301 * ___FirstPersonTransform_32;
	// UnityEngine.GameObject room1autolight::Wall
	GameObject_t1366199518 * ___Wall_33;
	// UnityEngine.GameObject room1autolight::arrowText3
	GameObject_t1366199518 * ___arrowText3_34;
	// UnityEngine.GameObject room1autolight::UI
	GameObject_t1366199518 * ___UI_35;
	// UnityEngine.Animator room1autolight::UIanimator
	Animator_t2442207934 * ___UIanimator_36;
	// UnityEngine.GameObject room1autolight::UIbutton
	GameObject_t1366199518 * ___UIbutton_37;
	// UnityEngine.GameObject room1autolight::ArrowKeysText
	GameObject_t1366199518 * ___ArrowKeysText_38;

public:
	inline static int32_t get_offset_of_light1a_2() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___light1a_2)); }
	inline GameObject_t1366199518 * get_light1a_2() const { return ___light1a_2; }
	inline GameObject_t1366199518 ** get_address_of_light1a_2() { return &___light1a_2; }
	inline void set_light1a_2(GameObject_t1366199518 * value)
	{
		___light1a_2 = value;
		Il2CppCodeGenWriteBarrier(&___light1a_2, value);
	}

	inline static int32_t get_offset_of_light1b_3() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___light1b_3)); }
	inline GameObject_t1366199518 * get_light1b_3() const { return ___light1b_3; }
	inline GameObject_t1366199518 ** get_address_of_light1b_3() { return &___light1b_3; }
	inline void set_light1b_3(GameObject_t1366199518 * value)
	{
		___light1b_3 = value;
		Il2CppCodeGenWriteBarrier(&___light1b_3, value);
	}

	inline static int32_t get_offset_of_light2a_4() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___light2a_4)); }
	inline GameObject_t1366199518 * get_light2a_4() const { return ___light2a_4; }
	inline GameObject_t1366199518 ** get_address_of_light2a_4() { return &___light2a_4; }
	inline void set_light2a_4(GameObject_t1366199518 * value)
	{
		___light2a_4 = value;
		Il2CppCodeGenWriteBarrier(&___light2a_4, value);
	}

	inline static int32_t get_offset_of_light2b_5() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___light2b_5)); }
	inline GameObject_t1366199518 * get_light2b_5() const { return ___light2b_5; }
	inline GameObject_t1366199518 ** get_address_of_light2b_5() { return &___light2b_5; }
	inline void set_light2b_5(GameObject_t1366199518 * value)
	{
		___light2b_5 = value;
		Il2CppCodeGenWriteBarrier(&___light2b_5, value);
	}

	inline static int32_t get_offset_of_lightsound_6() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___lightsound_6)); }
	inline AudioClip_t3927647597 * get_lightsound_6() const { return ___lightsound_6; }
	inline AudioClip_t3927647597 ** get_address_of_lightsound_6() { return &___lightsound_6; }
	inline void set_lightsound_6(AudioClip_t3927647597 * value)
	{
		___lightsound_6 = value;
		Il2CppCodeGenWriteBarrier(&___lightsound_6, value);
	}

	inline static int32_t get_offset_of_airconditionersound_7() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___airconditionersound_7)); }
	inline AudioClip_t3927647597 * get_airconditionersound_7() const { return ___airconditionersound_7; }
	inline AudioClip_t3927647597 ** get_address_of_airconditionersound_7() { return &___airconditionersound_7; }
	inline void set_airconditionersound_7(AudioClip_t3927647597 * value)
	{
		___airconditionersound_7 = value;
		Il2CppCodeGenWriteBarrier(&___airconditionersound_7, value);
	}

	inline static int32_t get_offset_of_text1_8() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___text1_8)); }
	inline Text_t3921196294 * get_text1_8() const { return ___text1_8; }
	inline Text_t3921196294 ** get_address_of_text1_8() { return &___text1_8; }
	inline void set_text1_8(Text_t3921196294 * value)
	{
		___text1_8 = value;
		Il2CppCodeGenWriteBarrier(&___text1_8, value);
	}

	inline static int32_t get_offset_of_text1outline_9() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___text1outline_9)); }
	inline Text_t3921196294 * get_text1outline_9() const { return ___text1outline_9; }
	inline Text_t3921196294 ** get_address_of_text1outline_9() { return &___text1outline_9; }
	inline void set_text1outline_9(Text_t3921196294 * value)
	{
		___text1outline_9 = value;
		Il2CppCodeGenWriteBarrier(&___text1outline_9, value);
	}

	inline static int32_t get_offset_of_airconditioner_10() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___airconditioner_10)); }
	inline ParticleSystem_t3099937104 * get_airconditioner_10() const { return ___airconditioner_10; }
	inline ParticleSystem_t3099937104 ** get_address_of_airconditioner_10() { return &___airconditioner_10; }
	inline void set_airconditioner_10(ParticleSystem_t3099937104 * value)
	{
		___airconditioner_10 = value;
		Il2CppCodeGenWriteBarrier(&___airconditioner_10, value);
	}

	inline static int32_t get_offset_of_text2_11() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___text2_11)); }
	inline Text_t3921196294 * get_text2_11() const { return ___text2_11; }
	inline Text_t3921196294 ** get_address_of_text2_11() { return &___text2_11; }
	inline void set_text2_11(Text_t3921196294 * value)
	{
		___text2_11 = value;
		Il2CppCodeGenWriteBarrier(&___text2_11, value);
	}

	inline static int32_t get_offset_of_text2outline_12() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___text2outline_12)); }
	inline Text_t3921196294 * get_text2outline_12() const { return ___text2outline_12; }
	inline Text_t3921196294 ** get_address_of_text2outline_12() { return &___text2outline_12; }
	inline void set_text2outline_12(Text_t3921196294 * value)
	{
		___text2outline_12 = value;
		Il2CppCodeGenWriteBarrier(&___text2outline_12, value);
	}

	inline static int32_t get_offset_of_text3_13() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___text3_13)); }
	inline Text_t3921196294 * get_text3_13() const { return ___text3_13; }
	inline Text_t3921196294 ** get_address_of_text3_13() { return &___text3_13; }
	inline void set_text3_13(Text_t3921196294 * value)
	{
		___text3_13 = value;
		Il2CppCodeGenWriteBarrier(&___text3_13, value);
	}

	inline static int32_t get_offset_of_text3outline_14() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___text3outline_14)); }
	inline Text_t3921196294 * get_text3outline_14() const { return ___text3outline_14; }
	inline Text_t3921196294 ** get_address_of_text3outline_14() { return &___text3outline_14; }
	inline void set_text3outline_14(Text_t3921196294 * value)
	{
		___text3outline_14 = value;
		Il2CppCodeGenWriteBarrier(&___text3outline_14, value);
	}

	inline static int32_t get_offset_of_Fan_15() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___Fan_15)); }
	inline GameObject_t1366199518 * get_Fan_15() const { return ___Fan_15; }
	inline GameObject_t1366199518 ** get_address_of_Fan_15() { return &___Fan_15; }
	inline void set_Fan_15(GameObject_t1366199518 * value)
	{
		___Fan_15 = value;
		Il2CppCodeGenWriteBarrier(&___Fan_15, value);
	}

	inline static int32_t get_offset_of_FanMainBone_16() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___FanMainBone_16)); }
	inline GameObject_t1366199518 * get_FanMainBone_16() const { return ___FanMainBone_16; }
	inline GameObject_t1366199518 ** get_address_of_FanMainBone_16() { return &___FanMainBone_16; }
	inline void set_FanMainBone_16(GameObject_t1366199518 * value)
	{
		___FanMainBone_16 = value;
		Il2CppCodeGenWriteBarrier(&___FanMainBone_16, value);
	}

	inline static int32_t get_offset_of_FanOffSwitch_17() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___FanOffSwitch_17)); }
	inline AudioSource_t585923902 * get_FanOffSwitch_17() const { return ___FanOffSwitch_17; }
	inline AudioSource_t585923902 ** get_address_of_FanOffSwitch_17() { return &___FanOffSwitch_17; }
	inline void set_FanOffSwitch_17(AudioSource_t585923902 * value)
	{
		___FanOffSwitch_17 = value;
		Il2CppCodeGenWriteBarrier(&___FanOffSwitch_17, value);
	}

	inline static int32_t get_offset_of_Fansound_18() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___Fansound_18)); }
	inline AudioSource_t585923902 * get_Fansound_18() const { return ___Fansound_18; }
	inline AudioSource_t585923902 ** get_address_of_Fansound_18() { return &___Fansound_18; }
	inline void set_Fansound_18(AudioSource_t585923902 * value)
	{
		___Fansound_18 = value;
		Il2CppCodeGenWriteBarrier(&___Fansound_18, value);
	}

	inline static int32_t get_offset_of_FanOffNow_19() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___FanOffNow_19)); }
	inline bool get_FanOffNow_19() const { return ___FanOffNow_19; }
	inline bool* get_address_of_FanOffNow_19() { return &___FanOffNow_19; }
	inline void set_FanOffNow_19(bool value)
	{
		___FanOffNow_19 = value;
	}

	inline static int32_t get_offset_of_AirConOnButton_20() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___AirConOnButton_20)); }
	inline GameObject_t1366199518 * get_AirConOnButton_20() const { return ___AirConOnButton_20; }
	inline GameObject_t1366199518 ** get_address_of_AirConOnButton_20() { return &___AirConOnButton_20; }
	inline void set_AirConOnButton_20(GameObject_t1366199518 * value)
	{
		___AirConOnButton_20 = value;
		Il2CppCodeGenWriteBarrier(&___AirConOnButton_20, value);
	}

	inline static int32_t get_offset_of_jalousie_21() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___jalousie_21)); }
	inline GameObject_t1366199518 * get_jalousie_21() const { return ___jalousie_21; }
	inline GameObject_t1366199518 ** get_address_of_jalousie_21() { return &___jalousie_21; }
	inline void set_jalousie_21(GameObject_t1366199518 * value)
	{
		___jalousie_21 = value;
		Il2CppCodeGenWriteBarrier(&___jalousie_21, value);
	}

	inline static int32_t get_offset_of_jalousie2_22() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___jalousie2_22)); }
	inline GameObject_t1366199518 * get_jalousie2_22() const { return ___jalousie2_22; }
	inline GameObject_t1366199518 ** get_address_of_jalousie2_22() { return &___jalousie2_22; }
	inline void set_jalousie2_22(GameObject_t1366199518 * value)
	{
		___jalousie2_22 = value;
		Il2CppCodeGenWriteBarrier(&___jalousie2_22, value);
	}

	inline static int32_t get_offset_of_jalousiDownNow_23() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___jalousiDownNow_23)); }
	inline bool get_jalousiDownNow_23() const { return ___jalousiDownNow_23; }
	inline bool* get_address_of_jalousiDownNow_23() { return &___jalousiDownNow_23; }
	inline void set_jalousiDownNow_23(bool value)
	{
		___jalousiDownNow_23 = value;
	}

	inline static int32_t get_offset_of_task2done_24() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___task2done_24)); }
	inline bool get_task2done_24() const { return ___task2done_24; }
	inline bool* get_address_of_task2done_24() { return &___task2done_24; }
	inline void set_task2done_24(bool value)
	{
		___task2done_24 = value;
	}

	inline static int32_t get_offset_of_LightOnButton_25() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___LightOnButton_25)); }
	inline GameObject_t1366199518 * get_LightOnButton_25() const { return ___LightOnButton_25; }
	inline GameObject_t1366199518 ** get_address_of_LightOnButton_25() { return &___LightOnButton_25; }
	inline void set_LightOnButton_25(GameObject_t1366199518 * value)
	{
		___LightOnButton_25 = value;
		Il2CppCodeGenWriteBarrier(&___LightOnButton_25, value);
	}

	inline static int32_t get_offset_of_tvOnButton_26() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___tvOnButton_26)); }
	inline GameObject_t1366199518 * get_tvOnButton_26() const { return ___tvOnButton_26; }
	inline GameObject_t1366199518 ** get_address_of_tvOnButton_26() { return &___tvOnButton_26; }
	inline void set_tvOnButton_26(GameObject_t1366199518 * value)
	{
		___tvOnButton_26 = value;
		Il2CppCodeGenWriteBarrier(&___tvOnButton_26, value);
	}

	inline static int32_t get_offset_of_AirConditionerOnButton_27() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___AirConditionerOnButton_27)); }
	inline GameObject_t1366199518 * get_AirConditionerOnButton_27() const { return ___AirConditionerOnButton_27; }
	inline GameObject_t1366199518 ** get_address_of_AirConditionerOnButton_27() { return &___AirConditionerOnButton_27; }
	inline void set_AirConditionerOnButton_27(GameObject_t1366199518 * value)
	{
		___AirConditionerOnButton_27 = value;
		Il2CppCodeGenWriteBarrier(&___AirConditionerOnButton_27, value);
	}

	inline static int32_t get_offset_of_OnButtonClicks_28() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___OnButtonClicks_28)); }
	inline GameObject_t1366199518 * get_OnButtonClicks_28() const { return ___OnButtonClicks_28; }
	inline GameObject_t1366199518 ** get_address_of_OnButtonClicks_28() { return &___OnButtonClicks_28; }
	inline void set_OnButtonClicks_28(GameObject_t1366199518 * value)
	{
		___OnButtonClicks_28 = value;
		Il2CppCodeGenWriteBarrier(&___OnButtonClicks_28, value);
	}

	inline static int32_t get_offset_of_UseKeyboardText_29() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___UseKeyboardText_29)); }
	inline GameObject_t1366199518 * get_UseKeyboardText_29() const { return ___UseKeyboardText_29; }
	inline GameObject_t1366199518 ** get_address_of_UseKeyboardText_29() { return &___UseKeyboardText_29; }
	inline void set_UseKeyboardText_29(GameObject_t1366199518 * value)
	{
		___UseKeyboardText_29 = value;
		Il2CppCodeGenWriteBarrier(&___UseKeyboardText_29, value);
	}

	inline static int32_t get_offset_of_ArrowKeysImage_30() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___ArrowKeysImage_30)); }
	inline GameObject_t1366199518 * get_ArrowKeysImage_30() const { return ___ArrowKeysImage_30; }
	inline GameObject_t1366199518 ** get_address_of_ArrowKeysImage_30() { return &___ArrowKeysImage_30; }
	inline void set_ArrowKeysImage_30(GameObject_t1366199518 * value)
	{
		___ArrowKeysImage_30 = value;
		Il2CppCodeGenWriteBarrier(&___ArrowKeysImage_30, value);
	}

	inline static int32_t get_offset_of_FirstPerson_31() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___FirstPerson_31)); }
	inline GameObject_t1366199518 * get_FirstPerson_31() const { return ___FirstPerson_31; }
	inline GameObject_t1366199518 ** get_address_of_FirstPerson_31() { return &___FirstPerson_31; }
	inline void set_FirstPerson_31(GameObject_t1366199518 * value)
	{
		___FirstPerson_31 = value;
		Il2CppCodeGenWriteBarrier(&___FirstPerson_31, value);
	}

	inline static int32_t get_offset_of_FirstPersonTransform_32() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___FirstPersonTransform_32)); }
	inline Transform_t224878301 * get_FirstPersonTransform_32() const { return ___FirstPersonTransform_32; }
	inline Transform_t224878301 ** get_address_of_FirstPersonTransform_32() { return &___FirstPersonTransform_32; }
	inline void set_FirstPersonTransform_32(Transform_t224878301 * value)
	{
		___FirstPersonTransform_32 = value;
		Il2CppCodeGenWriteBarrier(&___FirstPersonTransform_32, value);
	}

	inline static int32_t get_offset_of_Wall_33() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___Wall_33)); }
	inline GameObject_t1366199518 * get_Wall_33() const { return ___Wall_33; }
	inline GameObject_t1366199518 ** get_address_of_Wall_33() { return &___Wall_33; }
	inline void set_Wall_33(GameObject_t1366199518 * value)
	{
		___Wall_33 = value;
		Il2CppCodeGenWriteBarrier(&___Wall_33, value);
	}

	inline static int32_t get_offset_of_arrowText3_34() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___arrowText3_34)); }
	inline GameObject_t1366199518 * get_arrowText3_34() const { return ___arrowText3_34; }
	inline GameObject_t1366199518 ** get_address_of_arrowText3_34() { return &___arrowText3_34; }
	inline void set_arrowText3_34(GameObject_t1366199518 * value)
	{
		___arrowText3_34 = value;
		Il2CppCodeGenWriteBarrier(&___arrowText3_34, value);
	}

	inline static int32_t get_offset_of_UI_35() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___UI_35)); }
	inline GameObject_t1366199518 * get_UI_35() const { return ___UI_35; }
	inline GameObject_t1366199518 ** get_address_of_UI_35() { return &___UI_35; }
	inline void set_UI_35(GameObject_t1366199518 * value)
	{
		___UI_35 = value;
		Il2CppCodeGenWriteBarrier(&___UI_35, value);
	}

	inline static int32_t get_offset_of_UIanimator_36() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___UIanimator_36)); }
	inline Animator_t2442207934 * get_UIanimator_36() const { return ___UIanimator_36; }
	inline Animator_t2442207934 ** get_address_of_UIanimator_36() { return &___UIanimator_36; }
	inline void set_UIanimator_36(Animator_t2442207934 * value)
	{
		___UIanimator_36 = value;
		Il2CppCodeGenWriteBarrier(&___UIanimator_36, value);
	}

	inline static int32_t get_offset_of_UIbutton_37() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___UIbutton_37)); }
	inline GameObject_t1366199518 * get_UIbutton_37() const { return ___UIbutton_37; }
	inline GameObject_t1366199518 ** get_address_of_UIbutton_37() { return &___UIbutton_37; }
	inline void set_UIbutton_37(GameObject_t1366199518 * value)
	{
		___UIbutton_37 = value;
		Il2CppCodeGenWriteBarrier(&___UIbutton_37, value);
	}

	inline static int32_t get_offset_of_ArrowKeysText_38() { return static_cast<int32_t>(offsetof(room1autolight_t2113639261, ___ArrowKeysText_38)); }
	inline GameObject_t1366199518 * get_ArrowKeysText_38() const { return ___ArrowKeysText_38; }
	inline GameObject_t1366199518 ** get_address_of_ArrowKeysText_38() { return &___ArrowKeysText_38; }
	inline void set_ArrowKeysText_38(GameObject_t1366199518 * value)
	{
		___ArrowKeysText_38 = value;
		Il2CppCodeGenWriteBarrier(&___ArrowKeysText_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
