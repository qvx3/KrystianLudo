#pragma once






// Praca na plikach

#include < fstream >
#include <sstream>











// Multiplayer
#include "Gracz.h"

// Kolekcja graczy
// Kolekcje pionow
#include < vector >
#include < map >

// Obowiazkowo dla STL/CLR
using namespace std ;


class Plansza
{

	
	// Przelacznik trybu
	static bool BETATEST ;

	// Ograniczenie liczby iteracji glownej petli main
	static int MAXRUCHOW ;

	

	// Dla inicjalizacji parametryzowanej
	vector < Gracz > gracze  ;

	
	
	//// Niepotrzebnie tak: 

	//
	//vector < Pion > pola ;
	//map < int , Pion * > start ;
	



	// Prawidlowo

	// Pola wzglednie zerowych postepow pionow
	// Po wektorze dla kazdego z max 4 graczy
	Pion *  start [4][4] ;

	
	// Ciag symboli pustych miejsc lub  pionków
	// Puste pole = nullptr
	Pion * mapa [40*4 +6] ;
	// Z nadmiarem dlugosci

	// Oraz pola konca mapy
	Pion *  meta [4][4] ;
	// Po wektorze dla kazdego z max 4 graczy

	





/////////////////////////////////







	

	// Nowe dla GUI

	int rzutOczek ; 

	// Rozpoznanie kliknietego pola
	int pictureBoxIndex ; // int setPictureBox() ;
	enum PictureBoxType
	{
		// Przed wejsciem lub po zbiciu
		Start ,		
		// Wprowadzenie pionka na plansze
		Mapa ,	
		// Po ukonczeniu planszy
		Meta	

	} pictureBoxType;

	// Te mozna bylo ubrac w struct, ale szkoda fatygi












	int liczbaKlikniec ;
	//int increaseClick () ;
	






	

	
// Interfejs dla konsoli main.cpp

	// Testowe wymiary planszy
	static int DLUGOSC  ;
	static int GRACZY  ;

		
	// Licznik okresowy 
	// Numeracja graczy 0...3 
	int ktoryRusza ; 







	// Nastawianie przy odczycie sekwencyjnym
	void setImiona(std::string player1, std::string player2, std::string player3, std::string player4) ;
	// Szukaj nizej readGracze()




public:










	

	
	//// Licznik okresowy 
	//// Numeracja graczy 0...3 
	//int ktoryRusza ; 
	int getKtoryRusza () ;

















	bool ruchGracza() ;

	
	//int liczbaKlikniec ;
	int increaseClick () ;





	int getRzutOczek() ;

	// Rozpoznanie kliknietego pola
	void setPictureBox ( int pictureBoxIndex , Plansza ::PictureBoxType pictureBoxType = Plansza ::PictureBoxType:: Mapa ) ;
	//
	//int pictureBoxIndex 
	//enum PictureBoxType








	// Imiona przekazuje miedzy oknami
	
	bool saveGracz () ;	// Prototypowana
	
	
	bool saveGracz ( string player1 ,  string player2 ,  string player3 ,  string player4) ; // Koncowa
	

	// Wczyta wszytkie imiona
	bool readGracze () ;





/////////////////////////////////







		
	
	// Niepotrzebny domyslny
	Plansza(void);

	~Plansza(void);
	Plansza( bool betatest ) ;


	// Przygotowanie do wyswietlania
	// Aktualizacja planszy 
	void tworzPlansze () ;


	// Prosta komunikacja z cout w main
	char getStart ( int gracz , int pion ) ;
	char getMapa ( int pole ) ;
	char getMeta  ( int gracz , int pion ) ;

	// Losowanie dla ruchu gracza
	int rzutKostka () ;

	// Sprawdz, czy koniec gry
	// Zwraca nr zwyciezcy 1..4
	int gameOver () ;

	// Nastepny w kolejce 
	void koniecTury () ;


///////////////////////////////////

// Settery + gettery

	// Przyjmuje int liczbe oczek ,
	// char symbol piona
	// Zwraca false, gdy ruch niedozwolony
	bool setGracz ( int ile , char pion ) ;

	Gracz & getGracz ( int ktory ) ;
	

	string getImie ( int ktorego ) ;


};
