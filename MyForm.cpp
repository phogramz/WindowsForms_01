#include "MyForm.h"
#include <Windows.h>
//#include "Function.h"
using namespace WinForms; // Название проекта
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
