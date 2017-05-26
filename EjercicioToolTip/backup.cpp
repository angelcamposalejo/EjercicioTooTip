#include "stdafx.h"  //________________________________________ EjercicioToolTip.cpp
#include "EjercicioToolTip.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioToolTip app;
	return app.BeginDialog(IDI_EjercicioToolTip, hInstance);
}

void EjercicioToolTip::Window_Open(Win::Event& e)
{
	//________________________________________________________ tip1
	//tip1.AddTool(control, L"Click to show the details");// control: button, textbox, ...
	tip1.AddTool(tbx1, L"Introduce un número");
	tip1.SetTitleWithStandardIcon(L"Duplicado", TTI_INFO);

}

void EjercicioToolTip::bt1_Click(Win::Event& e)
{
	const double entrada = tbx1.DoubleValue;
	tbx1.DoubleValue = entrada*2.0;
}

