// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'GUITesting.pas' rev: 6.00

#ifndef GUITestingHPP
#define GUITestingHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <TestFramework.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Guitesting
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TGUITestCase;
class PASCALIMPLEMENTATION TGUITestCase : public Testframework::TTestCase 
{
	typedef Testframework::TTestCase inherited;
	
public:
	__fastcall virtual TGUITestCase(AnsiString MethodName);
	__fastcall virtual ~TGUITestCase(void);
	virtual void __fastcall TearDown(void);
	
protected:
	Controls::TControl* FGUI;
	int FActionDelay;
	Controls::TControl* __fastcall FindControl(Classes::TComponent* Comp, const AnsiString CtlName, void * Addrs = (void *)(0x0))/* overload */;
	Controls::TControl* __fastcall FindControl(const AnsiString AName, void * Addrs = (void *)(0x0))/* overload */;
	Controls::TWinControl* __fastcall FindParentWinControl(Controls::TControl* Control);
	void __fastcall SetKeyboardStateDown(Controls::TWinControl* pControl, Classes::TShiftState pShiftState);
	void __fastcall SetKeyboardStateUp(Controls::TWinControl* pControl, Classes::TShiftState pShiftState);
	void __fastcall ClickLeftMouseButtonOn(Controls::TControl* Control);
	void __fastcall Click(void)/* overload */;
	void __fastcall Click(AnsiString ControlName)/* overload */;
	void __fastcall Click(Controls::TControl* control)/* overload */;
	void __fastcall EnterKey(Word Key, const Classes::TShiftState ShiftState = System::Set<Classes__1, ssShift, ssDouble> () )/* overload */;
	void __fastcall EnterKeyInto(Controls::TControl* Control, Word Key, const Classes::TShiftState ShiftState = System::Set<Classes__1, ssShift, ssDouble> () )/* overload */;
	void __fastcall EnterKeyInto(AnsiString ControlName, Word Key, const Classes::TShiftState ShiftState = System::Set<Classes__1, ssShift, ssDouble> () )/* overload */;
	void __fastcall EnterKey(char Key, const Classes::TShiftState ShiftState = System::Set<Classes__1, ssShift, ssDouble> () )/* overload */;
	void __fastcall EnterKeyInto(Controls::TControl* Control, char Key, const Classes::TShiftState ShiftState = System::Set<Classes__1, ssShift, ssDouble> () )/* overload */;
	void __fastcall EnterKeyInto(AnsiString ControlName, char Key, const Classes::TShiftState ShiftState = System::Set<Classes__1, ssShift, ssDouble> () )/* overload */;
	void __fastcall EnterText(AnsiString Text);
	void __fastcall EnterTextInto(Controls::TControl* Control, AnsiString Text)/* overload */;
	void __fastcall EnterTextInto(AnsiString ControlName, AnsiString Text)/* overload */;
	void __fastcall Show(bool OnOff = true)/* overload */;
	void __fastcall Show(Controls::TControl* Control, bool OnOff = true)/* overload */;
	void __fastcall Show(AnsiString ControlName, bool OnOff = true)/* overload */;
	void __fastcall Hide(void)/* overload */;
	void __fastcall Hide(Controls::TControl* Control)/* overload */;
	void __fastcall Hide(AnsiString ControlName)/* overload */;
	void __fastcall Tab(int n = 0x1);
	void __fastcall CheckTabTo(Controls::TControl* Control, void * Addrs = (void *)(0x0))/* overload */;
	void __fastcall CheckTabTo(AnsiString ControlName)/* overload */;
	Controls::TControl* __fastcall GetFocused(void);
	bool __fastcall IsFocused(Controls::TControl* Control);
	void __fastcall SetFocus(Controls::TControl* Control, void * Addrs = (void *)(0x0))/* overload */;
	void __fastcall SetFocus(AnsiString ControlName)/* overload */;
	void __fastcall CheckFocused(Controls::TControl* Control, void * Addrs = (void *)(0x0))/* overload */;
	void __fastcall CheckFocused(AnsiString ControlName)/* overload */;
	void __fastcall CheckEnabled(Controls::TControl* Control, void * Addrs = (void *)(0x0))/* overload */;
	void __fastcall CheckEnabled(AnsiString ControlName)/* overload */;
	void __fastcall CheckVisible(Controls::TControl* Control, void * Addrs = (void *)(0x0))/* overload */;
	void __fastcall CheckVisible(AnsiString ControlName)/* overload */;
	void __fastcall CheckVisible(void)/* overload */;
	__property Controls::TControl* GUI = {read=FGUI, write=FGUI};
	__property int ActionDelay = {read=FActionDelay, write=FActionDelay, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString rcs_id;

}	/* namespace Guitesting */
using namespace Guitesting;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// GUITesting
