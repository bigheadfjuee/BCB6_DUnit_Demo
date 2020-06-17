// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TestExtensions.pas' rev: 6.00

#ifndef TestExtensionsHPP
#define TestExtensionsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <TestFramework.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Testextensions
{
//-- type declarations -------------------------------------------------------
typedef int TMemorySize;

class DELPHICLASS TTestDecorator;
class PASCALIMPLEMENTATION TTestDecorator : public Testframework::TAbstractTest 
{
	typedef Testframework::TAbstractTest inherited;
	
protected:
	AnsiString FName;
	Testframework::_di_ITest FTest;
	Classes::_di_IInterfaceList FTests;
	Testframework::_di_ITest __fastcall GetTest();
	virtual void __fastcall RunTest(Testframework::TTestResult* ATestResult);
	
public:
	__fastcall TTestDecorator(Testframework::_di_ITest ATest, AnsiString AName);
	virtual int __fastcall CountTestCases(void);
	virtual int __fastcall CountEnabledTestCases(void);
	virtual AnsiString __fastcall GetName();
	virtual Classes::_di_IInterfaceList __fastcall Tests();
	virtual void __fastcall LoadConfiguration(const Inifiles::TCustomIniFile* iniFile, const AnsiString section)/* overload */;
	virtual void __fastcall SaveConfiguration(const Inifiles::TCustomIniFile* iniFile, const AnsiString section)/* overload */;
	__property Testframework::_di_ITest Test = {read=GetTest};
public:
	#pragma option push -w-inl
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TTestDecorator(void) { }
	#pragma option pop
	
	
/* Hoisted overloads: */
	
public:
	inline void __fastcall  LoadConfiguration(const AnsiString fileName, const bool useRegistry, const bool useMemIni){ TAbstractTest::LoadConfiguration(fileName, useRegistry, useMemIni); }
	inline void __fastcall  SaveConfiguration(const AnsiString fileName, const bool useRegistry, const bool useMemIni){ TAbstractTest::SaveConfiguration(fileName, useRegistry, useMemIni); }
	
private:
	void *__ITestDecorator;	/* Testframework::ITestDecorator */
	
public:
	operator ITest*(void) { return (ITest*)&__ITestDecorator; }
	operator ITestDecorator*(void) { return (ITestDecorator*)&__ITestDecorator; }
	
};


class DELPHICLASS TTestSetup;
class PASCALIMPLEMENTATION TTestSetup : public TTestDecorator 
{
	typedef TTestDecorator inherited;
	
public:
	__fastcall TTestSetup(Testframework::_di_ITest ATest, AnsiString AName);
	virtual AnsiString __fastcall GetName();
public:
	#pragma option push -w-inl
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TTestSetup(void) { }
	#pragma option pop
	
};


__interface IRepeatedTest;
typedef System::DelphiInterface<IRepeatedTest> _di_IRepeatedTest;
__interface INTERFACE_UUID("{DF3B52FF-2645-42C2-958A-174FF87A19B8}") IRepeatedTest  : public IInterface 
{
	
public:
	virtual bool __fastcall GetHaltOnError(void) = 0 ;
	virtual void __fastcall SetHaltOnError(const bool Value) = 0 ;
	__property bool HaltOnError = {read=GetHaltOnError, write=SetHaltOnError};
};

class DELPHICLASS TRepeatedTest;
class PASCALIMPLEMENTATION TRepeatedTest : public TTestDecorator 
{
	typedef TTestDecorator inherited;
	
private:
	int FTimesRepeat;
	bool FHaltOnError;
	bool __fastcall GetHaltOnError(void);
	void __fastcall SetHaltOnError(const bool Value);
	
protected:
	virtual void __fastcall RunTest(Testframework::TTestResult* ATestResult);
	
public:
	__fastcall TRepeatedTest(Testframework::_di_ITest ATest, int Iterations, AnsiString AName);
	virtual AnsiString __fastcall GetName();
	virtual int __fastcall CountTestCases(void);
	virtual int __fastcall CountEnabledTestCases(void);
	
__published:
	__property bool HaltOnError = {read=GetHaltOnError, write=SetHaltOnError, nodefault};
public:
	#pragma option push -w-inl
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TRepeatedTest(void) { }
	#pragma option pop
	
private:
	void *__IRepeatedTest;	/* Testextensions::IRepeatedTest */
	
public:
	operator IRepeatedTest*(void) { return (IRepeatedTest*)&__IRepeatedTest; }
	
};


class DELPHICLASS TActiveTest;
class PASCALIMPLEMENTATION TActiveTest : public TTestDecorator 
{
	typedef TTestDecorator inherited;
	
public:
	#pragma option push -w-inl
	/* TTestDecorator.Create */ inline __fastcall TActiveTest(Testframework::_di_ITest ATest, AnsiString AName) : TTestDecorator(ATest, AName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TActiveTest(void) { }
	#pragma option pop
	
};


class DELPHICLASS TExceptionTestCase;
class PASCALIMPLEMENTATION TExceptionTestCase : public TTestDecorator 
{
	typedef TTestDecorator inherited;
	
public:
	#pragma option push -w-inl
	/* TTestDecorator.Create */ inline __fastcall TExceptionTestCase(Testframework::_di_ITest ATest, AnsiString AName) : TTestDecorator(ATest, AName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TExceptionTestCase(void) { }
	#pragma option pop
	
};


class DELPHICLASS EMemoryError;
class PASCALIMPLEMENTATION EMemoryError : public Testframework::ETestFailure 
{
	typedef Testframework::ETestFailure inherited;
	
public:
	#pragma option push -w-inl
	/* ETestFailure.Create */ inline __fastcall EMemoryError(void)/* overload */ : Testframework::ETestFailure() { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall EMemoryError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : Testframework::ETestFailure(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall EMemoryError(int Ident)/* overload */ : Testframework::ETestFailure(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall EMemoryError(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : Testframework::ETestFailure(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall EMemoryError(const AnsiString Msg, int AHelpContext) : Testframework::ETestFailure(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall EMemoryError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : Testframework::ETestFailure(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall EMemoryError(int Ident, int AHelpContext)/* overload */ : Testframework::ETestFailure(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall EMemoryError(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : Testframework::ETestFailure(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~EMemoryError(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TMemoryTestTypes { mttMemoryTestBeforeNormalTest, mttExecuteNormalTest, mttMemoryTestAfterNormalTest };
#pragma option pop

typedef Set<TMemoryTestTypes, mttMemoryTestBeforeNormalTest, mttMemoryTestAfterNormalTest>  TMemoryTestTypesSet;

class DELPHICLASS TMemoryTest;
class PASCALIMPLEMENTATION TMemoryTest : public TTestDecorator 
{
	typedef TTestDecorator inherited;
	
protected:
	int __fastcall MemoryAllocated(void);
	
public:
	virtual AnsiString __fastcall GetName();
	virtual void __fastcall RunTest(Testframework::TTestResult* ATestResult);
public:
	#pragma option push -w-inl
	/* TTestDecorator.Create */ inline __fastcall TMemoryTest(Testframework::_di_ITest ATest, AnsiString AName) : TTestDecorator(ATest, AName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TAbstractTest.Destroy */ inline __fastcall virtual ~TMemoryTest(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Testextensions */
using namespace Testextensions;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TestExtensions
