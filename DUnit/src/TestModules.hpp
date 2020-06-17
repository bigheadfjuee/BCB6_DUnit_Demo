// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TestModules.pas' rev: 6.00

#ifndef TestModulesHPP
#define TestModulesHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <TestFramework.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Testmodules
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 4)
struct TModuleRecord
{
	unsigned Handle;
	Testframework::_di_ITest Test;
} ;
#pragma pack(pop)

typedef Testframework::_di_ITest __fastcall (*TGetTestFunc)(void);

typedef DynamicArray<TModuleRecord >  TestModules__1;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString rcs_id;
extern PACKAGE DynamicArray<TModuleRecord >  __Modules;
extern PACKAGE Testframework::_di_ITest __fastcall LoadModuleTests(AnsiString LibName);
extern PACKAGE void __fastcall RegisterModuleTests(AnsiString LibName);
extern PACKAGE void __fastcall UnloadTestModules(void);

}	/* namespace Testmodules */
using namespace Testmodules;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TestModules
