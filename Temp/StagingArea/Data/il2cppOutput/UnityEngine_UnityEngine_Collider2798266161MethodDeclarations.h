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

// UnityEngine.Collider
struct Collider_t2798266161;
// UnityEngine.Rigidbody
struct Rigidbody_t1071364940;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds968365060.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t1071364940 * Collider_get_attachedRigidbody_m3279305420 (Collider_t2798266161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C"  void Collider_set_isTrigger_m1298573031 (Collider_t2798266161 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C"  Bounds_t968365060  Collider_get_bounds_m3534458178 (Collider_t2798266161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Collider_INTERNAL_get_bounds_m4035290675 (Collider_t2798266161 * __this, Bounds_t968365060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
