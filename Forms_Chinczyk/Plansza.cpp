#include "stdafx.h"

#include "Plansza.h"

// TESTOWE dla uproszczenia
int Plansza ::DLUGOSC = 40*4 +6 ;
int Plansza ::GRACZY = 4 ; 
// Ograniczenie liczby iteracji glownej petli main
int Plansza :: MAXRUCHOW = INT_MAX;

bool Plansza :: BETATEST = false ;




// Fail-safe
Plansza::Plansza(void)
{
}


///////////////////////////

// Zwijanie stosu
Plansza::~Plansza(void)
{
	//pola .clear () ;
}


Plansza ::Plansza( bool betatest ) 
:	ktoryRusza ( 0 ) ,
	liczbaKlikniec ( 0 )


{
	// Cannot initialize static via constructor	
	BETATEST = betatest ;

	// Na potrzeby nazwania graczy
	string imie ;
	
	for ( int y = 1 ; y <= GRACZY ; y++ )
	{
		// Numeracja graczy
		imie = y + '0' ;

		gracze .push_back
		(
			Gracz 
			(
				BETATEST ,
				// Numeracja graczy
				imie ,
				y
			)
		) ;
	}


	
	// Inicjalizacja widoku


	tworzPlansze () ;

}

	// Aktualizacja planszy 
// Przygotowanie do wyswietlania
void Plansza ::tworzPlansze()
{
	// Zerowanie pustych kluczy
		// kazdy klucz otrzmuje wartosc nullptr


	// Zacznij od pol startu i mety kazdego gracza
		// bo sa te pola jednego typu

	for ( int j = 0 ; j < GRACZY ; j ++ )
	{
		for ( int k = 0 ; k < 4 ; k ++ )
		{
			start [j][k] = NULL ;
			meta [j][k] = NULL ;
		}
	}


	for ( int j = 0 ; j < GRACZY ; j ++ )
	{
		for ( int k = 0 ; k < 4 ; k ++ )
		{
			Pion & temp = getGracz ( j ) .getPion ( k ) ;
			
			switch ( temp .stan )
			{

			case Pion ::Start :
				start [j][k] = & temp ;
				break ;

			case Pion ::Meta :
				meta [j][k] = & temp ;
				break ;
			}

		}
	}




	// Nastepnie przygotuj mape trasy


	for ( int i = 0 ; i < DLUGOSC ; i ++ )
	{
		mapa [i] = NULL ;

		
	}


	for ( int i = 0 ; i < DLUGOSC ; i ++ )
	{
		
		for ( int j = 0 ; j < GRACZY ; j ++ )
		{
			for ( int k = 0 ; k < 4 ; k ++ )
			{
				Pion & temp = getGracz ( j ) .getPion ( k ) ;

				

				
				// Czy w aktualnym polu i-tym jest 
				// k-ty pion gracza j-tego?
				if ( i == temp .getPole ()  )
				{
					// Czy pion jest meidzy startem a meta?
					if ( temp .stan == Pion ::Mapa)
					{
						mapa [i] = & temp ;
					}
				}

			}
			

			
		}
	}

}


// Prosta komunikacja z cout w main




char Plansza :: getStart ( int gracz , int pion ) 
{
	//char temp =  start [gracz][pion] ->getPole () ;
	//return temp ;

	if ( start [gracz][pion] )
	{
		return start [gracz][pion] ->getSymbol () ;
	}
	else
	{
		return '.' ;
	}
}

char Plansza ::getMapa(int pole)
{
	
	if ( mapa [pole] )
	{
		return mapa [pole] ->getSymbol () ;
	}
	else
	{
		return '.' ;
	}
}


char Plansza :: getMeta ( int gracz , int pion ) 
{

	if ( meta [gracz][pion] )
	{
		return meta [gracz][pion] ->getSymbol () ;
	}
	else
	{
		return '.' ;
	}
}









/////////////////////////////////

	// Zmiany dla GUI






// Analogiczne do setGracz() dla konsoli
// Zwraca false, gdy ruch niedozwolony
bool Plansza ::ruchGracza()
{
	

	

	char wybor = 'a'  /* chcialbym pictureBoxIndex */ ;


	// Oszustwo testowe - ruch tylko jednym pionkiem
	// w danej chwili

	switch ( gracze [ktoryRusza] .getNaMecie () )
	{

	case 1 :

		wybor = 'b' ;

		break ;

	case 2 :

		wybor = 'c' ;

		break ;

	case 3 :

		wybor = 'd' ;

		break ;

	}

	setGracz ( rzutOczek , wybor ) ;



	return true ;
}










// Losowanie dla ruchu gracza
int Plansza ::rzutKostka()
{
	
	// Kostka ma 1...6 oczek
	this -> rzutOczek = rand () % 6 +1 ;





	/*

	// Pozniejszy dodatek

	if ( getGracz ( ktoryRusza ) .getNaMapie () )
	{
		this -> rzutOczek = rand () % 6 +1 ;

		if ( rzutOczek > 1 )
		{
			-- rzutOczek ;
		}
	}

	*/
	

	// Wczesniejszy
	// Handicap 

	if ( ktoryRusza == 3 && rzutOczek == 6 )
	{
		return -- rzutOczek  ;

	}
	else if ( ktoryRusza == 2 &&   rzutOczek >= 2 &&  rzutOczek <= 5  )
	{

		return -- rzutOczek  ;
	

	}

	

	// Naturalne zakonczenie wywolania
	return rzutOczek ;

}

	





int Plansza :: getRzutOczek() 
{
	return rzutOczek ;
}




void Plansza ::setPictureBox ( int pictureBoxIndex , Plansza ::PictureBoxType pictureBoxType )
{
	this ->pictureBoxIndex = pictureBoxIndex ;
	this ->pictureBoxType = pictureBoxType ;

}


	
/////////////////////////////////


	





// Sprawdz, czy koniec gry
// Zwraca nr zwyciezcy 1..4
int Plansza ::gameOver()
{

	// Ograniczenie liczby iteracji glownej petli main
	MAXRUCHOW -- ;

/*
	
	if (  BETATEST  )
	{
		
		if ( MAXRUCHOW )
		{
			return 0 ;
		}
		else
		{
			return 1 ;
		}
	}

	else

*/
	{
		// Sprawdz czy ktorys gracz spelnil warunek zwyciestwa
		for ( int i = 0 ; i < GRACZY ; i ++ )
		{


			
			if ( gracze [i] .wygrana ()  )
			{
				return i+1 ;
			}
			else
			{
				
				return 0 ;
			}
		}

		// Graj az do wysypania programu
		return 0 ;
	}

}

// Nastepny w kolejce 
void Plansza ::koniecTury()
{

	if ( ktoryRusza < GRACZY -1 )
		// korekcja indeksowania 1...n -1
		// do 0...n
	{
		ktoryRusza ++ ;
	}
	else
	{
		ktoryRusza = 0 ;
	}
}



///////////////////////////////////

// Settery + gettery

///////////////////////////////////



// Przyjmuje int liczbe oczek ,
// char symbol piona
// Zwraca false, gdy ruch niedozwolony
bool Plansza ::setGracz(int ile , char pion)
{
	

	char wybor = pion ;

	// Korekcja
	// 'a'=97		-> 0
	// 'b'=98		-> 1
	// 'd'=100		-> 3
	// 'e'=101		-> 0
	wybor -= 'a' ;
	wybor %= 4 ;

	/*
	
	////////////

	// Sprawdzenie, czy ruch jest dozwolony



	// Obiekt tymczasowy- pomocniczy
	Pion temp = gracze [ktoryRusza] .getPion ( wybor ) ;

	int test =  temp .getPostep() + ile ;

	// Jesli potencjalne nowe pole jest zajete,
	// zasygnalizuj w miejscu wywolania
	if ( '.' != getMapa( temp .getPostep() + ile ) )
	{
	

		//return false ;
	}

	//	system( "pause" ) ;


	////////////

	*/

	// Zapewnij, ze pion chodzi po mapie planszy
	bool poszedl = gracze [ktoryRusza] .setPion ( wybor , ile ) ; 

	if (  poszedl )
	{
		
		gracze [ktoryRusza] .setPion ( wybor , Pion ::Mapa) ;
	}
	

	return true ;
}




Gracz & Plansza ::getGracz ( int ktory )
{
	return gracze [ ktory ] ;
}






string Plansza ::getImie(int ktorego)
{
	return gracze [ ktorego ] .getImie () ;
}












////////////////////////////////////

// Nowe dla GUI









template <typename T>
string numberToString(T pNumber)
{
	ostringstream oOStrStream;
	oOStrStream << pNumber;
	return oOStrStream.str();
}







int Plansza ::increaseClick()
{
	return ( ++	liczbaKlikniec ) ;
}




int Plansza :: getKtoryRusza () 
{
	return this ->ktoryRusza ;
}








// Imiona przekazuje miedzy oknami

bool Plansza ::saveGracz(std::string player1, std::string player2, std::string player3, std::string player4)
{
	/*

		fstream fs ;


	// Niby player1..4, choc wewnetrznie 0..3 dla getImie

		fs .open("1", ios_base::out);

		if( fs.good() )
		{
			fs << player1 ;
			fs.close();
		}
		else
		{
			return false ;
		}


		fs .open("2", ios_base::out);

		if( fs.good() )
		{
			fs << player2 ;
			fs.close();
		}
		else
		{
			return false ;
		}


	

		fs .open("3", ios_base::out);

		if( fs.good() )
		{
			fs << player3 ;
			fs.close();
		}
		else
		{
			return false ;
		}


		

		fs .open("4", ios_base::out);

		if( fs.good() )
		{
			fs << player4 ;
			fs.close();
		}
		else
		{
			return false ;
		}

*/
			

		fstream fs ;

		fs .open("daneGraczy", ios_base::out);

		if( fs.good() )
		{

			// Odczyt bedzie czuly na biale znaki 
			// rozdzielajacy slowa-dane wejsciowe

			fs	<< player1 
				<< " "
				<< player2 
				<< " "
				<< player3 
				<< " "
				<< player4 ;


			// Niby player1..4, choc wewnetrznie 0..3 dla getImie


			fs.close();

		}
		else
		{
			return false ;
		}

	

	return true ;
}




// Pobierz tylko to, czego sie spodziewam -
// imiona wszystkich graczy z konkretnych plikow
bool Plansza :: readGracze () 
{
	
	/*

		fstream fs [4] ;
		string bufor [4] ;




	// Niby player1..4, choc wewnetrznie 0..3 dla getImie

		fs [0] .open("1", ios_base::in);

		if( fs [0].good() )
		{
			fs  [0]>> bufor [0] ;
			fs [0] .seekg ( 0 ) ;
			fs [0].close();
		}
		else
		{
			return false ;
		}


		fs [1] .open("2", ios_base::in);

		if( fs [1].good() )
		{
			fs [1] >> bufor [1] ;
			fs [1].close();
		}
		else
		{
			return false ;
		}


		fs [2] .open("3", ios_base::in);

		if( fs [2].good() )
		{
			fs [2] >> bufor [2] ;
			fs [2].close();
		}
		else
		{
			return false ;
		}


		fs [3] .open("4", ios_base::in);

		if( fs [3].good() )
		{
			fs [3] >> bufor [3] ;
			fs [3].close();
		}
		else
		{
			return false ;
		}
*/






		fstream fs ;
		string bufor [4] ;




		fs  .open("daneGraczy", ios_base::in);

		// Spodziewam sie ciagu znakow wg wzoru:
		// Player1 Player2 Player3 Player4

		if( fs .good() )
		{
			fs  >> bufor [0]
				>> bufor [1] 
				>> bufor [2] 
				>> bufor [3] ;
			fs .close();
		}
		else
		{
			return false ;
		}






		this ->setImiona ( bufor [0] , bufor [1] , bufor [2] , bufor [3] ) ;


	// Niby player1..4, choc wewnetrznie 0..3 dla getImie





	

	return true ;
}










void Plansza ::setImiona(std::string player1, std::string player2, std::string player3, std::string player4) 
{
	this ->gracze [0] .setImie ( player1 ) ;
	this ->gracze [1] .setImie ( player2 ) ;
	this ->gracze [2] .setImie ( player3 ) ;
	this ->gracze [3] .setImie ( player4 ) ;
	
}
























// Prototypowana
bool Plansza :: saveGracz ( ) 
{
	for (int ktory = 1 ; ktory <= 4 ; ktory++ )
	{

		//char testa = 'a';
		//string test = (char *) testa ;

		string numer = numberToString ( ktory ) ;
		
		

		




			// Z przykladu 08_Slawinski_student zeszlorocznego
		





		//fstream fs(plik.c_str(), ios_base::out | ios_base::app);
		//fstream fs;
		//fs.open(plik.c_str(), ios_base::out | ios_base::app);
		//fs.open(plik.c_str(), ios_base::out);






		fstream fs(numer.c_str(), ios_base::out);

		if( fs.good() )
		{
			fs << getImie(ktory ).c_str();
			fs.close();
		}
		else
		{
			return false ;
		}

		

	}

	return true ;
}
