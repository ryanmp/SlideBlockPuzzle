﻿#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t412;
// System.Text.RegularExpressions.MRUList
struct MRUList_t527;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t518  : public Object_t
{
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t412 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t527 * ___mru_list_2;
};
