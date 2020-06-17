// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'GUITestRunner.pas' rev: 6.00

#ifndef GUITestRunnerHPP
#define GUITestRunnerHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ToolWin.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Math.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <TestFramework.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Guitestrunner
{
//-- type declarations -------------------------------------------------------
typedef bool __fastcall (__closure *TTestFunc)(Testframework::_di_ITest item);

class DELPHICLASS TGUITestRunner;
class PASCALIMPLEMENTATION TGUITestRunner : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Controls::TImageList* StateImages;
	Controls::TImageList* RunImages;
	Actnlist::TActionList* DialogActions;
	Actnlist::TAction* SelectAllAction;
	Actnlist::TAction* DeselectAllAction;
	Actnlist::TAction* SelectFailedAction;
	Menus::TMainMenu* MainMenu;
	Menus::TMenuItem* TestTreeMenu;
	Menus::TMenuItem* SelectAllItem;
	Menus::TMenuItem* DeselectAllItem;
	Menus::TMenuItem* SelectFailedItem;
	Menus::TMenuItem* FileMenu;
	Actnlist::TAction* SaveConfigurationAction;
	Actnlist::TAction* AutoSaveAction;
	Menus::TMenuItem* SaveConfigurationItem;
	Menus::TMenuItem* AutoSaveItem;
	Actnlist::TAction* RestoreSavedAction;
	Menus::TMenuItem* RestoreSavedConfigurationItem;
	Menus::TMenuItem* ViewMenu;
	Menus::TMenuItem* HideErrorBoxItem;
	Extctrls::TPanel* BodyPanel;
	Actnlist::TAction* ErrorBoxVisibleAction;
	Extctrls::TPanel* TopPanel;
	Extctrls::TPanel* TreePanel;
	Comctrls::TTreeView* TestTree;
	Extctrls::TPanel* ResultsPanel;
	Extctrls::TPanel* ProgressPanel;
	Comctrls::TListView* ResultsView;
	Comctrls::TListView* FailureListView;
	Extctrls::TPanel* ErrorBoxPanel;
	Extctrls::TSplitter* ErrorBoxSplitter;
	Extctrls::TSplitter* ResultsSplitter;
	Menus::TMenuItem* AutoChangeFocusItem;
	Extctrls::TPanel* TopProgressPanel;
	Comctrls::TProgressBar* ProgressBar;
	Extctrls::TPanel* pnlProgresslabel;
	Extctrls::TPanel* ScorePanel;
	Extctrls::TPanel* ScoreLabel;
	Comctrls::TProgressBar* ScoreBar;
	Menus::TPopupMenu* pmTestTree;
	Menus::TMenuItem* pmiSelectAll;
	Menus::TMenuItem* pmiDeselectAll;
	Menus::TMenuItem* pmiSelectFailed;
	Actnlist::TAction* HideTestNodesAction;
	Menus::TMenuItem* CollapseLowestSuiteNodesItem;
	Menus::TMenuItem* CollapseLowestSuiteNodes1;
	Actnlist::TAction* HideTestNodesOnOpenAction;
	Menus::TMenuItem* HideTestNodesItem;
	Actnlist::TAction* ExpandAllNodesAction;
	Menus::TMenuItem* TestTreeMenuSeparator;
	Menus::TMenuItem* ExpandAllItem;
	Menus::TMenuItem* TestTreeLocalMenuSeparator;
	Menus::TMenuItem* ExpandAll2;
	Stdctrls::TLabel* lblTestTree;
	Actnlist::TAction* RunAction;
	Actnlist::TAction* ExitAction;
	Actnlist::TAction* BreakOnFailuresAction;
	Menus::TMenuItem* BreakonFailuresItem;
	Actnlist::TAction* ShowTestedNodeAction;
	Menus::TMenuItem* SelectTestedNodeItem;
	Menus::TPopupMenu* ErrorMessagePopup;
	Menus::TMenuItem* CopyFailureMessage;
	Actnlist::TAction* CopyMessageToClipboardAction;
	Menus::TMenuItem* ActionsMenu;
	Menus::TMenuItem* CopyMessagetoCllipboardItem;
	Stdctrls::TLabel* LbProgress;
	Actnlist::TAction* UseRegistryAction;
	Menus::TMenuItem* UseRegistryItem;
	Comctrls::TRichEdit* ErrorMessageRTF;
	Actnlist::TAction* SelectCurrentAction;
	Actnlist::TAction* DeselectCurrentAction;
	Menus::TMenuItem* SelectCurrent1;
	Menus::TMenuItem* DeselectCurrent1;
	Controls::TImageList* ActionsImages;
	Menus::TMenuItem* CloseItem;
	Menus::TMenuItem* RunItem;
	Actnlist::TAction* StopAction;
	Menus::TMenuItem* StopActionItem;
	Comctrls::TToolBar* ToolBar1;
	Comctrls::TToolButton* SelectAllButton;
	Comctrls::TToolButton* DeselectAllButton;
	Comctrls::TToolButton* ToolButton1;
	Comctrls::TToolButton* SelectFailedButton;
	Comctrls::TToolButton* ToolButton2;
	Comctrls::TToolButton* SelectCurrentButton;
	Comctrls::TToolButton* DeselectCurrentButton;
	Comctrls::TToolButton* ToolButton3;
	Comctrls::TToolButton* ToolButton4;
	Comctrls::TToolButton* ToolButton5;
	Actnlist::TAction* Alt_R_RunAction;
	Actnlist::TAction* Alt_S_StopAction;
	Menus::TMenuItem* N1;
	Menus::TMenuItem* DeselectCurrent2;
	Menus::TMenuItem* SelectCurrent2;
	Menus::TMenuItem* N2;
	Actnlist::TAction* CopyProcnameToClipboardAction;
	Menus::TMenuItem* N3;
	Menus::TMenuItem* Copytestnametoclipboard1;
	Menus::TMenuItem* N4;
	Menus::TMenuItem* Copytestnametoclipboard2;
	Actnlist::TAction* RunSelectedTestAction;
	Menus::TMenuItem* N5;
	Menus::TMenuItem* Runcurrenttest1;
	Menus::TMenuItem* N6;
	Menus::TMenuItem* Runcurrenttest2;
	Menus::TMenuItem* RunSelectedTestItem;
	Comctrls::TToolButton* RunSelectedTestButton;
	Actnlist::TAction* GoToNextSelectedTestAction;
	Actnlist::TAction* GoToPrevSelectedTestAction;
	Menus::TMenuItem* N7;
	Menus::TMenuItem* GoToNextSelectedNode1;
	Menus::TMenuItem* GoToPreviousSelectedNode1;
	Menus::TMenuItem* N8;
	Menus::TMenuItem* GoToNextSelectedNode2;
	Menus::TMenuItem* GoToPreviousSelectedNode2;
	Menus::TMenuItem* FailIfNoChecksExecuted;
	Actnlist::TAction* FailIfNoChecksExecutedAction;
	Menus::TMenuItem* FailTestCaseIfMemoryLeaked;
	Actnlist::TAction* FailTestCaseIfMemoryLeakedAction;
	Menus::TPopupMenu* TestCaseProperty;
	Menus::TMenuItem* TestCaseProperties;
	Menus::TMenuItem* N10;
	Menus::TMenuItem* FailNoCheckExecutedMenuItem;
	Menus::TMenuItem* FailsOnMemoryLeakMenuItem;
	Menus::TMenuItem* N11;
	Menus::TMenuItem* TestCasePopup;
	Menus::TMenuItem* FailsOnMemoryRecoveryMenuItem;
	Menus::TMenuItem* AllowedLeakSizeMemuItem;
	Menus::TMenuItem* ShowTestCaseswithRunTimeProperties;
	Actnlist::TAction* ShowTestCasesWithRunTimePropertiesAction;
	Menus::TMenuItem* N9;
	Menus::TMenuItem* WarnOnFailTestOverride;
	Actnlist::TAction* WarnOnFailTestOverrideAction;
	Menus::TMenuItem* N12;
	Actnlist::TAction* TestCasePropertiesAction;
	Actnlist::TAction* PropertyPopUpAction;
	Menus::TMenuItem* N13;
	Menus::TMenuItem* Previous1;
	Menus::TMenuItem* Next1;
	Menus::TMenuItem* RunSelectedTest1;
	Actnlist::TAction* RunSelectedTestAltAction;
	Menus::TMenuItem* N14;
	Menus::TMenuItem* ReportMemoryLeakTypeOnShutdown;
	Menus::TMenuItem* IgnoreMemoryLeakInSetUpTearDown;
	Actnlist::TAction* IgnoreMemoryLeakInSetUpTearDownAction;
	Actnlist::TAction* ReportMemoryLeakTypeOnShutdownAction;
	Menus::TMenuItem* TestCaseIgnoreSetUpTearDownLeaksMenuItem;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall TestTreeClick(System::TObject* Sender);
	void __fastcall FailureListViewSelectItem(System::TObject* Sender, Comctrls::TListItem* Item, bool Selected);
	void __fastcall FailureListViewClick(System::TObject* Sender);
	void __fastcall TestTreeKeyPress(System::TObject* Sender, char &Key);
	void __fastcall SelectAllActionExecute(System::TObject* Sender);
	void __fastcall DeselectAllActionExecute(System::TObject* Sender);
	void __fastcall SelectFailedActionExecute(System::TObject* Sender);
	void __fastcall SaveConfigurationActionExecute(System::TObject* Sender);
	void __fastcall RestoreSavedActionExecute(System::TObject* Sender);
	void __fastcall AutoSaveActionExecute(System::TObject* Sender);
	void __fastcall ErrorBoxVisibleActionExecute(System::TObject* Sender);
	void __fastcall ErrorBoxSplitterMoved(System::TObject* Sender);
	void __fastcall ErrorBoxPanelResize(System::TObject* Sender);
	void __fastcall HideTestNodesActionExecute(System::TObject* Sender);
	void __fastcall HideTestNodesOnOpenActionExecute(System::TObject* Sender);
	void __fastcall ExpandAllNodesActionExecute(System::TObject* Sender);
	void __fastcall RunActionExecute(System::TObject* Sender);
	void __fastcall ExitActionExecute(System::TObject* Sender);
	void __fastcall BreakOnFailuresActionExecute(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall ShowTestedNodeActionExecute(System::TObject* Sender);
	void __fastcall CopyMessageToClipboardActionExecute(System::TObject* Sender);
	void __fastcall UseRegistryActionExecute(System::TObject* Sender);
	void __fastcall RunActionUpdate(System::TObject* Sender);
	void __fastcall CopyMessageToClipboardActionUpdate(System::TObject* Sender);
	void __fastcall SelectCurrentActionExecute(System::TObject* Sender);
	void __fastcall DeselectCurrentActionExecute(System::TObject* Sender);
	void __fastcall StopActionExecute(System::TObject* Sender);
	void __fastcall StopActionUpdate(System::TObject* Sender);
	void __fastcall TestTreeChange(System::TObject* Sender, Comctrls::TTreeNode* Node);
	void __fastcall CopyProcnameToClipboardActionExecute(System::TObject* Sender);
	void __fastcall CopyProcnameToClipboardActionUpdate(System::TObject* Sender);
	void __fastcall RunSelectedTestActionExecute(System::TObject* Sender);
	void __fastcall RunSelectedTestActionUpdate(System::TObject* Sender);
	void __fastcall TestTreeMouseDown(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall GoToNextSelectedTestActionExecute(System::TObject* Sender);
	void __fastcall GoToPrevSelectedTestActionExecute(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall FailIfNoChecksExecutedActionExecute(System::TObject* Sender);
	void __fastcall FailTestCaseIfMemoryLeakedActionExecute(System::TObject* Sender);
	void __fastcall ShowTestCasesWithRunTimePropertiesActionExecute(System::TObject* Sender);
	void __fastcall WarnOnFailTestOverrideActionExecute(System::TObject* Sender);
	void __fastcall TestCasePropertiesActionExecute(System::TObject* Sender);
	void __fastcall Previous1Click(System::TObject* Sender);
	void __fastcall Next1Click(System::TObject* Sender);
	void __fastcall TestCasePropertiesMeasureItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall TestCasePropertiesDrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	void __fastcall FailNoCheckExecutedMenuItemDrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	void __fastcall AllowedLeakSizeMemuItemDrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	void __fastcall FailsOnMemoryRecoveryMenuItemDrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	void __fastcall FailsOnMemoryLeakMenuItemDrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	void __fastcall pmTestTreePopup(System::TObject* Sender);
	void __fastcall FailNoCheckExecutedMenuItemClick(System::TObject* Sender);
	void __fastcall AllowedLeakSizeMemuItemClick(System::TObject* Sender);
	void __fastcall FailsOnMemoryLeakMenuItemClick(System::TObject* Sender);
	void __fastcall FailsOnMemoryRecoveryMenuItemClick(System::TObject* Sender);
	void __fastcall RunSelectedTestAltActionExecute(System::TObject* Sender);
	void __fastcall Previous1DrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	void __fastcall RunSelectedTest1DrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	void __fastcall Next1DrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	void __fastcall ReportMemoryLeakTypeOnShutdownActionExecute(System::TObject* Sender);
	void __fastcall IgnoreMemoryLeakInSetUpTearDownActionExecute(System::TObject* Sender);
	void __fastcall TestCaseIgnoreSetUpTearDownLeaksMenuItemClick(System::TObject* Sender);
	void __fastcall TestCaseIgnoreSetUpTearDownLeaksMenuItemDrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected);
	
private:
	bool FNoCheckExecutedPtyOverridden;
	bool FMemLeakDetectedPtyOverridden;
	bool FIgnoreSetUpTearDownLeakPtyOverridden;
	int FPopupY;
	int FPopupX;
	void __fastcall ResetProgress(void);
	void __fastcall MenuLooksInactive(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected, AnsiString ATitle, unsigned TitlePosn, bool PtyOveridesGUI);
	void __fastcall MenuLooksActive(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool Selected, AnsiString ATitle, unsigned TitlePosn);
	AnsiString __fastcall GetPropertyName(const AnsiString Caption);
	
protected:
	Testframework::_di_ITest FSuite;
	Testframework::TTestResult* FTestResult;
	bool FRunning;
	Classes::TInterfaceList* FTests;
	Classes::TInterfaceList* FSelectedTests;
	__int64 FTotalTime;
	AnsiString FRunTimeStr;
	AnsiString FNoChecksStr;
	AnsiString FMemLeakStr;
	AnsiString FMemGainStr;
	AnsiString FMemBytesStr;
	AnsiString FIgnoreLeakStr;
	AnsiString FBytes;
	int FErrorCount;
	int FFailureCount;
	int FStrMaxLen;
	int FValMaxLen;
	Extctrls::TTimer* FUpdateTimer;
	bool FTimerExpired;
	int FTotalTestsCount;
	void __fastcall Setup(void);
	void __fastcall SetUpStateImages(void);
	void __fastcall SetSuite(Testframework::_di_ITest value);
	void __fastcall ClearResult(void);
	void __fastcall DisplayFailureMessage(Comctrls::TListItem* Item);
	void __fastcall ClearFailureMessage(void);
	Comctrls::TListItem* __fastcall AddFailureItem(Testframework::TTestFailure* failure);
	void __fastcall UpdateStatus(const bool fullUpdate);
	void __fastcall FillTestTree(Comctrls::TTreeNode* RootNode, Testframework::_di_ITest ATest)/* overload */;
	void __fastcall FillTestTree(Testframework::_di_ITest ATest)/* overload */;
	void __fastcall UpdateNodeImage(Comctrls::TTreeNode* node);
	void __fastcall UpdateNodeState(Comctrls::TTreeNode* node);
	void __fastcall SetNodeState(Comctrls::TTreeNode* node, bool enabled);
	void __fastcall SwitchNodeState(Comctrls::TTreeNode* node);
	void __fastcall UpdateTestTreeState(void);
	void __fastcall MakeNodeVisible(Comctrls::TTreeNode* node);
	void __fastcall SetTreeNodeImage(Comctrls::TTreeNode* Node, int imgIndex);
	void __fastcall SelectNode(Comctrls::TTreeNode* node);
	Testframework::_di_ITest __fastcall NodeToTest(Comctrls::TTreeNode* node);
	Comctrls::TTreeNode* __fastcall TestToNode(Testframework::_di_ITest test);
	Testframework::_di_ITest __fastcall SelectedTest();
	void __fastcall ListSelectedTests(void);
	bool __fastcall EnableTest(Testframework::_di_ITest test);
	bool __fastcall DisableTest(Testframework::_di_ITest test);
	void __fastcall ApplyToTests(Comctrls::TTreeNode* root, const TTestFunc func);
	void __fastcall EnableUI(bool enable);
	void __fastcall RunTheTest(Testframework::_di_ITest aTest);
	virtual void __fastcall InitTree(void);
	AnsiString __fastcall IniFileName();
	Inifiles::TCustomIniFile* __fastcall GetIniFile(const AnsiString FileName);
	void __fastcall LoadRegistryAction(void);
	void __fastcall SaveRegistryAction(void);
	void __fastcall LoadFormPlacement(void);
	void __fastcall SaveFormPlacement(void);
	void __fastcall SaveConfiguration(void);
	void __fastcall LoadConfiguration(void);
	void __fastcall LoadSuiteConfiguration(void);
	void __fastcall AutoSaveConfiguration(void);
	bool __fastcall NodeIsGrandparent(Comctrls::TTreeNode* ANode);
	void __fastcall CollapseNonGrandparentNodes(Comctrls::TTreeNode* RootNode);
	void __fastcall ProcessClickOnStateIcon(void);
	void __fastcall ClearStatusMessage(void);
	void __fastcall CopyTestNametoClipboard(Comctrls::TTreeNode* ANode);
	void __fastcall SetupCustomShortcuts(void);
	void __fastcall SetupGUINodes(void);
	bool __fastcall SelectNodeIfTestEnabled(Comctrls::TTreeNode* ANode);
	void __fastcall OnUpdateTimer(System::TObject* Sender);
	
public:
	void __fastcall AddSuccess(Testframework::_di_ITest test);
	void __fastcall AddError(Testframework::TTestFailure* failure);
	void __fastcall AddFailure(Testframework::TTestFailure* failure);
	bool __fastcall ShouldRunTest(Testframework::_di_ITest test);
	virtual void __fastcall StartSuite(Testframework::_di_ITest suite);
	virtual void __fastcall EndSuite(Testframework::_di_ITest suite);
	virtual void __fastcall StartTest(Testframework::_di_ITest test);
	virtual void __fastcall EndTest(Testframework::_di_ITest test);
	void __fastcall TestingStarts(void);
	void __fastcall TestingEnds(Testframework::TTestResult* TestResult);
	void __fastcall Status(Testframework::_di_ITest test, const AnsiString Msg);
	void __fastcall Warning(Testframework::_di_ITest test, const AnsiString Msg);
	__property int ErrorCount = {read=FErrorCount, nodefault};
	__property int FailureCount = {read=FFailureCount, nodefault};
	__property Testframework::_di_ITest Suite = {read=FSuite, write=SetSuite};
	__property Testframework::TTestResult* TestResult = {read=FTestResult, write=FTestResult};
	/*         class method */ static void __fastcall RunTest(TMetaClass* vmt, Testframework::_di_ITest test);
	/*         class method */ static void __fastcall RunRegisteredTests(TMetaClass* vmt);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TGUITestRunner(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TGUITestRunner(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TGUITestRunner(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TGUITestRunner(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
private:
	void *__ITestListenerX;	/* Testframework::ITestListenerX */
	
public:
	operator ITestListenerX*(void) { return (ITestListenerX*)&__ITestListenerX; }
	operator ITestListener*(void) { return (ITestListener*)&__ITestListenerX; }
	
};


//-- var, const, procedure ---------------------------------------------------
#define cnConfigIniSection "GUITestRunner Config"
static const int clOK = 0x8000;
static const int clFAILURE = 0xff00ff;
static const int clERROR = 0xff;
static const Shortint imgNONE = 0x0;
static const Shortint imgRUNNING = 0x1;
static const Shortint imgRUN = 0x2;
static const Shortint imgHASPROPS = 0x3;
static const Shortint imgFAILED = 0x4;
static const Shortint imgERROR = 0x5;
static const Shortint imgDISABLED = 0x1;
static const Shortint imgPARENT_DISABLED = 0x2;
static const Shortint imgENABLED = 0x3;
extern PACKAGE void __fastcall RunTest(Testframework::_di_ITest test);
extern PACKAGE void __fastcall RunTestModeless(Testframework::_di_ITest test);
extern PACKAGE void __fastcall RunRegisteredTests(void);
extern PACKAGE void __fastcall RunRegisteredTestsModeless(void);
extern PACKAGE int __fastcall RunRegisteredTestsModelessUnattended(void);

}	/* namespace Guitestrunner */
using namespace Guitestrunner;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// GUITestRunner
