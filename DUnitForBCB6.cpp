//---------------------------------------------------------------------------

#include <basepch.h>
#pragma hdrstop

//---------------------------------------------------------------------------
USEFORMNS("DUnit\src\DunitAbout.pas", Dunitabout, DUnitAboutBox);
USEFORMNS("DUnit\src\GUITestRunner.pas", Guitestrunner, GUITestRunner);
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Package source.
//---------------------------------------------------------------------------

#pragma argsused
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
  return 1;
}
//---------------------------------------------------------------------------
