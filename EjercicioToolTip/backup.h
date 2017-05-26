#pragma once  //______________________________________ EjercicioToolTip.h  
#include "Resource.h"
class EjercicioToolTip : public Win::Dialog
{
public:
	EjercicioToolTip()
	{
	}
	~EjercicioToolTip()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::ListView lv1;
	Win::ListView lv2;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(486);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(306);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioToolTip";
		lv1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | LVS_REPORT, 12, 13, 211, 280, hWnd, 1000);
		lv2.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | LVS_REPORT, 297, 11, 182, 288, hWnd, 1001);
		lv1.SetExtStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		lv2.SetExtStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lv1.Font = fontArial014A;
		lv2.Font = fontArial014A;
	}
	//_________________________________________________
	void lv1_BeginrDrag(Win::Event& e);
	void Window_DropFiles(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (lv1.IsEvent(e, LVN_BEGINRDRAG)) {lv1_BeginrDrag(e); return true;}
		return false;
	}
};
