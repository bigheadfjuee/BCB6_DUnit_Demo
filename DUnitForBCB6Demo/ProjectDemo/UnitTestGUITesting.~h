//---------------------------------------------------------------------------

#ifndef UnitTestGUITestingH
#define UnitTestGUITestingH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include <GUITesting.hpp>
#include <GUITestRunner.hpp>
//---------------------------------------------------------------------------

class TDunitDialogCracker : public TGUITestRunner {};

class TTTestForm : public TForm
{
  __published:	// IDE-managed Components
    TMemo *Memo1;
    TButton *Button1;
    void __fastcall Button1Click(TObject *Sender);
  private:	// User declarations
  public:		// User declarations
    __fastcall TTTestForm(TComponent* Owner);
    void __fastcall ResetForm();

    int MyCount;
};

class T_TGUITestCase : public TGUITestCase
{
  protected:
   virtual void __fastcall SetUp();

  private:	// User declarations

  public:		// User declarations
    virtual void __fastcall TearDown();

  __published:	// IDE-managed Components
    void __fastcall Test_EnterKey();

};

class TGUITestRunnerTests : public TGUITestCase
{
  private:
    TGUITestRunner* FRunner;
  public:
    virtual void __fastcall SetUp();
    virtual void __fastcall TearDown();
    bool TestA(const bool ReturnValue);

};

//---------------------------------------------------------------------------
extern PACKAGE TTTestForm *TTestForm;
//---------------------------------------------------------------------------
#endif
