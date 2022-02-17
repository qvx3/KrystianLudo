#include "stdafx.h"

#include "Sox.h"


Sox::Sox(void)
:	start ( string("cmd /c start /min ") ) ,	// Execute a command and exit prompt
	sox ( string("..\\..\\sox\\sox.exe ") ) ,
	/*
	
	Imagine all my products share a common folder, 
	therefore the Engine's lying in a folder inside it.
	However the Engine's lying outside Project's parent dir

	That is outside: " commonFolder\projectName\projectName\Sox.cpp "
	Need to access: " commonFolder\sox\sox.exe "
	After all: " commonFolder\Effects\sound.wav "

	*/
	device ( string(" -t waveaudio " ) ) ,
	fopts ( string(" repeat 9 repeat 9 ") ) , // This may be disk resource-heavy but is available ad hoc
	command ( string("") )  
{
}










Sox::~Sox(void)
{
	//// This auto-off Really Unwanted in Forms

	//Stop ( ) ;
}









// Run minimized window with Sox player
// from within above folder
bool Sox:: Play ( string filepath , Sox:: Flag flag ) 
{
	

	// Unfortunately, I need to refresh such 
	// ancillary variables because adding two strings together
	// produce ca. 32 compiler errors
	command = "" ;
	// It's politeness to my program 
	
	switch ( flag )
	{

	case Loop :

	
			
		//command += start ; 
		// run_invisible.vbs is rather not an  elegant solution


		
		//return result ;







		/*

		// C-style cast only worked
		LPCWSTR argv = ( LPCWSTR )  command .c_str () ;

		

		// This below needs to fiddle with linker options!?

		ShellExecute
			(
				NULL ,
				L"open" ,
				argv ,
				NULL ,
				NULL ,
				SW_HIDE
			) ;

		*/

		//system (  command .c_str() ) ;
		// Do not try to execute commands with
		// multiple file names, that is 
		// - very long command prompts







		break ;


	default :

	

		// No " repeat 9 repeat 9 "
		fopts = "" ;

		
		break ;








	}


	// string by string concat

	command += sox  ;

	// add quotes around filepath
	command += "\"" ;
	command += filepath ;
	command += "\"" ;

	command += device ;
	command += fopts ;

	/*

	command = "" ;

	command += "dir " ;
	command += "\"" ;
	command += filepath ;
	command += "\"" ;
	command += " & pause" ;

	

	system ( command .c_str () ) ;
	*/

	// C-style cast only worked
	LPCSTR argv = ( LPCSTR )  command .c_str () ;

	UINT result = WinExec ( argv , SW_HIDE ) ;
	// Spaces around filepath are dangerous
	// when quotes injected





/*





	

	
	
	
	
	// C-style cast only worked

	LPCSTR argv = ( LPCSTR )  command .c_str () ;


    STARTUPINFO startupInfo;
    PROCESS_INFORMATION    processInf;
    HANDLE handle;
    startupInfo.lpReserved    = NULL;
    startupInfo.lpDesktop    = NULL;
    startupInfo.lpReserved2    = NULL;
    startupInfo.lpTitle        = NULL;
    startupInfo.cb = sizeof(startupInfo);
    if(!CreateProcess(  NULL,
                        argv 
                        NULL,
                        NULL,
                        TRUE,
                        CREATE_NO_WINDOW,
                        NULL,
                        NULL,
                        &startupInfo,
                        &processInf))
    {
        return FALSE;
    }

	


	// CreateProcess() below argument list

	// No module name (use command line)
    // Command line
	// Process handle not inheritable
    // Thread handle not inheritable
    // Set handle inheritance to FALSE
    // No creation flags
    // Use parent's environment block
    // Use parent's starting directory 
    // Pointer to STARTUPINFO structure
    // Pointer to PROCESS_INFORMATION structure
	
	
	*/





	return true ;
}


bool Sox:: Stop ( Sox:: Flag flag ) 
{
	
	command = "" ;
	command += start ;

	command += " taskkill /F /IM sox.exe /T " ;
	

	// C-style cast only worked
	LPCSTR argv = ( LPCSTR )  command .c_str () ;

	UINT result = WinExec ( argv , SW_HIDE ) ;


	return true ;
}

