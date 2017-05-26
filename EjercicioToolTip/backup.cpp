#include "stdafx.h"  //________________________________________ EjercicioToolTip.cpp
#include "EjercicioToolTip.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioToolTip app;
	return app.BeginDialog(IDI_EjercicioToolTip, hInstance);
}

void EjercicioToolTip::Window_Open(Win::Event& e)
{
	::DragAcceptFiles(hWnd, TRUE);


	//________________________________________________________ lv1
	lv1.Cols.Add(0, LVCFMT_LEFT, 100, L"Day");
	lv1.Cols.Add(1, LVCFMT_RIGHT, 200, L"Activity");
	lv1.Items.Add(0, L"Monday");
	lv1.Items[0][1].Text = L"Math Class";
	//________________________________________________________ lv2
	lv2.Cols.Add(0, LVCFMT_LEFT, 100, L"Day");
	lv2.Cols.Add(1, LVCFMT_RIGHT, 200, L"Activity");
	lv2.Items.Add(0, L"Monday");
	lv2.Items[0][1].Text = L"Math Class";
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

void EjercicioToolTip::lv1_BeginrDrag(Win::Event& e)
{
}

