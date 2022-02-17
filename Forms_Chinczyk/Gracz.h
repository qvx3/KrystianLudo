#pragma once

#include  "Pion.h" 


// Konsola, string
#include < iostream >
#include < conio.h >

// Kolekcje pionow
#include < vector >

// Obowiazkowo dla STL/CLR
using namespace std ;


class Gracz
{

	
	
	static int PIONOW ;




		
	static bool  BETATEST  ;


	
	// Personalia
	string imie ;
	int numer ;

	// Ile pionow ukonczylo mape
	int naMecie ;

	// Ile pionow moich na mapie
	int naMapie ;




	// Kolekcje  pionkow kazdego z graczy
	// Symbole
	// Gracza 0: a do d
	// Gracza 1: e do h itd.

	vector < Pion > start  ;



















	// METODY


public :


// Interfejs dla kompozycji w planszy



	~Gracz(void);
	
	Gracz( bool betatest , string imie , int numer );
	
	

	// Ruch postaciami tam i z powrotem
	void setPion ( int ktory , Pion ::Stan stan ) ;

	// Ruch tylko wprzod po planszy
	// pod warunkiem, ze jeszcze starczy mapy,
	// Zwraca false jesli nie mozna dalej isc
	bool setPion ( int ktory , int ile ) ;

	// Sprawdz czy  gracz spelnil warunek zwyciestwa
	// Przykladowo wystarczy 1 pionek
	bool wygrana () ;




	string getImie () ;
	void setImie ( string imie ) ;
	

	// Ruch i wyswietlanie w konsoli
	Pion & getPion ( int ktory ) ;









//////////////////////////

// Nowe dla GUI

	int getNaMapie () ;

	int getNaMecie () ;








private :

// Placeholders

	// Po ukonczeniu mapy
	vector < Pion * > meta ;


	// Niepotrzebne
	Gracz(void);
















};
