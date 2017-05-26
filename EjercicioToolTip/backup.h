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
	Win::Textbox tbx1;
	Win::Button bt1;
	Win::Tooltip tip1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(245);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(152);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioToolTip";
		tbx1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 15, 16, 123, 25, hWnd, 1000);
		bt1.Create(NULL, L"Duplicado", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 151, 16, 87, 28, hWnd, 1001);
		tip1.Create(NULL, NULL, WS_CHILD | WS_VISIBLE, 84, 69, 136, 76, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbx1.Font = fontArial014A;
		bt1.Font = fontArial014A;
	}
	//_________________________________________________
	void bt1_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (bt1.IsEvent(e, BN_CLICKED)) {bt1_Click(e); return true;}
		return false;
	}
};
