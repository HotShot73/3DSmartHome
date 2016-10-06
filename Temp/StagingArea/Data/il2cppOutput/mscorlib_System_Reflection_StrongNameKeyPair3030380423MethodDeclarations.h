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

// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3030380423;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;
// Mono.Security.StrongName
struct StrongName_t2729163191;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StrongNameKeyPair__ctor_m1022407102 (StrongNameKeyPair_t3030380423 * __this, SerializationInfo_t1029367511 * ___info0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m1693082120 (StrongNameKeyPair_t3030380423 * __this, SerializationInfo_t1029367511 * ___info0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m2330221363 (StrongNameKeyPair_t3030380423 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern "C"  RSA_t2777156203 * StrongNameKeyPair_GetRSA_m2992233029 (StrongNameKeyPair_t3030380423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern "C"  StrongName_t2729163191 * StrongNameKeyPair_StrongName_m2265549101 (StrongNameKeyPair_t3030380423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
