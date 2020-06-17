// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TestFramework.pas' rev: 6.00

#ifndef TestFrameworkHPP
#define TestFrameworkHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <IniFiles.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Testframework
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TTestMethod)(void);

typedef void __fastcall (*TTestProc)(void);

typedef TMetaClass*TTestCaseClass;

typedef TMetaClass*ExceptionClass;

class DELPHICLASS ETestFailure;
class PASCALIMPLEMENTATION ETestFailure : public Sysutils::EAbort 
{
	typedef Sysutils::EAbort inherited;
	
public:
	__fastcall ETestFailure(void)/* overload */;
	__fastcall ETestFailure(AnsiString msg)/* overload */;
public:
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall ETestFailure(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : Sysutils::EAbort(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall ETestFailure(int Ident)/* overload */ : Sysutils::EAbort(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall ETestFailure(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : Sysutils::EAbort(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall ETestFailure(const AnsiString Msg, int AHelpContext) : Sysutils::EAbort(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall ETestFailure(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : Sysutils::EAbort(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall ETestFailure(int Ident, int AHelpContext)/* overload */ : Sysutils::EAbort(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestFailure(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::EAbort(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~ETestFailure(void) { }
	#pragma option pop
	
};


class DELPHICLASS EDunitException;
class PASCALIMPLEMENTATION EDunitException : public Sysutils::Exception 
{
	typedef Sysutils::Exception inherited;
	
public:
	#pragma option push -w-inl
	/* Exception.Create */ inline __fastcall EDunitException(const AnsiString Msg) : Sysutils::Exception(Msg) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall EDunitException(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall EDunitException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall EDunitException(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall EDunitException(const AnsiString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall EDunitException(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall EDunitException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall EDunitException(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~EDunitException(void) { }
	#pragma option pop
	
};


class DELPHICLASS ETestError;
class PASCALIMPLEMENTATION ETestError : public EDunitException 
{
	typedef EDunitException inherited;
	
public:
	#pragma option push -w-inl
	/* Exception.Create */ inline __fastcall ETestError(const AnsiString Msg) : EDunitException(Msg) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall ETestError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : EDunitException(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall ETestError(int Ident)/* overload */ : EDunitException(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall ETestError(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : EDunitException(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall ETestError(const AnsiString Msg, int AHelpContext) : EDunitException(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall ETestError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : EDunitException(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall ETestError(int Ident, int AHelpContext)/* overload */ : EDunitException(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestError(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : EDunitException(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~ETestError(void) { }
	#pragma option pop
	
};


class DELPHICLASS EStopTestsFailure;
class PASCALIMPLEMENTATION EStopTestsFailure : public ETestFailure 
{
	typedef ETestFailure inherited;
	
public:
	#pragma option push -w-inl
	/* ETestFailure.Create */ inline __fastcall EStopTestsFailure(void)/* overload */ : ETestFailure() { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall EStopTestsFailure(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : ETestFailure(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall EStopTestsFailure(int Ident)/* overload */ : ETestFailure(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall EStopTestsFailure(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : ETestFailure(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall EStopTestsFailure(const AnsiString Msg, int AHelpContext) : ETestFailure(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall EStopTestsFailure(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : ETestFailure(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall EStopTestsFailure(int Ident, int AHelpContext)/* overload */ : ETestFailure(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall EStopTestsFailure(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : ETestFailure(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~EStopTestsFailure(void) { }
	#pragma option pop
	
};


class DELPHICLASS EPostTestFailure;
class PASCALIMPLEMENTATION EPostTestFailure : public ETestFailure 
{
	typedef ETestFailure inherited;
	
public:
	#pragma option push -w-inl
	/* ETestFailure.Create */ inline __fastcall EPostTestFailure(void)/* overload */ : ETestFailure() { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall EPostTestFailure(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : ETestFailure(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall EPostTestFailure(int Ident)/* overload */ : ETestFailure(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall EPostTestFailure(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : ETestFailure(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall EPostTestFailure(const AnsiString Msg, int AHelpContext) : ETestFailure(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall EPostTestFailure(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : ETestFailure(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall EPostTestFailure(int Ident, int AHelpContext)/* overload */ : ETestFailure(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall EPostTestFailure(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : ETestFailure(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~EPostTestFailure(void) { }
	#pragma option pop
	
};


typedef int TAllowedLeakArray[4];

typedef int __fastcall (__closure *TListIterator)(void);

__interface IMemLeakMonitor;
typedef System::DelphiInterface<IMemLeakMonitor> _di_IMemLeakMonitor;
__interface INTERFACE_UUID("{041368CC-5B04-4111-9E2E-05A5908B3A58}") IMemLeakMonitor  : public IInterface 
{
	
public:
	virtual bool __fastcall MemLeakDetected(/* out */ int &LeakSize) = 0 ;
};

__interface IDUnitMemLeakMonitor;
typedef System::DelphiInterface<IDUnitMemLeakMonitor> _di_IDUnitMemLeakMonitor;
__interface INTERFACE_UUID("{45466FCA-1ADC-4457-A41C-88FA3F8D23F7}") IDUnitMemLeakMonitor  : public IMemLeakMonitor 
{
	
public:
	HIDESBASE virtual bool __fastcall MemLeakDetected(const int AllowedLeakSize, const bool FailOnMemoryRecovery, /* out */ int &LeakSize) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall MemLeakDetected(const TListIterator AllowedValuesGetter, const bool FailOnMemoryRecovery, /* out */ int &LeakIndex, /* out */ int &LeakSize) = 0 /* overload */;
	virtual bool __fastcall GetMemoryUseMsg(const bool FailOnMemoryRecovery, const int TestProcChangedMem, /* out */ AnsiString &ErrorMsg) = 0 /* overload */;
	virtual bool __fastcall GetMemoryUseMsg(const bool FailOnMemoryRecovery, const int TestSetupChangedMem, const int TestProcChangedMem, const int TestTearDownChangedMem, const int TestCaseChangedMem, /* out */ AnsiString &ErrorMsg) = 0 /* overload */;
	virtual void __fastcall MarkMemInUse(void) = 0 ;
};

class DELPHICLASS EBreakingTestFailure;
class PASCALIMPLEMENTATION EBreakingTestFailure : public EDunitException 
{
	typedef EDunitException inherited;
	
public:
	__fastcall EBreakingTestFailure(void)/* overload */;
	__fastcall EBreakingTestFailure(AnsiString msg)/* overload */;
public:
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall EBreakingTestFailure(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : EDunitException(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall EBreakingTestFailure(int Ident)/* overload */ : EDunitException(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall EBreakingTestFailure(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : EDunitException(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall EBreakingTestFailure(const AnsiString Msg, int AHelpContext) : EDunitException(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall EBreakingTestFailure(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : EDunitException(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall EBreakingTestFailure(int Ident, int AHelpContext)/* overload */ : EDunitException(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall EBreakingTestFailure(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : EDunitException(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~EBreakingTestFailure(void) { }
	#pragma option pop
	
};


__interface ITest;
typedef System::DelphiInterface<ITest> _di_ITest;
class DELPHICLASS TTestResult;
__interface IStatusListener;
typedef System::DelphiInterface<IStatusListener> _di_IStatusListener;
__interface INTERFACE_UUID("{89CCD557-7DE1-4814-B033-ABAFE0870EC7}") ITest  : public IInterface 
{
	
public:
	virtual AnsiString __fastcall GetName(void) = 0 ;
	virtual int __fastcall CountTestCases(void) = 0 ;
	virtual int __fastcall CountEnabledTestCases(void) = 0 ;
	virtual Classes::_di_IInterfaceList __fastcall Tests(void) = 0 ;
	virtual void __fastcall SetUp(void) = 0 ;
	virtual void __fastcall TearDown(void) = 0 ;
	virtual TTestResult* __fastcall Run(void) = 0 /* overload */;
	virtual void __fastcall Run(TTestResult* testResult) = 0 /* overload */;
	virtual void __fastcall RunWithFixture(TTestResult* testResult) = 0 ;
	virtual void __fastcall RunTest(TTestResult* testResult) = 0 ;
	virtual bool __fastcall GetTestMethodInvoked(void) = 0 ;
	virtual void __fastcall SetTestMethodInvoked(const bool Value) = 0 ;
	__property bool TestMethodInvoked = {read=GetTestMethodInvoked, write=SetTestMethodInvoked};
	virtual bool __fastcall GetEnabled(void) = 0 ;
	virtual void __fastcall SetEnabled(bool Value) = 0 ;
	virtual void __fastcall SetStartTime(__int64 Value) = 0 ;
	virtual __int64 __fastcall GetStartTime(void) = 0 ;
	virtual void __fastcall SetStopTime(__int64 Value) = 0 ;
	virtual __int64 __fastcall GetStopTime(void) = 0 ;
	virtual unsigned __fastcall ElapsedTestTime(void) = 0 ;
	virtual void __fastcall SetStatusListener(_di_IStatusListener Listener) = 0 ;
	virtual AnsiString __fastcall GetStatus(void) = 0 ;
	virtual void __fastcall LoadConfiguration(const Inifiles::TCustomIniFile* iniFile, const AnsiString section) = 0 /* overload */;
	virtual void __fastcall LoadConfiguration(const AnsiString fileName, const bool useRegistry, const bool useMemIni) = 0 /* overload */;
	virtual void __fastcall SaveConfiguration(const Inifiles::TCustomIniFile* iniFile, const AnsiString section) = 0 /* overload */;
	virtual void __fastcall SaveConfiguration(const AnsiString fileName, const bool useRegistry, const bool useMemIni) = 0 /* overload */;
	virtual void __fastcall SetGUIObject(const System::TObject* guiObject) = 0 ;
	virtual System::TObject* __fastcall GetGUIObject(void) = 0 ;
	__property AnsiString Name = {read=GetName};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled};
	__property System::TObject* GUIObject = {read=GetGUIObject, write=SetGUIObject};
	__property AnsiString Status = {read=GetStatus};
	__property __int64 StartTime = {read=GetStartTime, write=SetStartTime};
	__property __int64 StopTime = {read=GetStopTime, write=SetStopTime};
	virtual void __fastcall SetFailsOnNoChecksExecuted(const bool Value) = 0 ;
	virtual bool __fastcall GetFailsOnNoChecksExecuted(void) = 0 ;
	__property bool FailsOnNoChecksExecuted = {read=GetFailsOnNoChecksExecuted, write=SetFailsOnNoChecksExecuted};
	virtual bool __fastcall GetFailsOnMemoryLeak(void) = 0 ;
	virtual void __fastcall SetFailsOnMemoryLeak(const bool Value) = 0 ;
	__property bool FailsOnMemoryLeak = {read=GetFailsOnMemoryLeak, write=SetFailsOnMemoryLeak};
	virtual int __fastcall GetAllowedMemoryLeakSize(void) = 0 ;
	virtual void __fastcall SetAllowedMemoryLeakSize(const int NewSize) = 0 ;
	__property int AllowedMemoryLeakSize = {read=GetAllowedMemoryLeakSize, write=SetAllowedMemoryLeakSize};
	virtual bool __fastcall GetFailsOnMemoryRecovery(void) = 0 ;
	virtual void __fastcall SetFailsOnMemoryRecovery(const bool Value) = 0 ;
	__property bool FailsOnMemoryRecovery = {read=GetFailsOnMemoryRecovery, write=SetFailsOnMemoryRecovery};
	virtual void __fastcall SetAllowedLeakArray(const int * AllowedList, const int AllowedList_Size) = 0 ;
	virtual bool __fastcall GetIgnoreSetUpTearDownLeaks(void) = 0 ;
	virtual void __fastcall SetIgnoreSetUpTearDownLeaks(const bool Value) = 0 ;
	__property bool IgnoreSetUpTearDownLeaks = {read=GetIgnoreSetUpTearDownLeaks, write=SetIgnoreSetUpTearDownLeaks};
	virtual int __fastcall GetAllowedLeak(void) = 0 ;
	virtual TListIterator __fastcall GetAllowedLeaksIterator(void) = 0 ;
	__property TListIterator AllowedLeaksIterator = {read=GetAllowedLeaksIterator};
};

__interface ITestDecorator;
typedef System::DelphiInterface<ITestDecorator> _di_ITestDecorator;
__interface INTERFACE_UUID("{8B3FC229-3033-4590-AD5C-01914C6E2C9F}") ITestDecorator  : public ITest 
{
	
public:
	virtual _di_ITest __fastcall GetTest(void) = 0 ;
	__property _di_ITest Test = {read=GetTest};
};

__interface INTERFACE_UUID("{8681DC88-033C-4A42-84F4-4C52EF9ABAC0}") IStatusListener  : public IInterface 
{
	
public:
	virtual void __fastcall Status(_di_ITest test, const AnsiString Msg) = 0 ;
};

__interface ITestListener;
typedef System::DelphiInterface<ITestListener> _di_ITestListener;
class DELPHICLASS TTestFailure;
__interface INTERFACE_UUID("{114185BC-B36B-4C68-BDAB-273DBD450F72}") ITestListener  : public IStatusListener 
{
	
public:
	virtual void __fastcall TestingStarts(void) = 0 ;
	virtual void __fastcall StartTest(_di_ITest test) = 0 ;
	virtual void __fastcall AddSuccess(_di_ITest test) = 0 ;
	virtual void __fastcall AddError(TTestFailure* error) = 0 ;
	virtual void __fastcall AddFailure(TTestFailure* Failure) = 0 ;
	virtual void __fastcall EndTest(_di_ITest test) = 0 ;
	virtual void __fastcall TestingEnds(TTestResult* testResult) = 0 ;
	virtual bool __fastcall ShouldRunTest(_di_ITest test) = 0 ;
};

__interface ITestListenerX;
typedef System::DelphiInterface<ITestListenerX> _di_ITestListenerX;
__interface INTERFACE_UUID("{5C28B1BE-38B5-4D6F-AA96-A04E9302C317}") ITestListenerX  : public ITestListener 
{
	
public:
	virtual void __fastcall StartSuite(_di_ITest suite) = 0 ;
	virtual void __fastcall EndSuite(_di_ITest suite) = 0 ;
};

__interface ITestSuite;
typedef System::DelphiInterface<ITestSuite> _di_ITestSuite;
__interface INTERFACE_UUID("{C20E38EF-7369-44D9-9D84-08E84EC1DCF0}") ITestSuite  : public ITest 
{
	
public:
	virtual void __fastcall AddTest(_di_ITest test) = 0 ;
	virtual void __fastcall AddSuite(_di_ITestSuite suite) = 0 ;
};

class DELPHICLASS TStatusToResultAdapter;
class PASCALIMPLEMENTATION TStatusToResultAdapter : public System::TInterfacedObject 
{
	typedef System::TInterfacedObject inherited;
	
protected:
	TTestResult* FTestResult;
	
public:
	__fastcall TStatusToResultAdapter(TTestResult* TestResult);
	void __fastcall Status(_di_ITest Test, const AnsiString Msg);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TStatusToResultAdapter(void) { }
	#pragma option pop
	
private:
	void *__IStatusListener;	/* Testframework::IStatusListener */
	
public:
	operator IStatusListener*(void) { return (IStatusListener*)&__IStatusListener; }
	
};


class PASCALIMPLEMENTATION TTestResult : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	__int64 FTotalTime;
	
protected:
	Classes::TList* FFailures;
	Classes::TList* FErrors;
	int FOverRides;
	Classes::_di_IInterfaceList FListeners;
	_di_ITest FRootTest;
	int FRunTests;
	bool FStop;
	bool FBreakOnFailures;
	bool FFailsIfNoChecksExecuted;
	bool FIgnoresMemoryLeakInSetUpTearDown;
	bool FMemoryLeakIgnoredInSetupOrTearDown;
	bool FFailsIfMemoryLeaked;
	void *FMethodPtr;
	_di_IStatusListener FStatusAdapter;
	virtual void __fastcall Run(_di_ITest test);
	virtual bool __fastcall RunTestSetup(_di_ITest test);
	virtual void __fastcall RunTestTearDown(_di_ITest test);
	virtual bool __fastcall RunTestRun(_di_ITest test);
	virtual void __fastcall TestingStarts(void);
	virtual void __fastcall StartSuite(_di_ITest suite);
	virtual void __fastcall StartTest(_di_ITest test);
	virtual bool __fastcall ShouldRunTest(_di_ITest test);
	virtual void __fastcall Status(_di_ITest test, const AnsiString Msg);
	virtual void __fastcall EndSuite(_di_ITest suite);
	virtual void __fastcall EndTest(_di_ITest test);
	virtual void __fastcall TestingEnds(void);
	
public:
	__fastcall TTestResult(void);
	__fastcall virtual ~TTestResult(void);
	virtual void __fastcall AddListener(_di_ITestListener listener);
	void __fastcall RunSuite(_di_ITest test)/* overload */;
	virtual void __fastcall AddSuccess(_di_ITest test);
	TTestFailure* __fastcall AddFailure(_di_ITest test, Sysutils::Exception* e, void * Addrs)/* overload */;
	TTestFailure* __fastcall AddFailure(_di_ITest test, void * Addrs, AnsiString msg = "")/* overload */;
	virtual TTestFailure* __fastcall AddError(_di_ITest test, Sysutils::Exception* e, void * Addrs, AnsiString msg = "");
	virtual void __fastcall Stop(void);
	virtual bool __fastcall ShouldStop(void);
	virtual int __fastcall RunCount(void);
	virtual int __fastcall ErrorCount(void);
	virtual int __fastcall FailureCount(void);
	TTestFailure* __fastcall GetError(int idx);
	TTestFailure* __fastcall GetFailure(int idx);
	virtual bool __fastcall WasStopped(void);
	virtual bool __fastcall WasSuccessful(void);
	__property bool BreakOnFailures = {read=FBreakOnFailures, write=FBreakOnFailures, nodefault};
	__property bool FailsIfNoChecksExecuted = {read=FFailsIfNoChecksExecuted, write=FFailsIfNoChecksExecuted, nodefault};
	__property bool FailsIfMemoryLeaked = {read=FFailsIfMemoryLeaked, write=FFailsIfMemoryLeaked, nodefault};
	__property bool IgnoresMemoryLeakInSetUpTearDown = {read=FIgnoresMemoryLeakInSetUpTearDown, write=FIgnoresMemoryLeakInSetUpTearDown, nodefault};
	__property bool MemoryLeakIgnoredInSetupOrTearDown = {read=FMemoryLeakIgnoredInSetupOrTearDown, write=FMemoryLeakIgnoredInSetupOrTearDown, nodefault};
	__property __int64 TotalTime = {read=FTotalTime};
	__property TTestFailure* Errors[int i] = {read=GetError};
	__property TTestFailure* Failures[int i] = {read=GetFailure};
	__property int OverRides = {read=FOverRides, write=FOverRides, nodefault};
};


class DELPHICLASS TAbstractTest;
class PASCALIMPLEMENTATION TAbstractTest : public System::TInterfacedObject 
{
	typedef System::TInterfacedObject inherited;
	
protected:
	AnsiString FTestName;
	bool FEnabled;
	__int64 FStartTime;
	__int64 FStopTime;
	_di_IStatusListener FStatusListener;
	Classes::TStrings* FStatusStrings;
	TMetaClass*FExpectedException;
	bool FCheckCalled;
	bool FFailsOnNoChecksExecuted;
	bool FFailsOnMemoryLeak;
	bool FTestMethodInvoked;
	bool FFailsOnMemoryRecovery;
	bool FIgnoreSetUpTearDownLeaks;
	bool FMemoryLeakIgnoredInSetupTearDown;
	int FAllowedLeakList[4];
	Word FAllowedLeakListIndex;
	System::TObject* FGUIObject;
	virtual void __fastcall Invoke(TTestMethod AMethod);
	virtual void __fastcall RunWithFixture(TTestResult* testResult);
	virtual void __fastcall RunTest(TTestResult* testResult);
	virtual void __fastcall SetUp(void);
	virtual void __fastcall TearDown(void);
	virtual void __fastcall SetStartTime(__int64 Value);
	virtual __int64 __fastcall GetStartTime(void);
	virtual void __fastcall SetStopTime(__int64 Value);
	virtual __int64 __fastcall GetStopTime(void);
	void __fastcall SetGUIObject(const System::TObject* guiObject);
	System::TObject* __fastcall GetGUIObject(void);
	void __fastcall SetFailsOnNoChecksExecuted(const bool Value);
	bool __fastcall GetFailsOnNoChecksExecuted(void);
	bool __fastcall GetFailsOnMemoryLeak(void);
	void __fastcall SetFailsOnMemoryLeak(const bool Value);
	AnsiString __fastcall GetMemDiffStr(void * expected, void * actual, unsigned size, AnsiString msg);
	int __fastcall GetAllowedMemoryLeakSize(void);
	void __fastcall SetAllowedMemoryLeakSize(const int NewSize);
	bool __fastcall GetFailsOnMemoryRecovery(void);
	void __fastcall SetFailsOnMemoryRecovery(const bool Value);
	bool __fastcall GetIgnoreSetUpTearDownLeaks(void);
	void __fastcall SetIgnoreSetUpTearDownLeaks(const bool Value);
	bool __fastcall GetMemoryLeakIgnoredInSetupTearDown(void);
	void __fastcall SetMemoryLeakIgnoredInSetupTearDown(const bool Value);
	void __fastcall SetAllowedLeakArray(const int * AllowedList, const int AllowedList_Size);
	int __fastcall GetAllowedLeak(void);
	TListIterator __fastcall GetAllowedLeaksIterator();
	
public:
	__fastcall TAbstractTest(AnsiString AName);
	__fastcall virtual ~TAbstractTest(void);
	virtual AnsiString __fastcall GetName();
	virtual bool __fastcall GetEnabled(void);
	virtual void __fastcall SetEnabled(bool value);
	virtual Classes::_di_IInterfaceList __fastcall Tests();
	virtual int __fastcall CountTestCases(void);
	virtual int __fastcall CountEnabledTestCases(void);
	TTestResult* __fastcall Run(void)/* overload */;
	void __fastcall Run(TTestResult* testResult)/* overload */;
	bool __fastcall GetTestMethodInvoked(void);
	void __fastcall SetTestMethodInvoked(const bool Value);
	virtual unsigned __fastcall ElapsedTestTime(void);
	void __fastcall SetStatusListener(_di_IStatusListener Listener);
	void __fastcall Status(const AnsiString Msg);
	AnsiString __fastcall GetStatus();
	void __fastcall LoadConfiguration(const AnsiString fileName, const bool useRegistry, const bool useMemIni)/* overload */;
	virtual void __fastcall LoadConfiguration(const Inifiles::TCustomIniFile* iniFile, const AnsiString section)/* overload */;
	void __fastcall SaveConfiguration(const AnsiString fileName, const bool useRegistry, const bool useMemIni)/* overload */;
	virtual void __fastcall SaveConfiguration(const Inifiles::TCustomIniFile* iniFile, const AnsiString section)/* overload */;
	__property AnsiString Name = {read=GetName};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, nodefault};
	AnsiString __fastcall BoolToStr(bool ABool);
	virtual void __fastcall Check(bool condition, AnsiString msg = "");
	virtual void __fastcall CheckTrue(bool condition, AnsiString msg = "");
	virtual void __fastcall CheckFalse(bool condition, AnsiString msg = "");
	virtual void __fastcall CheckEquals(Extended expected, Extended actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckEquals(Extended expected, Extended actual, Extended delta, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckEquals(int expected, int actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckEquals(AnsiString expected, AnsiString actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckEqualsString(AnsiString expected, AnsiString actual, AnsiString msg = "");
	virtual void __fastcall CheckEquals(WideString expected, WideString actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckEqualsWideString(WideString expected, WideString actual, AnsiString msg = "");
	virtual void __fastcall CheckEqualsMem(void * expected, void * actual, unsigned size, AnsiString msg = "");
	virtual void __fastcall CheckEquals(bool expected, bool actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckEqualsBin(unsigned expected, unsigned actual, AnsiString msg = "", int digits = 0x20);
	virtual void __fastcall CheckEqualsHex(unsigned expected, unsigned actual, AnsiString msg = "", int digits = 0x8);
	virtual void __fastcall CheckNotEquals(int expected, int actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckNotEquals(Extended expected, Extended actual, Extended delta = 0.000000E+00, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckNotEquals(AnsiString expected, AnsiString actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckNotEqualsString(AnsiString expected, AnsiString actual, AnsiString msg = "");
	virtual void __fastcall CheckNotEquals(const WideString expected, const WideString actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckNotEqualsWideString(const WideString expected, const WideString actual, AnsiString msg = "");
	virtual void __fastcall CheckNotEqualsMem(void * expected, void * actual, unsigned size, AnsiString msg = "");
	virtual void __fastcall CheckNotEquals(bool expected, bool actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckNotEqualsBin(unsigned expected, unsigned actual, AnsiString msg = "", int digits = 0x20);
	virtual void __fastcall CheckNotEqualsHex(unsigned expected, unsigned actual, AnsiString msg = "", int digits = 0x8);
	virtual void __fastcall CheckNotNull(System::_di_IInterface obj, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckNull(System::_di_IInterface obj, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckSame(System::_di_IInterface expected, System::_di_IInterface actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckSame(System::TObject* expected, System::TObject* actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckNotNull(System::TObject* obj, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckNull(System::TObject* obj, AnsiString msg = "")/* overload */;
	void __fastcall CheckException(TTestMethod AMethod, TMetaClass* AExceptionClass, AnsiString msg = "");
	virtual void __fastcall CheckEquals(TMetaClass* expected, TMetaClass* actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckInherits(TMetaClass* expected, TMetaClass* actual, AnsiString msg = "")/* overload */;
	virtual void __fastcall CheckIs(System::TObject* AObject, TMetaClass* AClass, AnsiString msg = "")/* overload */;
	virtual void __fastcall Fail(AnsiString msg, void * ErrorAddrs = (void *)(0x0))/* overload */;
	virtual void __fastcall FailEquals(WideString expected, WideString actual, AnsiString msg = "", void * ErrorAddrs = (void *)(0x0));
	virtual void __fastcall FailNotEquals(WideString expected, WideString actual, AnsiString msg = "", void * ErrorAddrs = (void *)(0x0));
	virtual void __fastcall FailNotSame(WideString expected, WideString actual, AnsiString msg = "", void * ErrorAddrs = (void *)(0x0));
	WideString __fastcall EqualsErrorMessage(WideString expected, WideString actual, AnsiString msg);
	WideString __fastcall NotEqualsErrorMessage(WideString expected, WideString actual, AnsiString msg);
	WideString __fastcall NotSameErrorMessage(AnsiString expected, AnsiString actual, AnsiString msg);
	virtual void __fastcall StopTests(AnsiString msg = "");
	void __fastcall CheckMethodIsNotEmpty(void * MethodPointer);
	void __fastcall StartExpectingException(TMetaClass* e);
	void __fastcall StopExpectingException(AnsiString msg = "");
	__property TMetaClass* ExpectedException = {read=FExpectedException, write=StartExpectingException};
	
__published:
	__property bool FailsOnNoChecksExecuted = {read=GetFailsOnNoChecksExecuted, write=SetFailsOnNoChecksExecuted, nodefault};
	__property bool FailsOnMemoryLeak = {read=GetFailsOnMemoryLeak, write=SetFailsOnMemoryLeak, nodefault};
	__property bool TestMethodInvoked = {read=GetTestMethodInvoked, write=SetTestMethodInvoked, nodefault};
	__property int AllowedMemoryLeakSize = {read=GetAllowedMemoryLeakSize, write=SetAllowedMemoryLeakSize, nodefault};
	__property TListIterator AllowedLeaksIterator = {read=GetAllowedLeaksIterator};
	__property bool FailsOnMemoryRecovery = {read=GetFailsOnMemoryRecovery, write=SetFailsOnMemoryRecovery, nodefault};
	__property bool IgnoreSetUpTearDownLeaks = {read=GetIgnoreSetUpTearDownLeaks, write=SetIgnoreSetUpTearDownLeaks, nodefault};
private:
	void *__ITest;	/* Testframework::ITest */
	
public:
	operator ITest*(void) { return (ITest*)&__ITest; }
	
};


class DELPHICLASS TTestCase;
class PASCALIMPLEMENTATION TTestCase : public TAbstractTest 
{
	typedef TAbstractTest inherited;
	
protected:
	TTestMethod fMethod;
	virtual void __fastcall Invoke(TTestMethod AMethod);
	virtual void __fastcall RunWithFixture(TTestResult* testResult);
	virtual void __fastcall RunTest(TTestResult* testResult);
	
public:
	__fastcall virtual TTestCase(AnsiString MethodName);
	/* virtual class method */ virtual _di_ITestSuite __fastcall Suite(TMetaClass* vmt);
	HIDESBASE void __fastcall Run(TTestResult* testResult)/* overload */;
public:
	#pragma option push -w-inl
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TTestCase(void) { }
	#pragma option pop
	
	
/* Hoisted overloads: */
	
public:
	inline TTestResult* __fastcall  Run(void){ return TAbstractTest::Run(); }
	
private:
	void *__ITest;	/* Testframework::ITest */
	
public:
	operator ITest*(void) { return (ITest*)&__ITest; }
	
};


class DELPHICLASS TTestSuite;
class PASCALIMPLEMENTATION TTestSuite : public TAbstractTest 
{
	typedef TAbstractTest inherited;
	
protected:
	Classes::_di_IInterfaceList FTests;
	virtual void __fastcall RunTest(TTestResult* testResult);
	
public:
	__fastcall TTestSuite(void)/* overload */;
	__fastcall TTestSuite(AnsiString AName)/* overload */;
	__fastcall TTestSuite(TMetaClass* TestClass)/* overload */;
	__fastcall TTestSuite(AnsiString AName, _di_ITest * Tests, const int Tests_Size)/* overload */;
	virtual int __fastcall CountTestCases(void);
	virtual int __fastcall CountEnabledTestCases(void);
	virtual Classes::_di_IInterfaceList __fastcall Tests();
	virtual void __fastcall AddTest(_di_ITest ATest);
	virtual void __fastcall AddTests(TMetaClass* testClass);
	virtual void __fastcall AddSuite(_di_ITestSuite suite);
	virtual void __fastcall LoadConfiguration(const Inifiles::TCustomIniFile* iniFile, const AnsiString section)/* overload */;
	virtual void __fastcall SaveConfiguration(const Inifiles::TCustomIniFile* iniFile, const AnsiString section)/* overload */;
public:
	#pragma option push -w-inl
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TTestSuite(void) { }
	#pragma option pop
	
	
/* Hoisted overloads: */
	
public:
	inline void __fastcall  LoadConfiguration(const AnsiString fileName, const bool useRegistry, const bool useMemIni){ TAbstractTest::LoadConfiguration(fileName, useRegistry, useMemIni); }
	inline void __fastcall  SaveConfiguration(const AnsiString fileName, const bool useRegistry, const bool useMemIni){ TAbstractTest::SaveConfiguration(fileName, useRegistry, useMemIni); }
	
private:
	void *__ITestSuite;	/* Testframework::ITestSuite */
	
public:
	operator ITest*(void) { return (ITest*)&__ITestSuite; }
	operator ITestSuite*(void) { return (ITestSuite*)&__ITestSuite; }
	
};


class PASCALIMPLEMENTATION TTestFailure : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	_di_ITest FFailedTest;
	TMetaClass*FThrownExceptionClass;
	AnsiString FThrownExceptionMessage;
	void *FThrownExceptionAddress;
	AnsiString FStackTrace;
	void __fastcall CaptureStackTrace(void);
	
public:
	__fastcall TTestFailure(_di_ITest FailedTest, Sysutils::Exception* thrownException, void * Addrs, AnsiString msg)/* overload */;
	__fastcall TTestFailure(_di_ITest FailedTest, void * Addrs, AnsiString msg)/* overload */;
	virtual _di_ITest __fastcall FailedTest();
	virtual TMetaClass* __fastcall ThrownExceptionClass(void);
	virtual AnsiString __fastcall ThrownExceptionName();
	virtual AnsiString __fastcall ThrownExceptionMessage();
	virtual void * __fastcall ThrownExceptionAddress(void);
	virtual AnsiString __fastcall LocationInfo();
	virtual AnsiString __fastcall AddressInfo();
	virtual AnsiString __fastcall StackTrace();
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TTestFailure(void) { }
	#pragma option pop
	
};


typedef DynamicArray<AnsiString >  TestFramework__41;

class DELPHICLASS TMethodEnumerator;
class PASCALIMPLEMENTATION TMethodEnumerator : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	DynamicArray<AnsiString >  FMethodNameList;
	AnsiString __fastcall GetNameOfMethod(int idx);
	int __fastcall GetMethodCount(void);
	
public:
	__fastcall TMethodEnumerator(TMetaClass* AClass);
	__property int MethodCount = {read=GetMethodCount, nodefault};
	__property AnsiString NameOfMethod[int idx] = {read=GetNameOfMethod};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TMethodEnumerator(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString rcs_id;
extern PACKAGE AnsiString rcs_version;
#define sExpButWasFmt "%sexpected: <%s> but was: <%s>"
#define sExpAndActualFmt "%sexpected and actual were: <%s>"
extern PACKAGE _di_IMemLeakMonitor __fastcall MemLeakMonitor();
extern PACKAGE AnsiString __fastcall PtrToStr(void * p);
extern PACKAGE void * __fastcall CallerAddr(void);
extern PACKAGE AnsiString __fastcall PointerToLocationInfo(void * Addrs);
extern PACKAGE AnsiString __fastcall PointerToAddressInfo(void * Addrs);
extern PACKAGE bool __fastcall IsTestMethod(_di_ITest aTest);
extern PACKAGE bool __fastcall IsDecorator(_di_ITest aTest);
extern PACKAGE AnsiString __fastcall GetDUnitRegistryKey();
extern PACKAGE void __fastcall SetDUnitRegistryKey(const AnsiString NewKey);
extern PACKAGE int __fastcall FirstByteDiff(void * p1, void * p2, unsigned size, /* out */ Byte &b1, /* out */ Byte &b2);
extern PACKAGE _di_ITestSuite __fastcall TestSuite(AnsiString AName, _di_ITest * Tests, const int Tests_Size);
extern PACKAGE void __fastcall RegisterTest(AnsiString SuitePath, _di_ITest test)/* overload */;
extern PACKAGE void __fastcall RegisterTest(_di_ITest test)/* overload */;
extern PACKAGE void __fastcall RegisterTests(AnsiString SuitePath, _di_ITest * Tests, const int Tests_Size)/* overload */;
extern PACKAGE void __fastcall RegisterTests(_di_ITest * Tests, const int Tests_Size)/* overload */;
extern PACKAGE _di_ITestSuite __fastcall RegisteredTests();
extern PACKAGE TTestResult* __fastcall RunTest(_di_ITest suite, _di_ITestListener const * listeners, const int listeners_Size)/* overload */;
extern PACKAGE TTestResult* __fastcall RunRegisteredTests(_di_ITestListener const * listeners, const int listeners_Size);
extern PACKAGE void __fastcall ClearRegistry(void);

}	/* namespace Testframework */
using namespace Testframework;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TestFramework
