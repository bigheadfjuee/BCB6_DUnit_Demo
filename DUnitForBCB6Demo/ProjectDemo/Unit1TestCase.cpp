//---------------------------------------------------------------------------
#pragma hdrstop
#include "Unit1TestCase.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
static void registerTests()
{
  _di_ITestSuite iSuite;
  TTestSuite *testSuite = new TTestSuite("Testing TMyTestCase.h");

  if (testSuite->GetInterface(__uuidof(ITestSuite), &iSuite))
  {
    testSuite->AddTests(__classid(TMyTestCase));
    Testframework::RegisterTest(iSuite);
  }
  else
  {
    delete testSuite;
  }
}
//---------------------------------------------------------------------------
void __fastcall TMyTestCase::SetUp()
{
  Form1 = new TForm1(NULL);
}
//---------------------------------------------------------------------------
void __fastcall TMyTestCase::TearDown()
{
}
//---------------------------------------------------------------------------
#pragma startup registerTests 33
#pragma package(smart_init)

//---------------------------------------------------------------------------
void __fastcall TMyTestCase::TestClear()
{

  Form1->Clear();
  Check(Form1->GetCount() == 0);
}
//---------------------------------------------------------------------------
void __fastcall TMyTestCase::TestAdd()
{
  Form1->Clear();
  Form1->Add(1);
  Check(Form1->GetCount() == 1);
  Form1->Add(1);
  Check(Form1->GetCount() == 2);  
}
//---------------------------------------------------------------------------
void __fastcall TMyTestCase::TestGetCount()
{
  Form1->Clear();
  for(int n=0; n<20; ++n)
  {
    Form1->Add(1);
  }
  Check(Form1->GetCount() == 10); // failed
}
//---------------------------------------------------------------------------
