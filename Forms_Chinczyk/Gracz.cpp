#include "stdafx.h"

#include "Gracz.h"

bool Gracz :: BETATEST = false ;
int Gracz ::PIONOW = 4 ;

// Fail-safe
Gracz::Gracz(void)
{
}


////////////////////////////////////

// Zwijanie stosu
Gracz::~Gracz(void)
{
	
	start .clear () ;

}


Gracz ::Gracz(bool betatest, std::string imie , int numer)
:	imie ( imie ) , 
	numer ( numer ) ,
	naMecie (0) ,
	naMapie (0)
// Cannot initialize static via constructor	
{
	BETATEST = betatest ;

	// Domyslnie wszystkie pionki znajduja sie poza plansza
	for ( int i = 0 ; i < PIONOW ; i ++ )
	{
		
		start .push_back 
		(
			Pion 
			(
				// Gracza 0: 0
				// Gracza 1: 10 itd.
				10 * ( numer -1 ) ,

				// Gracza 0: a do d
				// Gracza 1: e do h itd.
				4 * ( numer -1 ) +  i + 'a'
			) 
		)  ;

		
		
	}

}

// Ruch postaciami tam i z powrotem
void Gracz ::setPion(int ktory, Pion ::Stan stan)
{
	start [ktory] .setStan( stan ) ;
}

// Ruch tylko wprzod po planszy
// pod warunkiem, ze jeszcze starczy mapy.
// Zwraca false jesli nie mozna dalej isc
bool Gracz ::setPion(int ktory, int ile)
{

	
	// Jesli wybrany ma wyjsc ze startu
	// wyladuje na pierwszym polu 
	if ( Pion ::Start == start [ktory ] .stan )
	{
		start [ktory] .stan = Pion ::Mapa ;

		naMapie ++ ;
		
		return true ;
	}

	// W przeciwnym razie moze isc naprzod
	start [ktory] .setPostep ( ile ) ;
	
	
	// Czy ukonczyl mape ten pion?
	if ( start [ktory] .getPostep () >= 40 ) 
	{
		// Przenies pion na mete
		start [ktory] .setStan ( Pion ::Meta ) ;

		naMapie -- ;

		return false ;

	}

	



	return true ;
}



// Sprawdz czy  gracz spelnil warunek zwyciestwa
// Przykladowo wystarczy 1 pionek
bool Gracz ::wygrana () 
{
	// Sprawdz, ile pionow przeszlo mape
	for ( int i = 0 ; i < PIONOW ; i ++ )
	{
		if ( Pion ::Meta == start [i] .stan )
		{
			naMecie ++ ;
		}
	}

	// Nie spelnienie warunku zeruje licznik naMecie
	if ( naMecie >= 4 )
	{
		return true ;
	}
	else
	{
		naMecie = 0 ;
		return false ;
	}
}


	

string Gracz ::getImie () 
{
	return imie ;
}

void Gracz :: setImie ( string imie ) 
{
	this ->imie = imie ;
}

Pion & Gracz:: getPion ( int ktory ) 
{
	return start [ ktory ] ;
}







///////////////////////////////////

// Nowe dla GUI








int Gracz :: getNaMapie ()
{
	return naMapie  ;
}

int Gracz ::getNaMecie () 
{
	return naMecie ;
}









