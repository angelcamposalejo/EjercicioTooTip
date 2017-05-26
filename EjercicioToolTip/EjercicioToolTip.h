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
protected:
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioToolTip";
	}
	//_________________________________________________
	void Window_DropFiles(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
