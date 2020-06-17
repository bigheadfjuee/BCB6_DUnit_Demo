// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TextTestRunner.pas' rev: 6.00

#ifndef TextTestRunnerHPP
#define TextTestRunnerHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <TestFramework.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Texttestrunner
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TRunnerExitBehavior { rxbContinue, rxbPause, rxbHaltOnFailures };
#pragma option pop

class DELPHICLASS TTextTestListener;
class PASCALIMPLEMENTATION TTextTestListener : public System::TInterfacedObject 
{
	typedef System::TInterfacedObject inherited;
	
protected:
	System::TDateTime startTime;
	System::TDateTime endTime;
	System::TDateTime runTime;
	
public:
	virtual void __fastcall AddSuccess(Testframework::_di_ITest test);
	virtual void __fastcall AddError(Testframework::TTestFailure* error);
	virtual void __fastcall AddFailure(Testframework::TTestFailure* failure);
	virtual bool __fastcall ShouldRunTest(Testframework::_di_ITest test);
	virtual void __fastcall StartSuite(Testframework::_di_ITest suite);
	virtual void __fastcall EndSuite(Testframework::_di_ITest suite);
	virtual void __fastcall StartTest(Testframework::_di_ITest test);
	virtual void __fastcall EndTest(Testframework::_di_ITest test);
	virtual void __fastcall TestingStarts(void);
	virtual void __fastcall TestingEnds(Testframework::TTestResult* testResult);
	void __fastcall Status(Testframework::_di_ITest test, const AnsiString Msg);
	void __fastcall Warning(Testframework::_di_ITest test, const AnsiString Msg);
	AnsiString __fastcall Report(Testframework::TTestResult* r);
	/*         class method */ static Testframework::TTestResult* __fastcall RunTest(TMetaClass* vmt, Testframework::_di_ITest suite, TRunnerExitBehavior exitBehavior = (TRunnerExitBehavior)(0x0))/* overload */;
	/*         class method */ static Testframework::TTestResult* __fastcall RunRegisteredTests(TMetaClass* vmt, TRunnerExitBehavior exitBehavior = (TRunnerExitBehavior)(0x0));
	
protected:
	virtual AnsiString __fastcall PrintErrors(Testframework::TTestResult* r);
	virtual AnsiString __fastcall PrintFailures(Testframework::TTestResult* r);
	virtual AnsiString __fastcall PrintHeader(Testframework::TTestResult* r);
	virtual AnsiString __fastcall PrintFailureItems(Testframework::TTestResult* r);
	virtual AnsiString __fastcall PrintErrorItems(Testframework::TTestResult* r);
	virtual AnsiString __fastcall TruncateString(AnsiString s, int len);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TTextTestListener(void) : System::TInterfacedObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TTextTestListener(void) { }
	#pragma option pop
	
private:
	void *__ITestListenerX;	/* Testframework::ITestListenerX */
	
public:
	operator ITestListenerX*(void) { return (ITestListenerX*)&__ITestListenerX; }
	operator ITestListener*(void) { return (ITestListener*)&__ITestListenerX; }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString rcs_id;
extern PACKAGE Testframework::TTestResult* __fastcall RunTest(Testframework::_di_ITest suite, TRunnerExitBehavior exitBehavior = (TRunnerExitBehavior)(0x0))/* overload */;
extern PACKAGE Testframework::TTestResult* __fastcall RunRegisteredTests(TRunnerExitBehavior exitBehavior = (TRunnerExitBehavior)(0x0))/* overload */;

}	/* namespace Texttestrunner */
using namespace Texttestrunner;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TextTestRunner
