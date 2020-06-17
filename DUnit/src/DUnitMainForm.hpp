// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitMainForm.pas' rev: 6.00

#ifndef DUnitMainFormHPP
#define DUnitMainFormHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Forms.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ToolWin.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <GUITestRunner.hpp>	// Pascal unit
#include <TestFramework.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitmainform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitForm;
class PASCALIMPLEMENTATION TDUnitForm : public Guitestrunner::TGUITestRunner 
{
	typedef Guitestrunner::TGUITestRunner inherited;
	
__published:
	Actnlist::TActionList* DUnitActions;
	Actnlist::TAction* LoadTestsAction;
	Actnlist::TAction* UnloadTestscAction;
	Dialogs::TOpenDialog* OpenTestsDialog;
	Menus::TMenuItem* LoadTests1;
	Actnlist::TAction* AboutAction;
	Menus::TMenuItem* Help1;
	Menus::TMenuItem* AboutItem;
	void __fastcall LoadTestsActionExecute(System::TObject* Sender);
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	HIDESBASE void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall AboutActionExecute(System::TObject* Sender);
	
protected:
	Testframework::_di_ITestSuite FRootSuite;
	
public:
	__property Testframework::_di_ITestSuite RootSuite = {read=FRootSuite};
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TDUnitForm(Classes::TComponent* AOwner) : Guitestrunner::TGUITestRunner(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDUnitForm(Classes::TComponent* AOwner, int Dummy) : Guitestrunner::TGUITestRunner(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDUnitForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TDUnitForm(HWND ParentWindow) : Guitestrunner::TGUITestRunner(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString rcs_id;
extern PACKAGE TDUnitForm* DUnitForm;

}	/* namespace Dunitmainform */
using namespace Dunitmainform;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DUnitMainForm
