#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.CharacterController
struct CharacterController_t2983510512;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_CharacterController2983510512.h"
#include "UnityEngine_UnityEngine_CollisionFlags1021373776.h"

// System.Boolean UnityEngine.CharacterController::SimpleMove(UnityEngine.Vector3)
extern "C"  bool CharacterController_SimpleMove_m3872077378 (CharacterController_t2983510512 * __this, Vector3_t465617797  ___speed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CharacterController::INTERNAL_CALL_SimpleMove(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C"  bool CharacterController_INTERNAL_CALL_SimpleMove_m63258103 (Il2CppObject * __this /* static, unused */, CharacterController_t2983510512 * ___self0, Vector3_t465617797 * ___speed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C"  int32_t CharacterController_Move_m3456882757 (CharacterController_t2983510512 * __this, Vector3_t465617797  ___motion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C"  int32_t CharacterController_INTERNAL_CALL_Move_m2826125634 (Il2CppObject * __this /* static, unused */, CharacterController_t2983510512 * ___self0, Vector3_t465617797 * ___motion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C"  Vector3_t465617797  CharacterController_get_velocity_m1484936086 (CharacterController_t2983510512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void CharacterController_INTERNAL_get_velocity_m3465973477 (CharacterController_t2983510512 * __this, Vector3_t465617797 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_radius()
extern "C"  float CharacterController_get_radius_m2751828411 (CharacterController_t2983510512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_height()
extern "C"  float CharacterController_get_height_m2830713110 (CharacterController_t2983510512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_center()
extern "C"  Vector3_t465617797  CharacterController_get_center_m3262687436 (CharacterController_t2983510512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C"  void CharacterController_INTERNAL_get_center_m3691055949 (CharacterController_t2983510512 * __this, Vector3_t465617797 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_slopeLimit()
extern "C"  float CharacterController_get_slopeLimit_m1930597355 (CharacterController_t2983510512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_stepOffset()
extern "C"  float CharacterController_get_stepOffset_m2492821916 (CharacterController_t2983510512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
