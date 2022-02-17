#pragma once


/*
#include <windows.h>
#include "resource.h"
#pragma comment(lib,"Winmm.lib")

int WINAPI WinMain(
      HINSTANCE hInstance,
      HINSTANCE hPrevInstance,
      LPSTR lpCmdLine,
      int nShowCmd)
{
  PlaySound( (char*)IDR_WAVE1, NULL, SND_RESOURCE | SND_ASYNC ); 
  return 0;
}
*/

// I evade preprocessor macrodefinitions
// like IDR_WAVE1, NULL, SND_RESOURCE | SND_ASYNC
// in favor of enum type



/////////////////////////////////////

// Test-purpose
#include < iostream >

// system()
#include < cstdlib >
#include < string >

// CreateProcess()
#include <windows.h>

// ShellExecute()
#include < shellapi.h >


// Konwersje zmiennych tekstowych
#include <stdio.h>
#include <tchar.h>

using namespace std ;


class Sox
{
	// Use certain sound card driver
	string device ;

	string start ;
	// These variables act as MS Word templates
	// as I prefer strings than character streams
	string sox ;
	// Beware of too much spaces in these above!

	// Sox's insiduous parameters
	string fopts ;

	string command ;

public:

	enum Flag
	{
		Async ,	// Play immediately
		Loop ,	// Kill loops
		Panic	// Kill all

	}
	;
	

	Sox(void);
	~Sox(void);




	// Success
	bool Stop ( Flag flag = Panic ) ;
	bool Play ( string filepath , Flag flag = Async ) ;
	

	// Broken!

	//bool Play ( string filepath ) ;


protected : 

};
