#pragma once





#ifndef DLUGOSC_MAPY
#define DLUGOSC_MAPY 160
#endif





/////////////////////

#include "msclr\marshal_cppstd.h"

// Podlaczenie kodu z gra
#include "Plansza.h"

// Proud to present Q&D sound engine
#include "Sox.h"

// Konsola, string
#include < iostream >

// system()
#include < cstdlib >


/////////////////////










// Okno o programie
#include "HelpAbout.h"















using namespace std ;


namespace Forms_Chinczyk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	// Dla mojej gry
	using namespace msclr ::interop ;





	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			plansza = new Plansza ( false ) ;











			// Wlacze magnetofon do gniazda.
			// Bez tego ani rusz. Wywala runtime error
			// ktory nic nie mowi

			sox = new Sox () ;








			InitializeComponentMojeRzeczy() ;






//////////////////////////////////////////////

		 // Wg 15_obrazki ->Form1.h






			this ->tablicaWszystkiego = gcnew array < PictureBox ^ > ( DLUGOSC_MAPY + 16 + 16) ;
			// Pol planszy 166 + pol startu 16 + pol mety 16


			// Uproszczenie modelowania rzeczywistosci -
			// wrzucenie do jednego wora pol kazdego typu

			for ( int i = 0 ; i < DLUGOSC_MAPY ; i++ )
			{
				tablicaWszystkiego [i] =  tabMapa [i] ;
			}

			for ( int i = 0 ; i < 16 ; i++ )
			{
				tablicaWszystkiego [ DLUGOSC_MAPY +i] = tabStart [i] ;
			}

			for ( int i = 0 ; i < 16 ; i++ )
			{
				tablicaWszystkiego [ DLUGOSC_MAPY +16 +i] = tabMeta [i] ;
			}






		}






//////////////////////////////////////////////






	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
			

			// Tradycyjnie zwolnij pamiec
			 if ( plansza )
			 {
				 delete plansza ;
			 }
			 plansza = nullptr ;


			 if ( sox )
			 {
				 delete sox ;
			 }
			 sox = nullptr ;








		}



















//////////// ////////////////


			  
			  
			  
			 
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


////////////////////////////





	// Obiekt klasy glownej stworzony dynamicznie
	 
	private : Plansza *plansza ;

			  // Oraz dzwiek
	private : Sox *sox ;


	//// Ciag pol planszy

	static array<PictureBox ^> ^ tabMapa = gcnew array<PictureBox ^>( DLUGOSC_MAPY );

	//// Ciag wszystkich pol mety 

	static array<PictureBox ^> ^ tabMeta = gcnew array<PictureBox ^>(16);

	//// Ciag wszystkich  pol startu
	static array<PictureBox ^> ^ tabStart = gcnew array<PictureBox ^>(16);









	private: System::Windows::Forms::PictureBox^  map14;
	private: System::Windows::Forms::PictureBox^  map15;
	private: System::Windows::Forms::PictureBox^  map17;
	protected: 



	private: System::Windows::Forms::PictureBox^  map16;
	private: System::Windows::Forms::PictureBox^  map18;
	private: System::Windows::Forms::PictureBox^  map19;
	private: System::Windows::Forms::PictureBox^  map20;
	private: System::Windows::Forms::PictureBox^  map21;
	private: System::Windows::Forms::PictureBox^  map22;
	private: System::Windows::Forms::PictureBox^  map23;
	private: System::Windows::Forms::PictureBox^  map24;









	private: System::Windows::Forms::PictureBox^  finishBlue0;

	private: System::Windows::Forms::PictureBox^  finishBlue1;

	private: System::Windows::Forms::PictureBox^  finishBlue2;

	private: System::Windows::Forms::PictureBox^  finishBlue3;
	private: System::Windows::Forms::PictureBox^  finishYellow2;
	private: System::Windows::Forms::PictureBox^  map33;




	private: System::Windows::Forms::PictureBox^  map25;

	private: System::Windows::Forms::PictureBox^  finishYellow1;
	private: System::Windows::Forms::PictureBox^  map32;


	private: System::Windows::Forms::PictureBox^  map26;
	private: System::Windows::Forms::PictureBox^  map29;
	private: System::Windows::Forms::PictureBox^  map30;



	private: System::Windows::Forms::PictureBox^  map28;

	private: System::Windows::Forms::PictureBox^  finishYellow0;
	private: System::Windows::Forms::PictureBox^  map31;


	private: System::Windows::Forms::PictureBox^  map27;
	private: System::Windows::Forms::PictureBox^  map34;
	private: System::Windows::Forms::PictureBox^  map35;



	private: System::Windows::Forms::PictureBox^  finishYellow3;

	private: System::Windows::Forms::PictureBox^  finishRed1;

	private: System::Windows::Forms::PictureBox^  finishRed0;
	private: System::Windows::Forms::PictureBox^  map39;
	private: System::Windows::Forms::PictureBox^  map36;
	private: System::Windows::Forms::PictureBox^  map37;
	private: System::Windows::Forms::PictureBox^  map38;








	private: System::Windows::Forms::PictureBox^  map03;

	private: System::Windows::Forms::PictureBox^  finishRed2;
	private: System::Windows::Forms::PictureBox^  map02;



	private: System::Windows::Forms::PictureBox^  map01;

	private: System::Windows::Forms::PictureBox^  map00;

	private: System::Windows::Forms::PictureBox^  finishRed3;
	private: System::Windows::Forms::PictureBox^  finishGreen2;
	private: System::Windows::Forms::PictureBox^  map05;
	private: System::Windows::Forms::PictureBox^  map13;





	private: System::Windows::Forms::PictureBox^  finishGreen1;
	private: System::Windows::Forms::PictureBox^  map06;
	private: System::Windows::Forms::PictureBox^  map12;



	private: System::Windows::Forms::PictureBox^  finishGreen0;
	private: System::Windows::Forms::PictureBox^  map07;
	private: System::Windows::Forms::PictureBox^  map11;




	private: System::Windows::Forms::PictureBox^  map09;

	private: System::Windows::Forms::PictureBox^  map08;
private: System::Windows::Forms::PictureBox^  map10;


	private: System::Windows::Forms::PictureBox^  finishGreen3;
	private: System::Windows::Forms::PictureBox^  map04;


	private: System::Windows::Forms::PictureBox^  startRed3;

	private: System::Windows::Forms::PictureBox^  startRed2;
	private: System::Windows::Forms::PictureBox^  startRed0;




	private: System::Windows::Forms::PictureBox^  startRed1;
	private: System::Windows::Forms::PictureBox^  startYellow3;






	private: System::Windows::Forms::PictureBox^  startYellow2;
	private: System::Windows::Forms::PictureBox^  startYellow0;






	private: System::Windows::Forms::PictureBox^  startBlue2;
private: System::Windows::Forms::PictureBox^  startBlue0;



	private: System::Windows::Forms::PictureBox^  startBlue1;



	private: System::Windows::Forms::PictureBox^  startGreen2;
private: System::Windows::Forms::PictureBox^  startGreen0;




private: System::Windows::Forms::PictureBox^  startGreen1;
private: System::Windows::Forms::PictureBox^  startGreen3;

private: System::Windows::Forms::RichTextBox^  player2;


private: System::Windows::Forms::RichTextBox^  player4;
private: System::Windows::Forms::PictureBox^  startBlue3;
private: System::Windows::Forms::PictureBox^  die1;
private: System::Windows::Forms::PictureBox^  die2;
private: System::Windows::Forms::PictureBox^  die4;

private: System::Windows::Forms::PictureBox^  die3;
private: System::Windows::Forms::PictureBox^  die6;
private: System::Windows::Forms::PictureBox^  die5;
private: System::Windows::Forms::PictureBox^  pawnBlue;
private: System::Windows::Forms::PictureBox^  pawnGreen;
private: System::Windows::Forms::PictureBox^  pawnRed;
private: System::Windows::Forms::PictureBox^  pawnYellow;
private: System::Windows::Forms::PictureBox^  mapEmpty;
private: System::Windows::Forms::PictureBox^  finishBlue;
private: System::Windows::Forms::PictureBox^  finishGreen;


private: System::Windows::Forms::PictureBox^  finishRed;
private: System::Windows::Forms::PictureBox^  finishYellow;
private: System::Windows::Forms::RichTextBox^  cout;
private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  startYellow1;
	private: System::Windows::Forms::PictureBox^  die;
private: System::ComponentModel::IContainer^  components;

private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  musicToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  startToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  muteToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^  wormsThemeToolStripMenuItem1;






private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
private: System::Windows::Forms::RichTextBox^  player3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::RichTextBox^  player1;
private: System::Windows::Forms::Timer^  pauza;
private: System::Windows::Forms::ToolStripMenuItem^  muteMusicToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  windowsXPInstallToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  graphicsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  modestToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  improvedToolStripMenuItem;


		 
	
	
	
	
	// Wg 15_obrazki ->Form1.h


		// Array uchwytow do pictureboxow

	private : array < PictureBox ^ > ^tablicaWszystkiego ;







/////////////////////////













#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->map14 = (gcnew System::Windows::Forms::PictureBox());
			this->map15 = (gcnew System::Windows::Forms::PictureBox());
			this->map17 = (gcnew System::Windows::Forms::PictureBox());
			this->map16 = (gcnew System::Windows::Forms::PictureBox());
			this->map18 = (gcnew System::Windows::Forms::PictureBox());
			this->map19 = (gcnew System::Windows::Forms::PictureBox());
			this->map20 = (gcnew System::Windows::Forms::PictureBox());
			this->map21 = (gcnew System::Windows::Forms::PictureBox());
			this->map22 = (gcnew System::Windows::Forms::PictureBox());
			this->map23 = (gcnew System::Windows::Forms::PictureBox());
			this->map24 = (gcnew System::Windows::Forms::PictureBox());
			this->finishBlue0 = (gcnew System::Windows::Forms::PictureBox());
			this->finishBlue1 = (gcnew System::Windows::Forms::PictureBox());
			this->finishBlue2 = (gcnew System::Windows::Forms::PictureBox());
			this->finishBlue3 = (gcnew System::Windows::Forms::PictureBox());
			this->finishYellow2 = (gcnew System::Windows::Forms::PictureBox());
			this->map33 = (gcnew System::Windows::Forms::PictureBox());
			this->map25 = (gcnew System::Windows::Forms::PictureBox());
			this->finishYellow1 = (gcnew System::Windows::Forms::PictureBox());
			this->map32 = (gcnew System::Windows::Forms::PictureBox());
			this->map26 = (gcnew System::Windows::Forms::PictureBox());
			this->map29 = (gcnew System::Windows::Forms::PictureBox());
			this->map30 = (gcnew System::Windows::Forms::PictureBox());
			this->map28 = (gcnew System::Windows::Forms::PictureBox());
			this->finishYellow0 = (gcnew System::Windows::Forms::PictureBox());
			this->map31 = (gcnew System::Windows::Forms::PictureBox());
			this->map27 = (gcnew System::Windows::Forms::PictureBox());
			this->map34 = (gcnew System::Windows::Forms::PictureBox());
			this->map35 = (gcnew System::Windows::Forms::PictureBox());
			this->finishYellow3 = (gcnew System::Windows::Forms::PictureBox());
			this->finishRed1 = (gcnew System::Windows::Forms::PictureBox());
			this->finishRed0 = (gcnew System::Windows::Forms::PictureBox());
			this->map39 = (gcnew System::Windows::Forms::PictureBox());
			this->map36 = (gcnew System::Windows::Forms::PictureBox());
			this->map37 = (gcnew System::Windows::Forms::PictureBox());
			this->map38 = (gcnew System::Windows::Forms::PictureBox());
			this->map03 = (gcnew System::Windows::Forms::PictureBox());
			this->finishRed2 = (gcnew System::Windows::Forms::PictureBox());
			this->map02 = (gcnew System::Windows::Forms::PictureBox());
			this->map01 = (gcnew System::Windows::Forms::PictureBox());
			this->map00 = (gcnew System::Windows::Forms::PictureBox());
			this->finishRed3 = (gcnew System::Windows::Forms::PictureBox());
			this->finishGreen2 = (gcnew System::Windows::Forms::PictureBox());
			this->map05 = (gcnew System::Windows::Forms::PictureBox());
			this->map13 = (gcnew System::Windows::Forms::PictureBox());
			this->finishGreen1 = (gcnew System::Windows::Forms::PictureBox());
			this->map06 = (gcnew System::Windows::Forms::PictureBox());
			this->map12 = (gcnew System::Windows::Forms::PictureBox());
			this->finishGreen0 = (gcnew System::Windows::Forms::PictureBox());
			this->map07 = (gcnew System::Windows::Forms::PictureBox());
			this->map11 = (gcnew System::Windows::Forms::PictureBox());
			this->map09 = (gcnew System::Windows::Forms::PictureBox());
			this->map08 = (gcnew System::Windows::Forms::PictureBox());
			this->map10 = (gcnew System::Windows::Forms::PictureBox());
			this->finishGreen3 = (gcnew System::Windows::Forms::PictureBox());
			this->map04 = (gcnew System::Windows::Forms::PictureBox());
			this->startRed3 = (gcnew System::Windows::Forms::PictureBox());
			this->startRed2 = (gcnew System::Windows::Forms::PictureBox());
			this->startRed0 = (gcnew System::Windows::Forms::PictureBox());
			this->startRed1 = (gcnew System::Windows::Forms::PictureBox());
			this->startYellow3 = (gcnew System::Windows::Forms::PictureBox());
			this->startYellow2 = (gcnew System::Windows::Forms::PictureBox());
			this->startYellow0 = (gcnew System::Windows::Forms::PictureBox());
			this->startBlue2 = (gcnew System::Windows::Forms::PictureBox());
			this->startBlue0 = (gcnew System::Windows::Forms::PictureBox());
			this->startBlue1 = (gcnew System::Windows::Forms::PictureBox());
			this->startGreen2 = (gcnew System::Windows::Forms::PictureBox());
			this->startGreen0 = (gcnew System::Windows::Forms::PictureBox());
			this->startGreen1 = (gcnew System::Windows::Forms::PictureBox());
			this->startGreen3 = (gcnew System::Windows::Forms::PictureBox());
			this->player2 = (gcnew System::Windows::Forms::RichTextBox());
			this->player4 = (gcnew System::Windows::Forms::RichTextBox());
			this->startBlue3 = (gcnew System::Windows::Forms::PictureBox());
			this->die1 = (gcnew System::Windows::Forms::PictureBox());
			this->die2 = (gcnew System::Windows::Forms::PictureBox());
			this->die4 = (gcnew System::Windows::Forms::PictureBox());
			this->die3 = (gcnew System::Windows::Forms::PictureBox());
			this->die6 = (gcnew System::Windows::Forms::PictureBox());
			this->die5 = (gcnew System::Windows::Forms::PictureBox());
			this->pawnBlue = (gcnew System::Windows::Forms::PictureBox());
			this->pawnGreen = (gcnew System::Windows::Forms::PictureBox());
			this->pawnRed = (gcnew System::Windows::Forms::PictureBox());
			this->pawnYellow = (gcnew System::Windows::Forms::PictureBox());
			this->mapEmpty = (gcnew System::Windows::Forms::PictureBox());
			this->finishBlue = (gcnew System::Windows::Forms::PictureBox());
			this->finishGreen = (gcnew System::Windows::Forms::PictureBox());
			this->finishRed = (gcnew System::Windows::Forms::PictureBox());
			this->finishYellow = (gcnew System::Windows::Forms::PictureBox());
			this->cout = (gcnew System::Windows::Forms::RichTextBox());
			this->startYellow1 = (gcnew System::Windows::Forms::PictureBox());
			this->die = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->musicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->muteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wormsThemeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->windowsXPInstallToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graphicsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modestToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->improvedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->muteMusicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->player3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->player1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pauza = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map00))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map06))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map07))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map09))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map08))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startRed3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startRed2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startRed0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startRed1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startYellow3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startYellow2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startYellow0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startBlue2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startBlue0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startBlue1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startGreen2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startGreen0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startGreen1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startGreen3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startBlue3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pawnBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pawnGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pawnRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pawnYellow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->mapEmpty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startYellow1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// map14
			// 
			this->map14->BackColor = System::Drawing::Color::Transparent;
			this->map14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map14.BackgroundImage")));
			this->map14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map14->Location = System::Drawing::Point(167, 226);
			this->map14->Name = L"map14";
			this->map14->Size = System::Drawing::Size(41, 41);
			this->map14->TabIndex = 0;
			this->map14->TabStop = false;
			this->map14->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map15
			// 
			this->map15->BackColor = System::Drawing::Color::Transparent;
			this->map15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map15.BackgroundImage")));
			this->map15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map15->Location = System::Drawing::Point(167, 188);
			this->map15->Name = L"map15";
			this->map15->Size = System::Drawing::Size(41, 41);
			this->map15->TabIndex = 1;
			this->map15->TabStop = false;
			this->map15->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map17
			// 
			this->map17->BackColor = System::Drawing::Color::Transparent;
			this->map17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map17.BackgroundImage")));
			this->map17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map17->Location = System::Drawing::Point(167, 112);
			this->map17->Name = L"map17";
			this->map17->Size = System::Drawing::Size(41, 41);
			this->map17->TabIndex = 3;
			this->map17->TabStop = false;
			this->map17->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map16
			// 
			this->map16->BackColor = System::Drawing::Color::Transparent;
			this->map16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map16.BackgroundImage")));
			this->map16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map16->Location = System::Drawing::Point(167, 150);
			this->map16->Name = L"map16";
			this->map16->Size = System::Drawing::Size(41, 41);
			this->map16->TabIndex = 2;
			this->map16->TabStop = false;
			this->map16->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map18
			// 
			this->map18->BackColor = System::Drawing::Color::Transparent;
			this->map18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map18.BackgroundImage")));
			this->map18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map18->Location = System::Drawing::Point(167, 74);
			this->map18->Name = L"map18";
			this->map18->Size = System::Drawing::Size(41, 41);
			this->map18->TabIndex = 7;
			this->map18->TabStop = false;
			this->map18->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map19
			// 
			this->map19->BackColor = System::Drawing::Color::Transparent;
			this->map19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map19.BackgroundImage")));
			this->map19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map19->Location = System::Drawing::Point(205, 74);
			this->map19->Name = L"map19";
			this->map19->Size = System::Drawing::Size(41, 41);
			this->map19->TabIndex = 6;
			this->map19->TabStop = false;
			this->map19->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map20
			// 
			this->map20->BackColor = System::Drawing::Color::Transparent;
			this->map20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map20.BackgroundImage")));
			this->map20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map20->Location = System::Drawing::Point(243, 74);
			this->map20->Name = L"map20";
			this->map20->Size = System::Drawing::Size(41, 41);
			this->map20->TabIndex = 5;
			this->map20->TabStop = false;
			this->map20->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map21
			// 
			this->map21->BackColor = System::Drawing::Color::Transparent;
			this->map21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map21.BackgroundImage")));
			this->map21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map21->Location = System::Drawing::Point(243, 112);
			this->map21->Name = L"map21";
			this->map21->Size = System::Drawing::Size(41, 41);
			this->map21->TabIndex = 11;
			this->map21->TabStop = false;
			this->map21->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map22
			// 
			this->map22->BackColor = System::Drawing::Color::Transparent;
			this->map22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map22.BackgroundImage")));
			this->map22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map22->Location = System::Drawing::Point(243, 150);
			this->map22->Name = L"map22";
			this->map22->Size = System::Drawing::Size(41, 41);
			this->map22->TabIndex = 10;
			this->map22->TabStop = false;
			this->map22->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map23
			// 
			this->map23->BackColor = System::Drawing::Color::Transparent;
			this->map23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map23.BackgroundImage")));
			this->map23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map23->Location = System::Drawing::Point(243, 188);
			this->map23->Name = L"map23";
			this->map23->Size = System::Drawing::Size(41, 41);
			this->map23->TabIndex = 9;
			this->map23->TabStop = false;
			this->map23->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map24
			// 
			this->map24->BackColor = System::Drawing::Color::Transparent;
			this->map24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map24.BackgroundImage")));
			this->map24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map24->Location = System::Drawing::Point(243, 226);
			this->map24->Name = L"map24";
			this->map24->Size = System::Drawing::Size(41, 41);
			this->map24->TabIndex = 8;
			this->map24->TabStop = false;
			this->map24->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishBlue0
			// 
			this->finishBlue0->BackColor = System::Drawing::Color::Transparent;
			this->finishBlue0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishBlue0.BackgroundImage")));
			this->finishBlue0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishBlue0->Location = System::Drawing::Point(205, 112);
			this->finishBlue0->Name = L"finishBlue0";
			this->finishBlue0->Size = System::Drawing::Size(41, 41);
			this->finishBlue0->TabIndex = 15;
			this->finishBlue0->TabStop = false;
			// 
			// finishBlue1
			// 
			this->finishBlue1->BackColor = System::Drawing::Color::Transparent;
			this->finishBlue1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishBlue1.BackgroundImage")));
			this->finishBlue1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishBlue1->Location = System::Drawing::Point(205, 150);
			this->finishBlue1->Name = L"finishBlue1";
			this->finishBlue1->Size = System::Drawing::Size(41, 41);
			this->finishBlue1->TabIndex = 14;
			this->finishBlue1->TabStop = false;
			// 
			// finishBlue2
			// 
			this->finishBlue2->BackColor = System::Drawing::Color::Transparent;
			this->finishBlue2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishBlue2.BackgroundImage")));
			this->finishBlue2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishBlue2->Location = System::Drawing::Point(205, 188);
			this->finishBlue2->Name = L"finishBlue2";
			this->finishBlue2->Size = System::Drawing::Size(41, 41);
			this->finishBlue2->TabIndex = 13;
			this->finishBlue2->TabStop = false;
			// 
			// finishBlue3
			// 
			this->finishBlue3->BackColor = System::Drawing::Color::Transparent;
			this->finishBlue3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishBlue3.BackgroundImage")));
			this->finishBlue3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishBlue3->Location = System::Drawing::Point(205, 226);
			this->finishBlue3->Name = L"finishBlue3";
			this->finishBlue3->Size = System::Drawing::Size(41, 41);
			this->finishBlue3->TabIndex = 12;
			this->finishBlue3->TabStop = false;
			// 
			// finishYellow2
			// 
			this->finishYellow2->BackColor = System::Drawing::Color::Transparent;
			this->finishYellow2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishYellow2.BackgroundImage")));
			this->finishYellow2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishYellow2->Location = System::Drawing::Point(281, 264);
			this->finishYellow2->Name = L"finishYellow2";
			this->finishYellow2->Size = System::Drawing::Size(41, 41);
			this->finishYellow2->TabIndex = 18;
			this->finishYellow2->TabStop = false;
			// 
			// map33
			// 
			this->map33->BackColor = System::Drawing::Color::Transparent;
			this->map33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map33.BackgroundImage")));
			this->map33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map33->Location = System::Drawing::Point(281, 302);
			this->map33->Name = L"map33";
			this->map33->Size = System::Drawing::Size(41, 41);
			this->map33->TabIndex = 17;
			this->map33->TabStop = false;
			this->map33->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map25
			// 
			this->map25->BackColor = System::Drawing::Color::Transparent;
			this->map25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map25.BackgroundImage")));
			this->map25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map25->Location = System::Drawing::Point(281, 226);
			this->map25->Name = L"map25";
			this->map25->Size = System::Drawing::Size(41, 41);
			this->map25->TabIndex = 16;
			this->map25->TabStop = false;
			this->map25->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishYellow1
			// 
			this->finishYellow1->BackColor = System::Drawing::Color::Transparent;
			this->finishYellow1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishYellow1.BackgroundImage")));
			this->finishYellow1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishYellow1->Location = System::Drawing::Point(319, 264);
			this->finishYellow1->Name = L"finishYellow1";
			this->finishYellow1->Size = System::Drawing::Size(41, 41);
			this->finishYellow1->TabIndex = 21;
			this->finishYellow1->TabStop = false;
			// 
			// map32
			// 
			this->map32->BackColor = System::Drawing::Color::Transparent;
			this->map32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map32.BackgroundImage")));
			this->map32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map32->Location = System::Drawing::Point(319, 302);
			this->map32->Name = L"map32";
			this->map32->Size = System::Drawing::Size(41, 41);
			this->map32->TabIndex = 20;
			this->map32->TabStop = false;
			this->map32->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map26
			// 
			this->map26->BackColor = System::Drawing::Color::Transparent;
			this->map26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map26.BackgroundImage")));
			this->map26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map26->Location = System::Drawing::Point(319, 226);
			this->map26->Name = L"map26";
			this->map26->Size = System::Drawing::Size(41, 41);
			this->map26->TabIndex = 19;
			this->map26->TabStop = false;
			this->map26->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map29
			// 
			this->map29->BackColor = System::Drawing::Color::Transparent;
			this->map29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map29.BackgroundImage")));
			this->map29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map29->Location = System::Drawing::Point(395, 264);
			this->map29->Name = L"map29";
			this->map29->Size = System::Drawing::Size(41, 41);
			this->map29->TabIndex = 27;
			this->map29->TabStop = false;
			this->map29->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map30
			// 
			this->map30->BackColor = System::Drawing::Color::Transparent;
			this->map30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map30.BackgroundImage")));
			this->map30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map30->Location = System::Drawing::Point(395, 302);
			this->map30->Name = L"map30";
			this->map30->Size = System::Drawing::Size(41, 41);
			this->map30->TabIndex = 26;
			this->map30->TabStop = false;
			this->map30->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map28
			// 
			this->map28->BackColor = System::Drawing::Color::Transparent;
			this->map28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map28.BackgroundImage")));
			this->map28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map28->Location = System::Drawing::Point(395, 226);
			this->map28->Name = L"map28";
			this->map28->Size = System::Drawing::Size(41, 41);
			this->map28->TabIndex = 25;
			this->map28->TabStop = false;
			this->map28->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishYellow0
			// 
			this->finishYellow0->BackColor = System::Drawing::Color::Transparent;
			this->finishYellow0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishYellow0.BackgroundImage")));
			this->finishYellow0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishYellow0->Location = System::Drawing::Point(357, 264);
			this->finishYellow0->Name = L"finishYellow0";
			this->finishYellow0->Size = System::Drawing::Size(41, 41);
			this->finishYellow0->TabIndex = 24;
			this->finishYellow0->TabStop = false;
			// 
			// map31
			// 
			this->map31->BackColor = System::Drawing::Color::Transparent;
			this->map31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map31.BackgroundImage")));
			this->map31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map31->Location = System::Drawing::Point(357, 302);
			this->map31->Name = L"map31";
			this->map31->Size = System::Drawing::Size(41, 41);
			this->map31->TabIndex = 23;
			this->map31->TabStop = false;
			this->map31->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map27
			// 
			this->map27->BackColor = System::Drawing::Color::Transparent;
			this->map27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map27.BackgroundImage")));
			this->map27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map27->Location = System::Drawing::Point(357, 226);
			this->map27->Name = L"map27";
			this->map27->Size = System::Drawing::Size(41, 41);
			this->map27->TabIndex = 22;
			this->map27->TabStop = false;
			this->map27->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map34
			// 
			this->map34->BackColor = System::Drawing::Color::Transparent;
			this->map34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map34.BackgroundImage")));
			this->map34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map34->Location = System::Drawing::Point(243, 302);
			this->map34->Name = L"map34";
			this->map34->Size = System::Drawing::Size(41, 41);
			this->map34->TabIndex = 30;
			this->map34->TabStop = false;
			this->map34->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map35
			// 
			this->map35->BackColor = System::Drawing::Color::Transparent;
			this->map35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map35.BackgroundImage")));
			this->map35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map35->Location = System::Drawing::Point(243, 340);
			this->map35->Name = L"map35";
			this->map35->Size = System::Drawing::Size(41, 41);
			this->map35->TabIndex = 29;
			this->map35->TabStop = false;
			this->map35->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishYellow3
			// 
			this->finishYellow3->BackColor = System::Drawing::Color::Transparent;
			this->finishYellow3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishYellow3.BackgroundImage")));
			this->finishYellow3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishYellow3->Location = System::Drawing::Point(243, 264);
			this->finishYellow3->Name = L"finishYellow3";
			this->finishYellow3->Size = System::Drawing::Size(41, 41);
			this->finishYellow3->TabIndex = 28;
			this->finishYellow3->TabStop = false;
			// 
			// finishRed1
			// 
			this->finishRed1->BackColor = System::Drawing::Color::Transparent;
			this->finishRed1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishRed1.BackgroundImage")));
			this->finishRed1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishRed1->Location = System::Drawing::Point(205, 378);
			this->finishRed1->Name = L"finishRed1";
			this->finishRed1->Size = System::Drawing::Size(41, 41);
			this->finishRed1->TabIndex = 41;
			this->finishRed1->TabStop = false;
			// 
			// finishRed0
			// 
			this->finishRed0->BackColor = System::Drawing::Color::Transparent;
			this->finishRed0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishRed0.BackgroundImage")));
			this->finishRed0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishRed0->Location = System::Drawing::Point(205, 416);
			this->finishRed0->Name = L"finishRed0";
			this->finishRed0->Size = System::Drawing::Size(41, 41);
			this->finishRed0->TabIndex = 40;
			this->finishRed0->TabStop = false;
			// 
			// map39
			// 
			this->map39->BackColor = System::Drawing::Color::Transparent;
			this->map39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map39.BackgroundImage")));
			this->map39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map39->Location = System::Drawing::Point(205, 454);
			this->map39->Name = L"map39";
			this->map39->Size = System::Drawing::Size(41, 41);
			this->map39->TabIndex = 39;
			this->map39->TabStop = false;
			this->map39->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map36
			// 
			this->map36->BackColor = System::Drawing::Color::Transparent;
			this->map36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map36.BackgroundImage")));
			this->map36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map36->Location = System::Drawing::Point(243, 378);
			this->map36->Name = L"map36";
			this->map36->Size = System::Drawing::Size(41, 41);
			this->map36->TabIndex = 38;
			this->map36->TabStop = false;
			this->map36->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map37
			// 
			this->map37->BackColor = System::Drawing::Color::Transparent;
			this->map37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map37.BackgroundImage")));
			this->map37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map37->Location = System::Drawing::Point(243, 416);
			this->map37->Name = L"map37";
			this->map37->Size = System::Drawing::Size(41, 41);
			this->map37->TabIndex = 37;
			this->map37->TabStop = false;
			this->map37->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map38
			// 
			this->map38->BackColor = System::Drawing::Color::Transparent;
			this->map38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map38.BackgroundImage")));
			this->map38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map38->Location = System::Drawing::Point(243, 454);
			this->map38->Name = L"map38";
			this->map38->Size = System::Drawing::Size(41, 41);
			this->map38->TabIndex = 36;
			this->map38->TabStop = false;
			this->map38->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map03
			// 
			this->map03->BackColor = System::Drawing::Color::Transparent;
			this->map03->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map03.BackgroundImage")));
			this->map03->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map03->Location = System::Drawing::Point(167, 340);
			this->map03->Name = L"map03";
			this->map03->Size = System::Drawing::Size(41, 41);
			this->map03->TabIndex = 35;
			this->map03->TabStop = false;
			this->map03->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishRed2
			// 
			this->finishRed2->BackColor = System::Drawing::Color::Transparent;
			this->finishRed2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishRed2.BackgroundImage")));
			this->finishRed2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishRed2->Location = System::Drawing::Point(205, 340);
			this->finishRed2->Name = L"finishRed2";
			this->finishRed2->Size = System::Drawing::Size(41, 41);
			this->finishRed2->TabIndex = 34;
			this->finishRed2->TabStop = false;
			// 
			// map02
			// 
			this->map02->BackColor = System::Drawing::Color::Transparent;
			this->map02->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map02.BackgroundImage")));
			this->map02->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map02->Location = System::Drawing::Point(167, 378);
			this->map02->Name = L"map02";
			this->map02->Size = System::Drawing::Size(41, 41);
			this->map02->TabIndex = 33;
			this->map02->TabStop = false;
			this->map02->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map01
			// 
			this->map01->BackColor = System::Drawing::Color::Transparent;
			this->map01->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map01.BackgroundImage")));
			this->map01->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map01->Location = System::Drawing::Point(167, 416);
			this->map01->Name = L"map01";
			this->map01->Size = System::Drawing::Size(41, 41);
			this->map01->TabIndex = 32;
			this->map01->TabStop = false;
			this->map01->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map00
			// 
			this->map00->BackColor = System::Drawing::Color::Transparent;
			this->map00->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map00.BackgroundImage")));
			this->map00->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map00->Location = System::Drawing::Point(167, 454);
			this->map00->Name = L"map00";
			this->map00->Size = System::Drawing::Size(41, 41);
			this->map00->TabIndex = 31;
			this->map00->TabStop = false;
			this->map00->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishRed3
			// 
			this->finishRed3->BackColor = System::Drawing::Color::Transparent;
			this->finishRed3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishRed3.BackgroundImage")));
			this->finishRed3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishRed3->Location = System::Drawing::Point(205, 302);
			this->finishRed3->Name = L"finishRed3";
			this->finishRed3->Size = System::Drawing::Size(41, 41);
			this->finishRed3->TabIndex = 42;
			this->finishRed3->TabStop = false;
			// 
			// finishGreen2
			// 
			this->finishGreen2->BackColor = System::Drawing::Color::Transparent;
			this->finishGreen2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishGreen2.BackgroundImage")));
			this->finishGreen2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishGreen2->Location = System::Drawing::Point(129, 264);
			this->finishGreen2->Name = L"finishGreen2";
			this->finishGreen2->Size = System::Drawing::Size(41, 41);
			this->finishGreen2->TabIndex = 54;
			this->finishGreen2->TabStop = false;
			// 
			// map05
			// 
			this->map05->BackColor = System::Drawing::Color::Transparent;
			this->map05->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map05.BackgroundImage")));
			this->map05->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map05->Location = System::Drawing::Point(129, 302);
			this->map05->Name = L"map05";
			this->map05->Size = System::Drawing::Size(41, 41);
			this->map05->TabIndex = 53;
			this->map05->TabStop = false;
			this->map05->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map13
			// 
			this->map13->BackColor = System::Drawing::Color::Transparent;
			this->map13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map13.BackgroundImage")));
			this->map13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map13->Location = System::Drawing::Point(129, 226);
			this->map13->Name = L"map13";
			this->map13->Size = System::Drawing::Size(41, 41);
			this->map13->TabIndex = 52;
			this->map13->TabStop = false;
			this->map13->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishGreen1
			// 
			this->finishGreen1->BackColor = System::Drawing::Color::Transparent;
			this->finishGreen1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishGreen1.BackgroundImage")));
			this->finishGreen1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishGreen1->Location = System::Drawing::Point(91, 264);
			this->finishGreen1->Name = L"finishGreen1";
			this->finishGreen1->Size = System::Drawing::Size(41, 41);
			this->finishGreen1->TabIndex = 51;
			this->finishGreen1->TabStop = false;
			// 
			// map06
			// 
			this->map06->BackColor = System::Drawing::Color::Transparent;
			this->map06->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map06.BackgroundImage")));
			this->map06->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map06->Location = System::Drawing::Point(91, 302);
			this->map06->Name = L"map06";
			this->map06->Size = System::Drawing::Size(41, 41);
			this->map06->TabIndex = 50;
			this->map06->TabStop = false;
			this->map06->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map12
			// 
			this->map12->BackColor = System::Drawing::Color::Transparent;
			this->map12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map12.BackgroundImage")));
			this->map12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map12->Location = System::Drawing::Point(91, 226);
			this->map12->Name = L"map12";
			this->map12->Size = System::Drawing::Size(41, 41);
			this->map12->TabIndex = 49;
			this->map12->TabStop = false;
			this->map12->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishGreen0
			// 
			this->finishGreen0->BackColor = System::Drawing::Color::Transparent;
			this->finishGreen0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishGreen0.BackgroundImage")));
			this->finishGreen0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishGreen0->Location = System::Drawing::Point(53, 264);
			this->finishGreen0->Name = L"finishGreen0";
			this->finishGreen0->Size = System::Drawing::Size(41, 41);
			this->finishGreen0->TabIndex = 48;
			this->finishGreen0->TabStop = false;
			// 
			// map07
			// 
			this->map07->BackColor = System::Drawing::Color::Transparent;
			this->map07->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map07.BackgroundImage")));
			this->map07->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map07->Location = System::Drawing::Point(53, 302);
			this->map07->Name = L"map07";
			this->map07->Size = System::Drawing::Size(41, 41);
			this->map07->TabIndex = 47;
			this->map07->TabStop = false;
			this->map07->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map11
			// 
			this->map11->BackColor = System::Drawing::Color::Transparent;
			this->map11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map11.BackgroundImage")));
			this->map11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map11->Location = System::Drawing::Point(53, 226);
			this->map11->Name = L"map11";
			this->map11->Size = System::Drawing::Size(41, 41);
			this->map11->TabIndex = 46;
			this->map11->TabStop = false;
			this->map11->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map09
			// 
			this->map09->BackColor = System::Drawing::Color::Transparent;
			this->map09->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map09.BackgroundImage")));
			this->map09->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map09->Location = System::Drawing::Point(15, 264);
			this->map09->Name = L"map09";
			this->map09->Size = System::Drawing::Size(41, 41);
			this->map09->TabIndex = 45;
			this->map09->TabStop = false;
			this->map09->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map08
			// 
			this->map08->BackColor = System::Drawing::Color::Transparent;
			this->map08->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map08.BackgroundImage")));
			this->map08->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map08->Location = System::Drawing::Point(15, 302);
			this->map08->Name = L"map08";
			this->map08->Size = System::Drawing::Size(41, 41);
			this->map08->TabIndex = 44;
			this->map08->TabStop = false;
			this->map08->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// map10
			// 
			this->map10->BackColor = System::Drawing::Color::Transparent;
			this->map10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map10.BackgroundImage")));
			this->map10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map10->Location = System::Drawing::Point(15, 226);
			this->map10->Name = L"map10";
			this->map10->Size = System::Drawing::Size(41, 41);
			this->map10->TabIndex = 43;
			this->map10->TabStop = false;
			this->map10->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// finishGreen3
			// 
			this->finishGreen3->BackColor = System::Drawing::Color::Transparent;
			this->finishGreen3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishGreen3.BackgroundImage")));
			this->finishGreen3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishGreen3->Location = System::Drawing::Point(167, 264);
			this->finishGreen3->Name = L"finishGreen3";
			this->finishGreen3->Size = System::Drawing::Size(41, 41);
			this->finishGreen3->TabIndex = 55;
			this->finishGreen3->TabStop = false;
			// 
			// map04
			// 
			this->map04->BackColor = System::Drawing::Color::Transparent;
			this->map04->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map04.BackgroundImage")));
			this->map04->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->map04->Location = System::Drawing::Point(167, 302);
			this->map04->Name = L"map04";
			this->map04->Size = System::Drawing::Size(41, 41);
			this->map04->TabIndex = 56;
			this->map04->TabStop = false;
			this->map04->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startRed3
			// 
			this->startRed3->BackColor = System::Drawing::Color::Transparent;
			this->startRed3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startRed3.BackgroundImage")));
			this->startRed3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startRed3->Location = System::Drawing::Point(53, 416);
			this->startRed3->Name = L"startRed3";
			this->startRed3->Size = System::Drawing::Size(41, 41);
			this->startRed3->TabIndex = 60;
			this->startRed3->TabStop = false;
			this->startRed3->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startRed2
			// 
			this->startRed2->BackColor = System::Drawing::Color::Transparent;
			this->startRed2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startRed2.BackgroundImage")));
			this->startRed2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startRed2->Location = System::Drawing::Point(91, 416);
			this->startRed2->Name = L"startRed2";
			this->startRed2->Size = System::Drawing::Size(41, 41);
			this->startRed2->TabIndex = 59;
			this->startRed2->TabStop = false;
			this->startRed2->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startRed0
			// 
			this->startRed0->BackColor = System::Drawing::Color::Transparent;
			this->startRed0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startRed0.BackgroundImage")));
			this->startRed0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startRed0->Location = System::Drawing::Point(53, 378);
			this->startRed0->Name = L"startRed0";
			this->startRed0->Size = System::Drawing::Size(41, 41);
			this->startRed0->TabIndex = 58;
			this->startRed0->TabStop = false;
			this->startRed0->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startRed1
			// 
			this->startRed1->BackColor = System::Drawing::Color::Transparent;
			this->startRed1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startRed1.BackgroundImage")));
			this->startRed1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startRed1->Location = System::Drawing::Point(91, 378);
			this->startRed1->Name = L"startRed1";
			this->startRed1->Size = System::Drawing::Size(41, 41);
			this->startRed1->TabIndex = 57;
			this->startRed1->TabStop = false;
			this->startRed1->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startYellow3
			// 
			this->startYellow3->BackColor = System::Drawing::Color::Transparent;
			this->startYellow3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startYellow3.BackgroundImage")));
			this->startYellow3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startYellow3->Location = System::Drawing::Point(319, 416);
			this->startYellow3->Name = L"startYellow3";
			this->startYellow3->Size = System::Drawing::Size(41, 41);
			this->startYellow3->TabIndex = 64;
			this->startYellow3->TabStop = false;
			this->startYellow3->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startYellow2
			// 
			this->startYellow2->BackColor = System::Drawing::Color::Transparent;
			this->startYellow2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startYellow2.BackgroundImage")));
			this->startYellow2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startYellow2->Location = System::Drawing::Point(357, 416);
			this->startYellow2->Name = L"startYellow2";
			this->startYellow2->Size = System::Drawing::Size(41, 41);
			this->startYellow2->TabIndex = 63;
			this->startYellow2->TabStop = false;
			this->startYellow2->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startYellow0
			// 
			this->startYellow0->BackColor = System::Drawing::Color::Transparent;
			this->startYellow0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startYellow0.BackgroundImage")));
			this->startYellow0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startYellow0->Location = System::Drawing::Point(319, 378);
			this->startYellow0->Name = L"startYellow0";
			this->startYellow0->Size = System::Drawing::Size(41, 41);
			this->startYellow0->TabIndex = 62;
			this->startYellow0->TabStop = false;
			this->startYellow0->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startBlue2
			// 
			this->startBlue2->BackColor = System::Drawing::Color::Transparent;
			this->startBlue2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startBlue2.BackgroundImage")));
			this->startBlue2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startBlue2->Location = System::Drawing::Point(357, 150);
			this->startBlue2->Name = L"startBlue2";
			this->startBlue2->Size = System::Drawing::Size(41, 41);
			this->startBlue2->TabIndex = 67;
			this->startBlue2->TabStop = false;
			this->startBlue2->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startBlue0
			// 
			this->startBlue0->BackColor = System::Drawing::Color::Transparent;
			this->startBlue0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startBlue0.BackgroundImage")));
			this->startBlue0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startBlue0->Location = System::Drawing::Point(319, 112);
			this->startBlue0->Name = L"startBlue0";
			this->startBlue0->Size = System::Drawing::Size(41, 41);
			this->startBlue0->TabIndex = 66;
			this->startBlue0->TabStop = false;
			this->startBlue0->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startBlue1
			// 
			this->startBlue1->BackColor = System::Drawing::Color::Transparent;
			this->startBlue1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startBlue1.BackgroundImage")));
			this->startBlue1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startBlue1->Location = System::Drawing::Point(357, 112);
			this->startBlue1->Name = L"startBlue1";
			this->startBlue1->Size = System::Drawing::Size(41, 41);
			this->startBlue1->TabIndex = 65;
			this->startBlue1->TabStop = false;
			this->startBlue1->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startGreen2
			// 
			this->startGreen2->BackColor = System::Drawing::Color::Transparent;
			this->startGreen2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startGreen2.BackgroundImage")));
			this->startGreen2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startGreen2->Location = System::Drawing::Point(91, 150);
			this->startGreen2->Name = L"startGreen2";
			this->startGreen2->Size = System::Drawing::Size(41, 40);
			this->startGreen2->TabIndex = 71;
			this->startGreen2->TabStop = false;
			this->startGreen2->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startGreen0
			// 
			this->startGreen0->BackColor = System::Drawing::Color::Transparent;
			this->startGreen0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startGreen0.BackgroundImage")));
			this->startGreen0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startGreen0->Location = System::Drawing::Point(53, 112);
			this->startGreen0->Name = L"startGreen0";
			this->startGreen0->Size = System::Drawing::Size(41, 41);
			this->startGreen0->TabIndex = 70;
			this->startGreen0->TabStop = false;
			this->startGreen0->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startGreen1
			// 
			this->startGreen1->BackColor = System::Drawing::Color::Transparent;
			this->startGreen1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startGreen1.BackgroundImage")));
			this->startGreen1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startGreen1->Location = System::Drawing::Point(91, 112);
			this->startGreen1->Name = L"startGreen1";
			this->startGreen1->Size = System::Drawing::Size(41, 41);
			this->startGreen1->TabIndex = 69;
			this->startGreen1->TabStop = false;
			this->startGreen1->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// startGreen3
			// 
			this->startGreen3->BackColor = System::Drawing::Color::Transparent;
			this->startGreen3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startGreen3.BackgroundImage")));
			this->startGreen3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startGreen3->Location = System::Drawing::Point(53, 150);
			this->startGreen3->Name = L"startGreen3";
			this->startGreen3->Size = System::Drawing::Size(41, 41);
			this->startGreen3->TabIndex = 72;
			this->startGreen3->TabStop = false;
			this->startGreen3->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// player2
			// 
			this->player2->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->player2->Enabled = false;
			this->player2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->player2->ForeColor = System::Drawing::Color::Gray;
			this->player2->Location = System::Drawing::Point(657, 106);
			this->player2->Name = L"player2";
			this->player2->ReadOnly = true;
			this->player2->Size = System::Drawing::Size(184, 32);
			this->player2->TabIndex = 74;
			this->player2->TabStop = false;
			this->player2->Text = L"Player 2";
			this->player2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			// 
			// player4
			// 
			this->player4->BackColor = System::Drawing::Color::Gold;
			this->player4->Enabled = false;
			this->player4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->player4->ForeColor = System::Drawing::Color::Gray;
			this->player4->Location = System::Drawing::Point(657, 144);
			this->player4->Name = L"player4";
			this->player4->ReadOnly = true;
			this->player4->Size = System::Drawing::Size(184, 32);
			this->player4->TabIndex = 76;
			this->player4->TabStop = false;
			this->player4->Text = L"Player 4";
			this->player4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			// 
			// startBlue3
			// 
			this->startBlue3->BackColor = System::Drawing::Color::Transparent;
			this->startBlue3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startBlue3.BackgroundImage")));
			this->startBlue3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startBlue3->Location = System::Drawing::Point(319, 150);
			this->startBlue3->Name = L"startBlue3";
			this->startBlue3->Size = System::Drawing::Size(41, 40);
			this->startBlue3->TabIndex = 68;
			this->startBlue3->TabStop = false;
			this->startBlue3->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// die1
			// 
			this->die1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"die1.BackgroundImage")));
			this->die1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->die1->Location = System::Drawing::Point(467, 360);
			this->die1->Name = L"die1";
			this->die1->Size = System::Drawing::Size(41, 41);
			this->die1->TabIndex = 77;
			this->die1->TabStop = false;
			this->die1->Visible = false;
			// 
			// die2
			// 
			this->die2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"die2.BackgroundImage")));
			this->die2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->die2->Location = System::Drawing::Point(514, 360);
			this->die2->Name = L"die2";
			this->die2->Size = System::Drawing::Size(41, 41);
			this->die2->TabIndex = 78;
			this->die2->TabStop = false;
			this->die2->Visible = false;
			// 
			// die4
			// 
			this->die4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"die4.BackgroundImage")));
			this->die4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->die4->Location = System::Drawing::Point(608, 360);
			this->die4->Name = L"die4";
			this->die4->Size = System::Drawing::Size(41, 41);
			this->die4->TabIndex = 80;
			this->die4->TabStop = false;
			this->die4->Visible = false;
			// 
			// die3
			// 
			this->die3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"die3.BackgroundImage")));
			this->die3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->die3->Location = System::Drawing::Point(561, 360);
			this->die3->Name = L"die3";
			this->die3->Size = System::Drawing::Size(41, 41);
			this->die3->TabIndex = 79;
			this->die3->TabStop = false;
			this->die3->Visible = false;
			// 
			// die6
			// 
			this->die6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"die6.BackgroundImage")));
			this->die6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->die6->Location = System::Drawing::Point(702, 360);
			this->die6->Name = L"die6";
			this->die6->Size = System::Drawing::Size(41, 41);
			this->die6->TabIndex = 82;
			this->die6->TabStop = false;
			this->die6->Visible = false;
			// 
			// die5
			// 
			this->die5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"die5.BackgroundImage")));
			this->die5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->die5->Location = System::Drawing::Point(655, 360);
			this->die5->Name = L"die5";
			this->die5->Size = System::Drawing::Size(41, 41);
			this->die5->TabIndex = 81;
			this->die5->TabStop = false;
			this->die5->Visible = false;
			// 
			// pawnBlue
			// 
			this->pawnBlue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pawnBlue.BackgroundImage")));
			this->pawnBlue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pawnBlue->Location = System::Drawing::Point(467, 407);
			this->pawnBlue->Name = L"pawnBlue";
			this->pawnBlue->Size = System::Drawing::Size(41, 41);
			this->pawnBlue->TabIndex = 84;
			this->pawnBlue->TabStop = false;
			this->pawnBlue->Visible = false;
			// 
			// pawnGreen
			// 
			this->pawnGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pawnGreen.BackgroundImage")));
			this->pawnGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pawnGreen->Location = System::Drawing::Point(514, 407);
			this->pawnGreen->Name = L"pawnGreen";
			this->pawnGreen->Size = System::Drawing::Size(41, 41);
			this->pawnGreen->TabIndex = 85;
			this->pawnGreen->TabStop = false;
			this->pawnGreen->Visible = false;
			// 
			// pawnRed
			// 
			this->pawnRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pawnRed.BackgroundImage")));
			this->pawnRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pawnRed->Location = System::Drawing::Point(561, 407);
			this->pawnRed->Name = L"pawnRed";
			this->pawnRed->Size = System::Drawing::Size(41, 41);
			this->pawnRed->TabIndex = 86;
			this->pawnRed->TabStop = false;
			this->pawnRed->Visible = false;
			// 
			// pawnYellow
			// 
			this->pawnYellow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pawnYellow.BackgroundImage")));
			this->pawnYellow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pawnYellow->Location = System::Drawing::Point(608, 407);
			this->pawnYellow->Name = L"pawnYellow";
			this->pawnYellow->Size = System::Drawing::Size(41, 41);
			this->pawnYellow->TabIndex = 87;
			this->pawnYellow->TabStop = false;
			this->pawnYellow->Visible = false;
			// 
			// mapEmpty
			// 
			this->mapEmpty->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mapEmpty.BackgroundImage")));
			this->mapEmpty->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->mapEmpty->Location = System::Drawing::Point(657, 454);
			this->mapEmpty->Name = L"mapEmpty";
			this->mapEmpty->Size = System::Drawing::Size(41, 41);
			this->mapEmpty->TabIndex = 88;
			this->mapEmpty->TabStop = false;
			this->mapEmpty->Visible = false;
			// 
			// finishBlue
			// 
			this->finishBlue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishBlue.BackgroundImage")));
			this->finishBlue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishBlue->Location = System::Drawing::Point(467, 454);
			this->finishBlue->Name = L"finishBlue";
			this->finishBlue->Size = System::Drawing::Size(41, 41);
			this->finishBlue->TabIndex = 89;
			this->finishBlue->TabStop = false;
			this->finishBlue->Visible = false;
			// 
			// finishGreen
			// 
			this->finishGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishGreen.BackgroundImage")));
			this->finishGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishGreen->Location = System::Drawing::Point(514, 454);
			this->finishGreen->Name = L"finishGreen";
			this->finishGreen->Size = System::Drawing::Size(41, 41);
			this->finishGreen->TabIndex = 90;
			this->finishGreen->TabStop = false;
			this->finishGreen->Visible = false;
			// 
			// finishRed
			// 
			this->finishRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishRed.BackgroundImage")));
			this->finishRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishRed->Location = System::Drawing::Point(561, 454);
			this->finishRed->Name = L"finishRed";
			this->finishRed->Size = System::Drawing::Size(41, 41);
			this->finishRed->TabIndex = 91;
			this->finishRed->TabStop = false;
			this->finishRed->Visible = false;
			// 
			// finishYellow
			// 
			this->finishYellow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"finishYellow.BackgroundImage")));
			this->finishYellow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->finishYellow->Location = System::Drawing::Point(610, 454);
			this->finishYellow->Name = L"finishYellow";
			this->finishYellow->Size = System::Drawing::Size(41, 41);
			this->finishYellow->TabIndex = 92;
			this->finishYellow->TabStop = false;
			this->finishYellow->Visible = false;
			// 
			// cout
			// 
			this->cout->Enabled = false;
			this->cout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->cout->Location = System::Drawing::Point(467, 191);
			this->cout->Name = L"cout";
			this->cout->ReadOnly = true;
			this->cout->Size = System::Drawing::Size(374, 76);
			this->cout->TabIndex = 93;
			this->cout->Text = L"Kliknij kostke, potem pion";
			this->cout->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			// 
			// startYellow1
			// 
			this->startYellow1->BackColor = System::Drawing::Color::Transparent;
			this->startYellow1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"startYellow1.BackgroundImage")));
			this->startYellow1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startYellow1->Location = System::Drawing::Point(357, 378);
			this->startYellow1->Name = L"startYellow1";
			this->startYellow1->Size = System::Drawing::Size(41, 41);
			this->startYellow1->TabIndex = 61;
			this->startYellow1->TabStop = false;
			this->startYellow1->Click += gcnew System::EventHandler(this, &Form1::pictureBox_Click);
			// 
			// die
			// 
			this->die->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"die.BackgroundImage")));
			this->die->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->die->Location = System::Drawing::Point(749, 319);
			this->die->Name = L"die";
			this->die->Size = System::Drawing::Size(82, 82);
			this->die->TabIndex = 94;
			this->die->TabStop = false;
			this->die->Click += gcnew System::EventHandler(this, &Form1::die_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(620, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 95;
			this->label1->Text = L"Czyj ruch";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->muteMusicToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(873, 24);
			this->menuStrip1->TabIndex = 96;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->musicToolStripMenuItem, 
				this->graphicsToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// musicToolStripMenuItem
			// 
			this->musicToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->muteToolStripMenuItem, 
				this->wormsThemeToolStripMenuItem1, this->startToolStripMenuItem, this->windowsXPInstallToolStripMenuItem});
			this->musicToolStripMenuItem->Name = L"musicToolStripMenuItem";
			this->musicToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->musicToolStripMenuItem->Text = L"Music...";
			// 
			// muteToolStripMenuItem
			// 
			this->muteToolStripMenuItem->Name = L"muteToolStripMenuItem";
			this->muteToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->muteToolStripMenuItem->Text = L"(mute)";
			this->muteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::muteToolStripMenuItem_Click);
			// 
			// wormsThemeToolStripMenuItem1
			// 
			this->wormsThemeToolStripMenuItem1->Name = L"wormsThemeToolStripMenuItem1";
			this->wormsThemeToolStripMenuItem1->Size = System::Drawing::Size(174, 22);
			this->wormsThemeToolStripMenuItem1->Text = L"Worms 4";
			this->wormsThemeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::wormsThemeToolStripMenuItem1_Click);
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->startToolStripMenuItem->Text = L"Armageddon";
			this->startToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::startToolStripMenuItem_Click);
			// 
			// windowsXPInstallToolStripMenuItem
			// 
			this->windowsXPInstallToolStripMenuItem->Name = L"windowsXPInstallToolStripMenuItem";
			this->windowsXPInstallToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->windowsXPInstallToolStripMenuItem->Text = L"Windows XP Install";
			this->windowsXPInstallToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::windowsXPInstallToolStripMenuItem_Click);
			// 
			// graphicsToolStripMenuItem
			// 
			this->graphicsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->modestToolStripMenuItem, 
				this->improvedToolStripMenuItem});
			this->graphicsToolStripMenuItem->Name = L"graphicsToolStripMenuItem";
			this->graphicsToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->graphicsToolStripMenuItem->Text = L"Graphics...";
			this->graphicsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::graphicsToolStripMenuItem_Click);
			// 
			// modestToolStripMenuItem
			// 
			this->modestToolStripMenuItem->Name = L"modestToolStripMenuItem";
			this->modestToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->modestToolStripMenuItem->Text = L"Modest";
			this->modestToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::modestToolStripMenuItem_Click);
			// 
			// improvedToolStripMenuItem
			// 
			this->improvedToolStripMenuItem->Name = L"improvedToolStripMenuItem";
			this->improvedToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->improvedToolStripMenuItem->Text = L"Enhanced";
			this->improvedToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::improvedToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->exitToolStripMenuItem->Text = L"Save and Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// muteMusicToolStripMenuItem
			// 
			this->muteMusicToolStripMenuItem->Name = L"muteMusicToolStripMenuItem";
			this->muteMusicToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->muteMusicToolStripMenuItem->Text = L"Mute music";
			this->muteMusicToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::muteMusicToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->aboutToolStripMenuItem->Text = L"About...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// player3
			// 
			this->player3->BackColor = System::Drawing::Color::Blue;
			this->player3->Enabled = false;
			this->player3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->player3->ForeColor = System::Drawing::Color::Gray;
			this->player3->Location = System::Drawing::Point(467, 144);
			this->player3->Name = L"player3";
			this->player3->ReadOnly = true;
			this->player3->Size = System::Drawing::Size(184, 32);
			this->player3->TabIndex = 75;
			this->player3->TabStop = false;
			this->player3->Text = L"Player 3";
			this->player3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(763, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 16);
			this->label2->TabIndex = 97;
			this->label2->Text = L"Spacebar";
			// 
			// player1
			// 
			this->player1->BackColor = System::Drawing::Color::Red;
			this->player1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->player1->ForeColor = System::Drawing::Color::Gray;
			this->player1->Location = System::Drawing::Point(467, 106);
			this->player1->Name = L"player1";
			this->player1->ReadOnly = true;
			this->player1->Size = System::Drawing::Size(184, 32);
			this->player1->TabIndex = 73;
			this->player1->TabStop = false;
			this->player1->Text = L"Player 1";
			this->player1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			// 
			// pauza
			// 
			this->pauza->Enabled = true;
			this->pauza->Interval = 90000;
			this->pauza->Tick += gcnew System::EventHandler(this, &Form1::pauza_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)), 
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(873, 506);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->die);
			this->Controls->Add(this->cout);
			this->Controls->Add(this->finishYellow);
			this->Controls->Add(this->finishRed);
			this->Controls->Add(this->finishGreen);
			this->Controls->Add(this->finishBlue);
			this->Controls->Add(this->mapEmpty);
			this->Controls->Add(this->pawnYellow);
			this->Controls->Add(this->pawnRed);
			this->Controls->Add(this->pawnGreen);
			this->Controls->Add(this->pawnBlue);
			this->Controls->Add(this->die6);
			this->Controls->Add(this->die5);
			this->Controls->Add(this->die4);
			this->Controls->Add(this->die3);
			this->Controls->Add(this->die2);
			this->Controls->Add(this->die1);
			this->Controls->Add(this->map25);
			this->Controls->Add(this->player4);
			this->Controls->Add(this->player3);
			this->Controls->Add(this->player2);
			this->Controls->Add(this->player1);
			this->Controls->Add(this->startGreen3);
			this->Controls->Add(this->startGreen2);
			this->Controls->Add(this->startGreen0);
			this->Controls->Add(this->startGreen1);
			this->Controls->Add(this->startBlue3);
			this->Controls->Add(this->startBlue2);
			this->Controls->Add(this->startBlue0);
			this->Controls->Add(this->startBlue1);
			this->Controls->Add(this->startYellow3);
			this->Controls->Add(this->startYellow2);
			this->Controls->Add(this->startYellow0);
			this->Controls->Add(this->startYellow1);
			this->Controls->Add(this->startRed3);
			this->Controls->Add(this->startRed2);
			this->Controls->Add(this->startRed0);
			this->Controls->Add(this->startRed1);
			this->Controls->Add(this->map04);
			this->Controls->Add(this->finishGreen3);
			this->Controls->Add(this->finishGreen2);
			this->Controls->Add(this->map05);
			this->Controls->Add(this->map13);
			this->Controls->Add(this->finishGreen1);
			this->Controls->Add(this->map06);
			this->Controls->Add(this->map12);
			this->Controls->Add(this->finishGreen0);
			this->Controls->Add(this->map07);
			this->Controls->Add(this->map11);
			this->Controls->Add(this->map09);
			this->Controls->Add(this->map08);
			this->Controls->Add(this->map10);
			this->Controls->Add(this->finishRed3);
			this->Controls->Add(this->finishRed1);
			this->Controls->Add(this->finishRed0);
			this->Controls->Add(this->map39);
			this->Controls->Add(this->map36);
			this->Controls->Add(this->map37);
			this->Controls->Add(this->map38);
			this->Controls->Add(this->map03);
			this->Controls->Add(this->finishRed2);
			this->Controls->Add(this->map02);
			this->Controls->Add(this->map01);
			this->Controls->Add(this->map00);
			this->Controls->Add(this->map34);
			this->Controls->Add(this->map35);
			this->Controls->Add(this->finishYellow3);
			this->Controls->Add(this->map29);
			this->Controls->Add(this->map30);
			this->Controls->Add(this->map28);
			this->Controls->Add(this->finishYellow0);
			this->Controls->Add(this->map31);
			this->Controls->Add(this->map27);
			this->Controls->Add(this->finishYellow1);
			this->Controls->Add(this->map32);
			this->Controls->Add(this->map26);
			this->Controls->Add(this->finishYellow2);
			this->Controls->Add(this->map33);
			this->Controls->Add(this->finishBlue0);
			this->Controls->Add(this->finishBlue1);
			this->Controls->Add(this->finishBlue2);
			this->Controls->Add(this->finishBlue3);
			this->Controls->Add(this->map21);
			this->Controls->Add(this->map22);
			this->Controls->Add(this->map23);
			this->Controls->Add(this->map24);
			this->Controls->Add(this->map18);
			this->Controls->Add(this->map19);
			this->Controls->Add(this->map20);
			this->Controls->Add(this->map17);
			this->Controls->Add(this->map16);
			this->Controls->Add(this->map15);
			this->Controls->Add(this->map14);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Gra w chinczyka (Ludo Game)";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map00))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map06))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map07))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map09))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map08))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startRed3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startRed2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startRed0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startRed1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startYellow3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startYellow2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startYellow0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startBlue2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startBlue0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startBlue1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startGreen2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startGreen0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startGreen1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startGreen3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startBlue3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pawnBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pawnGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pawnRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pawnYellow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->mapEmpty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->finishYellow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->startYellow1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->die))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}







#pragma endregion








	
/////////////////////////








		 
#pragma region Moje Rzeczy

void InitializeComponentMojeRzeczy()
{
	// Wypelnienie tablicy uchwytami

		// kazdy klucz otrzmuje  uchwyt do pola


	// Zacznij od pol startu 

			tabStart[0] = this ->startRed0 ;
			tabStart[1] = this ->startRed1 ;
			tabStart[2] = this ->startRed2 ;
			tabStart[3] = this ->startRed3 ;


			tabStart[4] = this ->startGreen0 ;
			tabStart[5] = this ->startGreen1 ;
			tabStart[6] = this ->startGreen2 ;
			tabStart[7] = this ->startGreen3 ;

			tabStart[8] = this ->startBlue0 ;
			tabStart[9] = this ->startBlue1 ;
			tabStart[10] = this ->startBlue2 ;
			tabStart[11] = this ->startBlue3 ;

			tabStart[12] = this ->startYellow0 ;
			tabStart[13] = this ->startYellow1 ;
			tabStart[14] = this ->startYellow2 ;
			tabStart[15] = this ->startYellow3 ;
			
			
// i mety kazdego gracza
		// bo sa te pola jednego typu

			tabMeta[0] = this ->finishRed0 ;
			tabMeta[1] = this ->finishRed1 ;
			tabMeta[2] = this ->finishRed2 ;
			tabMeta[3] = this ->finishRed3 ;

			tabMeta[4] = this ->finishGreen0 ;
			tabMeta[5] = this ->finishGreen1 ;
			tabMeta[6] = this ->finishGreen2 ;
			tabMeta[7] = this ->finishGreen3 ;

			tabMeta[8] = this ->finishBlue0 ;
			tabMeta[9] = this ->finishBlue1 ;
			tabMeta[10] = this ->finishBlue2 ;
			tabMeta[11] = this ->finishBlue3 ;

			tabMeta[12] = this ->finishYellow0 ;
			tabMeta[13] = this ->finishYellow1 ;
			tabMeta[14] = this ->finishYellow2 ;
			tabMeta[15] = this ->finishYellow3 ;


	// Nastepnie przygotuj mape trasy
	// jakby dla kazdego z 4 GRACZY Z OSOBNA
	//											po 40 pol planszy
			// bez uwgzlednienia +6 pol w zapasie

		for ( int i = 0 ; i <  DLUGOSC_MAPY  ; i += 40 ) 
		{

			tabMapa[i+0] = this ->map00 ;
			tabMapa[i+1] = this ->map01 ;
			tabMapa[i+2] = this ->map02 ;
			tabMapa[i+3] = this ->map03 ;
			tabMapa[i+4] = this ->map04 ;
			tabMapa[i+5] = this ->map05 ;
			tabMapa[i+6] = this ->map06 ;
			tabMapa[i+7] = this ->map07 ;
			tabMapa[i+8] = this ->map08 ;
			tabMapa[i+9] = this ->map09 ;
			
			tabMapa[i+10] = this ->map10 ;
			tabMapa[i+11] = this ->map11 ;
			tabMapa[i+12] = this ->map12 ;
			tabMapa[i+13] = this ->map13 ;
			tabMapa[i+14] = this ->map14 ;
			tabMapa[i+15] = this ->map15 ;
			tabMapa[i+16] = this ->map16 ;
			tabMapa[i+17] = this ->map17 ;
			tabMapa[i+18] = this ->map18 ;
			tabMapa[i+19] = this ->map19 ;

			tabMapa[i+20] = this ->map20 ;
			tabMapa[i+21] = this ->map21 ;
			tabMapa[i+22] = this ->map22 ;
			tabMapa[i+23] = this ->map23 ;
			tabMapa[i+24] = this ->map24 ;
			tabMapa[i+25] = this ->map25 ;
			tabMapa[i+26] = this ->map26 ;
			tabMapa[i+27] = this ->map27 ;
			tabMapa[i+28] = this ->map28 ;
			tabMapa[i+29] = this ->map29 ;

			tabMapa[i+30] = this ->map30 ;
			tabMapa[i+31] = this ->map31 ;
			tabMapa[i+32] = this ->map32 ;
			tabMapa[i+33] = this ->map33 ;
			tabMapa[i+34] = this ->map34 ;
			tabMapa[i+35] = this ->map35 ;
			tabMapa[i+36] = this ->map36 ;
			tabMapa[i+37] = this ->map37 ;
			tabMapa[i+38] = this ->map38 ;
			tabMapa[i+39] = this ->map39 ;
			
		}
				
}

	

#pragma endregion 





private : void tworzStartMete ()
{

			  // Przemiataj po kazdym pionku
			  // czy znajduja sie we ww. polach
			  // dobranych parami


	 // R-G-B-Y 0,1,2,3-4,5,6,7-8,9,10,11-12,13,14,15

	int tabOffset = 0 ;


	// Red 0
	
			for ( int pion = 0 ; pion < 4 ; pion ++ )
			{
			

				switch ( plansza ->getStart ( 0 , pion ) )
				{

				
				case '.' :

					this ->tabStart [pion +tabOffset] ->BackgroundImage = this -> finishRed ->BackgroundImage;
					
					break ;


				default :

					this ->tabStart [pion +tabOffset] ->BackgroundImage = this -> pawnRed ->BackgroundImage;

					break ;

				}

				
				switch ( plansza ->getMeta ( 0 , pion ) )
				{

				
				case '.' :

					this ->tabMeta [pion +tabOffset] ->BackgroundImage = this -> finishRed ->BackgroundImage;
					
					break ;


				default :

					this ->tabMeta [pion +tabOffset] ->BackgroundImage = this -> pawnRed ->BackgroundImage;

					break ;

				}

			}


	










  // Green 1

			tabOffset += 4 ;


			for ( int pion = 0 ; pion < 4 ; pion ++ )
			{
	
				switch ( plansza ->getStart ( 1 , pion ) )
				{

				
				case '.' :

					this ->tabStart [pion +tabOffset] ->BackgroundImage = this -> finishGreen ->BackgroundImage;
					
					break ;


				default :

					this ->tabStart [pion +tabOffset] ->BackgroundImage = this -> pawnGreen ->BackgroundImage;

					break ;

				}

				
				switch ( plansza ->getMeta ( 1 , pion ) )
				{

				
				case '.' :

					this ->tabMeta [pion +tabOffset] ->BackgroundImage = this -> finishGreen ->BackgroundImage;
					
					break ;


				default :

					this ->tabMeta [pion +tabOffset] ->BackgroundImage = this -> pawnGreen ->BackgroundImage;

					break ;

				}
			}















// Blue 2
			
			tabOffset += 4 ;


			for ( int pion = 0 ; pion < 4 ; pion ++ )
			{
	
				switch ( plansza ->getStart ( 2 , pion ) )
				{

				
				case '.' :

					this ->tabStart [pion +tabOffset] ->BackgroundImage = this -> finishBlue ->BackgroundImage;
					
					break ;


				default :

					this ->tabStart [pion +tabOffset] ->BackgroundImage = this -> pawnBlue ->BackgroundImage;

					break ;

				}


				switch ( plansza ->getMeta ( 2 , pion ) )
				{

				case '.' :

					this ->tabMeta [pion +tabOffset] ->BackgroundImage = this -> finishBlue ->BackgroundImage;
					
					break ;


				default :

					this ->tabMeta [pion +tabOffset] ->BackgroundImage = this -> pawnBlue ->BackgroundImage;

					break ;

				}
			}














  // Yellow 3
			
			tabOffset += 4 ;


			for ( int pion = 0 ; pion < 4 ; pion ++ )
			{
	
				switch ( plansza ->getStart ( 3 , pion ) )
				{

				
				case '.' :

					this ->tabStart [pion +tabOffset] ->BackgroundImage = this -> finishYellow ->BackgroundImage;
					
					break ;


				default :

					this ->tabStart [pion +tabOffset] ->BackgroundImage = this -> pawnYellow ->BackgroundImage;

					break ;

				}


				switch ( plansza ->getMeta ( 3 , pion ) )
				{

				case '.' :

					this ->tabMeta [pion +tabOffset] ->BackgroundImage = this -> finishYellow ->BackgroundImage;
					
					break ;


				default :

					this ->tabMeta [pion +tabOffset] ->BackgroundImage = this -> pawnYellow ->BackgroundImage;

					break ;

				}
			}

				




		
		
///////////////////////////////////////







			// NIE DZIALALO


/*

			for ( int i = 4 ; i < 8 ; i ++ )
			{
				this ->tabStart [i] ->BackgroundImage = this -> finishGreen ->BackgroundImage;
				this ->tabMeta [i] ->BackgroundImage = this -> finishGreen ->BackgroundImage;
			}


			for ( int i = 8 ; i < 12 ; i ++ )
			{
				this ->tabStart [i] ->BackgroundImage = this -> finishBlue ->BackgroundImage;
				this ->tabMeta [i] ->BackgroundImage = this -> finishBlue ->BackgroundImage;
			}


			for ( int i = 12 ; i < 16 ; i ++ )
			{
				this ->tabStart [i] ->BackgroundImage = this -> finishYellow ->BackgroundImage;
				this ->tabMeta [i] ->BackgroundImage = this -> finishYellow ->BackgroundImage;
			}




	// Nastepnie przygotuj mape trasy

			    
			for ( int i = 0 ; i < 40 ; i ++ )
			{
				this ->tabMapa [i] ->BackgroundImage = this -> map00 ->BackgroundImage;

			}

			

			
			//this ->plansza ->tworzPlansze () ;
*/
		  

}





private : void koniecTury ()
{

	//this ->sox ->Play ( "..\\sfx\\Communicator.wav" ) ;
	this ->sox ->Play ( "..\\sfx\\classic ding.wav" ) ;

	// Tak jakby dziedziczenie
	this ->plansza ->koniecTury () ;

	// Wstepne wyzerowanie, by potem wybrac 1 z 4
	this ->player1 ->Enabled = false ;
	this ->player2 ->Enabled = false ;
	this ->player3 ->Enabled = false ;
	this ->player4 ->Enabled = false ;

	switch ( this ->plansza ->getKtoryRusza() ) 
	{

	case 0 :

		this ->player1 ->Enabled = true ;

		break ;

	case 1 :

		this ->player2 ->Enabled = true ;

		break ;

	case 2 :

		this ->player3 ->Enabled = true ;

		break ;

	case 3 :

		this ->player4 ->Enabled = true ;

		break ;

	}

	
	


}







private : void tworzGUI ()
{











	////////////////////////////

	// Just what I needed

	this ->plansza ->tworzPlansze () ;












	/////////////////////////////











	// Zacznij od pol startu i mety kazdego gracza
		// bo sa te pola jednego typu

	tworzStartMete () ;


	// Kolejno odrysuj reszte planszy

	
			  // Przemiataj po kazdym pionku
			  // czy znajduja sie we ww. polach
			  // dobranych parami

	for ( int tabOffset = 0 ; tabOffset < 40 ; tabOffset ++ )
	{




	// Znalezienie litery na mapie przerywa sprawdzanie pod katem
	// innych kolorow
	bool stop = false ;




	 // R-G-B-Y 0,1,2,3-4,5,6,7-8,9,10,11-12,13,14,15

	// Red 0

		if (!stop)
		{


				switch ( plansza ->getMapa ( tabOffset ) )
				{

				case 'a' :
				case 'b' :
				case 'c' :
				case 'd' :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnRed ->BackgroundImage;

					stop = true ;

					break ;

				
				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty ->BackgroundImage;
					
					break ;

				}

		
		}		











  // Green 1



			
		
		if (!stop)
		{


				switch ( plansza ->getMapa ( tabOffset ) )
				{

				case 'e' :
				case 'f' :
				case 'g' :
				case 'h' :

				

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnGreen ->BackgroundImage;

					stop = true ;

					break ;

				default :
				

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty->BackgroundImage;
					
					break ;



				}

		}
			

  // Blue 2


		if (!stop)
		{



			
	
				switch ( plansza ->getMapa ( tabOffset ) )
				{

				

				case 'i' :
				case 'j' :
				case 'k' :
				case 'l' :

				

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnBlue ->BackgroundImage;

					stop = true ;

					break ;

				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty->BackgroundImage;
					
					break ;


				}

		}
			

  // Yellow 3


		if (!stop)
		{



			
	
				switch ( plansza ->getMapa ( tabOffset ) )
				{

				
				
				case 'm' :
				case 'n' :
				case 'o' :
				case 'p' :
					
					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnYellow ->BackgroundImage;

					stop = true ;

					break ;

				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty ->BackgroundImage;

					break ;

				}
		}













			
/*
				switch ( plansza ->getMapa ( tabOffset ) )
				{

				case 'a' :
				case 'b' :
				case 'c' :
				case 'd' :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnRed ->BackgroundImage;

					break ;

				
				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty ->BackgroundImage;
					
					break ;


					
				case '.' :
					
					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty->BackgroundImage;

					break ;

				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnRed ->BackgroundImage;

					break ;


				}

				











  // Green 1



			
	
				switch ( plansza ->getMapa ( tabOffset ) )
				{

				case 'e' :
				case 'f' :
				case 'g' :
				case 'h' :

				

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnGreen ->BackgroundImage;

					break ;

				default :
				

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty->BackgroundImage;
					
					break ;


					
				case '.' :
					
					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty->BackgroundImage;

					break ;

				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnGreen ->BackgroundImage;

					break ;



				}

			
			

  // Blue 2



			
	
				switch ( plansza ->getMapa ( tabOffset ) )
				{

				

				case 'i' :
				case 'j' :
				case 'k' :
				case 'l' :

				

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnBlue ->BackgroundImage;

					break ;

				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty->BackgroundImage;
					
					break ;


					
				case '.' :
					
					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty->BackgroundImage;

					break ;

				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnBlue ->BackgroundImage;

					break ;

				}

			
			

  // Yellow 3



			
	
				switch ( plansza ->getMapa ( tabOffset ) )
				{

				
				
				case 'm' :
				case 'n' :
				case 'o' :
				case 'p' :
					
					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnYellow ->BackgroundImage;

					break ;


				

				case '.' :
					
					this ->tabMapa [tabOffset] ->BackgroundImage = this -> mapEmpty->BackgroundImage;

					break ;

				default :

					this ->tabMapa [tabOffset] ->BackgroundImage = this -> pawnYellow ->BackgroundImage;

					break ;

				}
*/
			
			








	}
		


		
	



}











	
/////////////////////

// Zdarzenia moga modyfikowac obiekt klasy glownej
// jaki stworzono przy rozruchu okna gry

///////////////////////







private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ( e->KeyChar == (char) Keys ::Space )
	{
	
		this ->die_Click ( sender , e ) ;



	}

}




private: System::Void die_Click(System::Object^  sender, System::EventArgs^  e) 
{

	this ->sox ->Play ( "..\\sfx\\dice_roll.wav" ) ;


	 int ileOczek = this ->plansza ->rzutKostka() ;



	 // Animacja moze sie przydac





	 // Zwyczajnee ustalenie nowego obrazka

	 switch ( ileOczek )
	 {

	 case 6 :

		this ->die   ->BackgroundImage = this -> die6 ->BackgroundImage;

		this ->sox ->Play ( "..\\sfx\\Windows XP Exclamation.wav" ) ;
		//this ->sox ->Play ( "..\\sfx\\Twang1.wav" ) ;

		break ;

	 case 5 :

		this ->die   ->BackgroundImage = this -> die5 ->BackgroundImage;

		break ;

	 case 4 :

		this ->die   ->BackgroundImage = this -> die4 ->BackgroundImage;

		break ;

	 case 3 :

		this ->die   ->BackgroundImage = this -> die3 ->BackgroundImage;

		break ;

	 case 2 :

		this ->die   ->BackgroundImage = this -> die2 ->BackgroundImage;

		break ;

	 case 1 :

		this ->die   ->BackgroundImage = this -> die1 ->BackgroundImage;

		break ;

	 default :
		 
		 // ???


		 break ;

	 }








			this -> cout ->Text = "Wylosowano " + ileOczek .ToString ()  ;


			if ( ileOczek < 6 )
			{
				int ktoryRusza = this ->plansza ->getKtoryRusza() ;
				if ( ! (this ->plansza ->getGracz (ktoryRusza) .getNaMapie () ) )
				{
					this->cout->Text = ileOczek .ToString () + ": gracz nie wchodzi na plansze.\n"  ;
					this->cout->Text += L"Kliknij kostke, potem pion";
					
					this ->koniecTury () ;

					

				}


			}













	 // To nie dzialalo



	//int liczbaKlikniec = this ->plansza ->increaseClick ()  ;

	//string labelClick = liczbaKlikniec .ToString () ;

	//this ->labelKlikniec ->Text = msclr ::interop ::marshal_as < String ^ > ( liczbaKlikniec ) ;

			

















			 // Aktualizacja interfejsu PO RUCHU (DZIALANIU SILNIKA)


			  //this ->tworzGUI () ;






}









private: System::Void pictureBox_Click(System::Object^  sender, System::EventArgs^  e) 
{

	this ->sox ->Play ( "..\\sfx\\Windows XP Ding.wav" ) ;
	//this ->sox ->Play ( "..\\sfx\\WORMSPRING.wav" ) ;
			 
			

			// Wg 15_obrazki ->Form1.h


			int index = tablicaWszystkiego ->IndexOf ( tablicaWszystkiego , ( PictureBox ^ ) sender ) ;


			// Co klikniete silnik musi znac
			this ->plansza ->setPictureBox ( index );
			// 1 argument na razie wystarczy




			int liczbaOczek =  this ->plansza ->getRzutOczek() ;

			// Wygodna metoda i nowa - dla GUI

			this ->plansza ->ruchGracza()  ;









			// Procedury Aktualizacji interfejsu










			this->cout->Text = L"Kliknij kostke, potem pion";



			if ( liczbaOczek < 6 )
			{

				this ->koniecTury () ;

			}



			if ( int zwyciezca = this ->plansza ->gameOver () )
			{
				MessageBox ::Show( "Zwyciezyl " + zwyciezca .ToString () ) ;

				// Proba poprawnego zamkniecia aplikacji
				exitToolStripMenuItem_Click ( sender , e ) ;
			}
			else
			{

				// Aktualizacja interfejsu PO RUCHU (DZIALANIU SILNIKA)


				this ->tworzGUI () ;
			}













}



//////////////////////////





private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
{
		 





	//// Recykling metod modelu zdarzeniowego
	improvedToolStripMenuItem_Click ( sender , e ) ;




	//this ->windowsXPInstallToolStripMenuItem_Click ( sender , e ) ;
		 //// Tym razem nie dziala!?







	this ->windowsXPInstallMusic () ;






	// Zalozenie wstepne, ze istnieja pliki z poprzednieg okienka
	if ( ! ( this ->plansza ->readGracze () ) )
	{
		MessageBox ::Show( "Blad wczytywania" ) ;
		this ->exitToolStripMenuItem_Click ( sender , e ) ;

	}

	// Jedyny sposob mieszania kodu zarzadzanego z nie-


	// Wywolanie metody zarzadzania Field Marshall !
	// Przypomina rzutowanie z C
	// Potraktuj to jako uchwyt do klasy dotnetowskiej
	this ->player1 ->Text = msclr ::interop ::marshal_as < String ^ > ( this ->plansza ->getImie ( 0 ) ) ;
	this ->player2 ->Text = msclr ::interop ::marshal_as < String ^ > ( this ->plansza ->getImie ( 1 ) ) ;
	this ->player3 ->Text = msclr ::interop ::marshal_as < String ^ > ( this ->plansza ->getImie ( 2 ) ) ;
	this ->player4 ->Text = msclr ::interop ::marshal_as < String ^ > ( this ->plansza ->getImie ( 3 ) ) ;
	// Uzyskaj String dotneta - klasyczna ciag znakow







	
	this ->tworzGUI() ;

	

	
}





private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{

	//this ->sox ->Play ( "..\\sfx\\StartRound.wav" ) ;
	this ->sox ->Play ( "..\\sfx\\Windows XP Logon Sound.wav" ) ;

	HelpAbout ^help = gcnew HelpAbout () ;

	// Wysiwetlenie okna modalnego
	help ->ShowDialog() ;

	if ( help ->DialogResult == Windows ::Forms ::DialogResult ::OK )
	{
		this ->sox ->Play ( "..\\sfx\\Windows XP Logoff Sound.wav" ) ;

		// Ot jakie proste zamknac okno
		delete help ;
	}

}

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	

	// Procedura natualnego wyjscia - bezblednego -
	// np. Zapisanie wynikow

	Close () ;
}



/////////////////////////////////////




		 
private: System::Void modestToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	
	this->BackgroundImage = nullptr;


}





private: System::Void improvedToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{

	this->BackgroundImage = Image::FromFile("..\\skinModern\\thisBackground.jpg") ;

	this->pawnRed ->BackgroundImage = Image::FromFile("..\\skinModern\\sports~2.ico") ;
	this->pawnGreen ->BackgroundImage = Image::FromFile("..\\skinModern\\jungle~4.ico") ;
	this->pawnBlue ->BackgroundImage = Image::FromFile("..\\skinModern\\morewi~4.ico") ;
	this->pawnYellow ->BackgroundImage = Image::FromFile("..\\skinModern\\danger~4.ico") ;


}





/////////////////////////////////////









private: System::Void startToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{

	 
	 
 
	//// Recykling metod modelu zdarzeniowego

	//this ->muteToolStripMenuItem_Click ( sender , e ) ;


	// Gra muzyka

	this ->sox ->Play ( "..\\sfx\\Stats.wav" ) ;


}




private: System::Void muteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{

	 
// Wciskam stop w magnetofonie

		this ->sox ->Stop () ;



}







private: System::Void wormsThemeToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e)
{

	 
	  
	//// Recykling metod modelu zdarzeniowego

	//this ->muteToolStripMenuItem_Click ( sender , e ) ;


	// Gra muzyka

	this ->sox ->Play ( "..\\sfx\\music-frontend.mp3" ) ;


}









private: System::Void muteMusicToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	 
	// Wciskam stop w magnetofonie

		this ->sox ->Stop () ;
}

private: System::Void windowsXPInstallToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	this ->windowsXPInstallMusic () ;
}


private : void windowsXPInstallMusic ()
{

	this ->sox ->Play (  "..\\sfx\\WinXPInstall.mp3"  ) ;

}

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	
	// Wciskam stop w magnetofonie


			 sox ->Stop () ;

			
}





private: System::Void pauza_Tick(System::Object^  sender, System::EventArgs^  e)
{

	//this ->sox ->Play ( "..\\sfx\\SUDDENDEATH.wav" ) ;
	this ->sox ->Play ( "..\\sfx\\Windows XP Balloon.wav" ) ;


	
}


















private: System::Void graphicsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }






};
}

