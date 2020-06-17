//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
  __published : // IDE-managed Components
  TButton *Button1;
  TMemo *Memo1;
  void __fastcall Button1Click(TObject *Sender);

private: // User declarations
  int count;

public: // User declarations
  __fastcall TForm1(TComponent *Owner);

  void Clear();
  void Add(int value);
  int GetCount();

  
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
