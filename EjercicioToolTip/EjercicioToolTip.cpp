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
	lv1.Items.Add(0, L"Lunes");
	lv1.Items.Add(1, L"Martes");
	lv1.Items.Add(2, L"Miercoles");
	lv1.Items.Add(3, L"Jueves");
	lv1.Items.Add(4, L"Viernes");
	lv1.Items.Add(5, L"Sabado");
	lv1.Items.Add(6, L"Domingo");
	//________________________________________________________ lv2
	lv2.Cols.Add(0, LVCFMT_LEFT, 100, L"Day");
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
	lv1.BeginDrag(e);
}

void EjercicioToolTip::Window_LButtonUp(Win::Event& e)
{
	Win::LVDropInfo lvdi = lv1.Drop(e, lv2);
	if (lvdi.sourceItemIndex == -1 && lvdi.targetItemIndex == -1)return;
	wstring texto = lv1.Items[lvdi.sourceItemIndex].GetText();
	lv2.Items.Add(lvdi.targetItemIndex, texto);
	//::SetFocus(hWnd);
}

void EjercicioToolTip::Window_MouseMove(Win::Event& e)
{
	lv1.Drag(e, lv2);
}

