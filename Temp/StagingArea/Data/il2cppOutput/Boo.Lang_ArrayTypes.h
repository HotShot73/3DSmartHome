#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t2330453161;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2716717214;

#include "mscorlib_System_Array4136897760.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa2330453161.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa2716717214.h"

#pragma once
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey[]
struct DispatcherKeyU5BU5D_t1545440916  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) DispatcherKey_t2330453161 * m_Items[1];

public:
	inline DispatcherKey_t2330453161 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DispatcherKey_t2330453161 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DispatcherKey_t2330453161 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher[]
struct DispatcherU5BU5D_t113341227  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Dispatcher_t2716717214 * m_Items[1];

public:
	inline Dispatcher_t2716717214 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Dispatcher_t2716717214 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Dispatcher_t2716717214 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
