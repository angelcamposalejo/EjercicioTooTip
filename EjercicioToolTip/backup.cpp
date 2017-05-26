#include "stdafx.h"  //________________________________________ EjercicioToolTip.cpp
#include "EjercicioToolTip.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioToolTip app;
	return app.BeginDialog(IDI_EjercicioToolTip, hInstance);
}

void EjercicioToolTip::Window_Open(Win::Event& e)
{


}



