// Forms_Chinczyk.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Frontend.h"

using namespace Forms_Chinczyk;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 









	//// Ekran powitalny
	Application::Run(gcnew Frontend());

	







	// Create the main window and run it

	Application::Run(gcnew Form1());
	

	return 0;
}
