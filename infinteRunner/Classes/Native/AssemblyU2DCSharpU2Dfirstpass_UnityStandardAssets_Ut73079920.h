﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Utility.TimedObjectActivator/Entry[]
struct EntryU5BU5D_t864858663;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct  Entries_t73079920  : public Il2CppObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry[] UnityStandardAssets.Utility.TimedObjectActivator/Entries::entries
	EntryU5BU5D_t864858663* ___entries_0;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(Entries_t73079920, ___entries_0)); }
	inline EntryU5BU5D_t864858663* get_entries_0() const { return ___entries_0; }
	inline EntryU5BU5D_t864858663** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(EntryU5BU5D_t864858663* value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier(&___entries_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
