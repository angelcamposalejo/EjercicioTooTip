#include "stdafx.h"  //________________________________________ EjercicioToolTip.cpp
#include "EjercicioToolTip.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioToolTip app;
	return app.BeginDialog(IDI_EjercicioToolTip, hInstance);
}

void EjercicioToolTip::Window_Open(Win::Event& e)
{
	::DragAcceptFiles(hWnd, TRUE);

}



void EjercicioToolTip::Window_DropFiles(Win::Event& e)
{
	// Call ::DragAcceptFiles(hWnd, TRUE); during Window_Open
	UINT fileCount = 0;
	wchar_t filename[1024];
	HDROP hdrop = (HDROP)e.wParam;
	if (::DragQueryFile(hdrop, fileCount, filename, 1024)>3)
	{
		filename[1023] = '\0';
		//OnOpen(filename);
		this->MessageBox(filename, L"Drop", MB_OK);
	}
}

