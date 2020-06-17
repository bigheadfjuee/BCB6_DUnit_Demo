// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitAbout.pas' rev: 6.00

#ifndef DUnitAboutHPP
#define DUnitAboutHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitabout
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitAboutBox;
class PASCALIMPLEMENTATION TDUnitAboutBox : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TPanel* MainPanel;
	Extctrls::TPanel* NamePanel;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TLabel* Label3;
	Stdctrls::TMemo* IdentMemo;
	Stdctrls::TMemo* Credits;
	Extctrls::TTimer* Timer;
	Extctrls::TPanel* LogoPanel;
	Extctrls::TImage* LogoImage;
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall TimerTimer(System::TObject* Sender);
	void __fastcall MainPanelClick(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	void __fastcall FormCreate(System::TObject* Sender);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TDUnitAboutBox(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDUnitAboutBox(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDUnitAboutBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TDUnitAboutBox(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString rcs_id;
extern PACKAGE void __fastcall Splash(void);

}	/* namespace Dunitabout */
using namespace Dunitabout;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DUnitAbout
