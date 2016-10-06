#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t40021671;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t759339468;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3766580690;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t2101607268;
// System.Diagnostics.SymbolStore.ISymbolWriter
struct ISymbolWriter_t2305312992;
// System.Char[]
struct CharU5BU5D_t1685951112;

#include "mscorlib_System_Reflection_Module2520131484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t142627928  : public Module_t2520131484
{
public:
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t40021671* ___types_11;
	// System.Byte[] System.Reflection.Emit.ModuleBuilder::guid
	ByteU5BU5D_t3835026402* ___guid_12;
	// System.Int32 System.Reflection.Emit.ModuleBuilder::table_idx
	int32_t ___table_idx_13;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t759339468 * ___assemblyb_14;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::global_type
	TypeBuilder_t3766580690 * ___global_type_15;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::name_cache
	Hashtable_t1312997718 * ___name_cache_16;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::us_string_cache
	Hashtable_t1312997718 * ___us_string_cache_17;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t3315407976* ___table_indexes_18;
	// System.Boolean System.Reflection.Emit.ModuleBuilder::transient
	bool ___transient_19;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t2101607268 * ___token_gen_20;
	// System.Diagnostics.SymbolStore.ISymbolWriter System.Reflection.Emit.ModuleBuilder::symbolWriter
	Il2CppObject * ___symbolWriter_21;

public:
	inline static int32_t get_offset_of_num_types_10() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___num_types_10)); }
	inline int32_t get_num_types_10() const { return ___num_types_10; }
	inline int32_t* get_address_of_num_types_10() { return &___num_types_10; }
	inline void set_num_types_10(int32_t value)
	{
		___num_types_10 = value;
	}

	inline static int32_t get_offset_of_types_11() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___types_11)); }
	inline TypeBuilderU5BU5D_t40021671* get_types_11() const { return ___types_11; }
	inline TypeBuilderU5BU5D_t40021671** get_address_of_types_11() { return &___types_11; }
	inline void set_types_11(TypeBuilderU5BU5D_t40021671* value)
	{
		___types_11 = value;
		Il2CppCodeGenWriteBarrier(&___types_11, value);
	}

	inline static int32_t get_offset_of_guid_12() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___guid_12)); }
	inline ByteU5BU5D_t3835026402* get_guid_12() const { return ___guid_12; }
	inline ByteU5BU5D_t3835026402** get_address_of_guid_12() { return &___guid_12; }
	inline void set_guid_12(ByteU5BU5D_t3835026402* value)
	{
		___guid_12 = value;
		Il2CppCodeGenWriteBarrier(&___guid_12, value);
	}

	inline static int32_t get_offset_of_table_idx_13() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___table_idx_13)); }
	inline int32_t get_table_idx_13() const { return ___table_idx_13; }
	inline int32_t* get_address_of_table_idx_13() { return &___table_idx_13; }
	inline void set_table_idx_13(int32_t value)
	{
		___table_idx_13 = value;
	}

	inline static int32_t get_offset_of_assemblyb_14() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___assemblyb_14)); }
	inline AssemblyBuilder_t759339468 * get_assemblyb_14() const { return ___assemblyb_14; }
	inline AssemblyBuilder_t759339468 ** get_address_of_assemblyb_14() { return &___assemblyb_14; }
	inline void set_assemblyb_14(AssemblyBuilder_t759339468 * value)
	{
		___assemblyb_14 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyb_14, value);
	}

	inline static int32_t get_offset_of_global_type_15() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___global_type_15)); }
	inline TypeBuilder_t3766580690 * get_global_type_15() const { return ___global_type_15; }
	inline TypeBuilder_t3766580690 ** get_address_of_global_type_15() { return &___global_type_15; }
	inline void set_global_type_15(TypeBuilder_t3766580690 * value)
	{
		___global_type_15 = value;
		Il2CppCodeGenWriteBarrier(&___global_type_15, value);
	}

	inline static int32_t get_offset_of_name_cache_16() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___name_cache_16)); }
	inline Hashtable_t1312997718 * get_name_cache_16() const { return ___name_cache_16; }
	inline Hashtable_t1312997718 ** get_address_of_name_cache_16() { return &___name_cache_16; }
	inline void set_name_cache_16(Hashtable_t1312997718 * value)
	{
		___name_cache_16 = value;
		Il2CppCodeGenWriteBarrier(&___name_cache_16, value);
	}

	inline static int32_t get_offset_of_us_string_cache_17() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___us_string_cache_17)); }
	inline Hashtable_t1312997718 * get_us_string_cache_17() const { return ___us_string_cache_17; }
	inline Hashtable_t1312997718 ** get_address_of_us_string_cache_17() { return &___us_string_cache_17; }
	inline void set_us_string_cache_17(Hashtable_t1312997718 * value)
	{
		___us_string_cache_17 = value;
		Il2CppCodeGenWriteBarrier(&___us_string_cache_17, value);
	}

	inline static int32_t get_offset_of_table_indexes_18() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___table_indexes_18)); }
	inline Int32U5BU5D_t3315407976* get_table_indexes_18() const { return ___table_indexes_18; }
	inline Int32U5BU5D_t3315407976** get_address_of_table_indexes_18() { return &___table_indexes_18; }
	inline void set_table_indexes_18(Int32U5BU5D_t3315407976* value)
	{
		___table_indexes_18 = value;
		Il2CppCodeGenWriteBarrier(&___table_indexes_18, value);
	}

	inline static int32_t get_offset_of_transient_19() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___transient_19)); }
	inline bool get_transient_19() const { return ___transient_19; }
	inline bool* get_address_of_transient_19() { return &___transient_19; }
	inline void set_transient_19(bool value)
	{
		___transient_19 = value;
	}

	inline static int32_t get_offset_of_token_gen_20() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___token_gen_20)); }
	inline ModuleBuilderTokenGenerator_t2101607268 * get_token_gen_20() const { return ___token_gen_20; }
	inline ModuleBuilderTokenGenerator_t2101607268 ** get_address_of_token_gen_20() { return &___token_gen_20; }
	inline void set_token_gen_20(ModuleBuilderTokenGenerator_t2101607268 * value)
	{
		___token_gen_20 = value;
		Il2CppCodeGenWriteBarrier(&___token_gen_20, value);
	}

	inline static int32_t get_offset_of_symbolWriter_21() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928, ___symbolWriter_21)); }
	inline Il2CppObject * get_symbolWriter_21() const { return ___symbolWriter_21; }
	inline Il2CppObject ** get_address_of_symbolWriter_21() { return &___symbolWriter_21; }
	inline void set_symbolWriter_21(Il2CppObject * value)
	{
		___symbolWriter_21 = value;
		Il2CppCodeGenWriteBarrier(&___symbolWriter_21, value);
	}
};

struct ModuleBuilder_t142627928_StaticFields
{
public:
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t1685951112* ___type_modifiers_22;

public:
	inline static int32_t get_offset_of_type_modifiers_22() { return static_cast<int32_t>(offsetof(ModuleBuilder_t142627928_StaticFields, ___type_modifiers_22)); }
	inline CharU5BU5D_t1685951112* get_type_modifiers_22() const { return ___type_modifiers_22; }
	inline CharU5BU5D_t1685951112** get_address_of_type_modifiers_22() { return &___type_modifiers_22; }
	inline void set_type_modifiers_22(CharU5BU5D_t1685951112* value)
	{
		___type_modifiers_22 = value;
		Il2CppCodeGenWriteBarrier(&___type_modifiers_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
