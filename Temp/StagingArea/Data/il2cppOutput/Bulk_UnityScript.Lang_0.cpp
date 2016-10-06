#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "UnityScript_Lang_U3CModuleU3E3783534214.h"
#include "UnityScript_Lang_U3CModuleU3E3783534214MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityBuiltins1830914567.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityBuiltins1830914567MethodDeclarations.h"
#include "mscorlib_System_Int321448170597.h"
#include "mscorlib_System_Single1791520093.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityScript.Lang.UnityBuiltins::parseInt(System.Single)
extern "C"  int32_t UnityBuiltins_parseInt_m2671634099 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method)
{
	{
		float L_0 = ___value0;
		if (L_0 > (double)(2147483647)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		return (((int32_t)((int32_t)L_0)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
