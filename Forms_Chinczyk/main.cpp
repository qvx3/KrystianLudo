#include "stdafx.h"

#include "Plansza.h"

// Proud to present Q&D sound engine
#include "Sox.h"

// Konsola, string
#include < iostream >

// system()
#include < cstdlib >


using namespace std ;


bool BETATEST = false;
// true oznacza BETATEST
// Bez pauzowania przy monicie dla gracza
// jakby Artificial Inteligence grala



//////////////////////////





////////////////////////////////////

// Wyswietlanie gry z czarnego okienka

// Fragment planszy
// s - start
// p - mapa 
// m - meta
// w - wszystko

// Indeks gracza dla wyswietlania mety 0..3
void cli ( Plansza & p1 , char fragment = 'w' , int meta = 0 ) ;






/*






// Uwaga : cli wywoluje publiczna metode Plansza ::tworzPlansze
// a moze warto wywolanie przeniesc gdzie indziej?
// Rzecz jasna, wersja z GUI nie dostanie takiego main.cpp jak to!








*/






//////////////////////////



int main ( void )
{
	
	
	Plansza p1  ( BETATEST ) ;

	Sox sox  ;
	string music = " ..\\..\\Effects\\Stats.wav " ;
	string turnSound = " ..\\..\\Effects\\Twang2.wav " ;

	// Jednorazowo lub w petli
	sox .Play ( music ) ;
	// sox .Play ( music , Sox::Loop ) ;



	// Trwa az do konca gry
	do
	{
		

			


		char  pauza = 0 ;
		char wybor = 0 ;


			
		
		////////////////////////////////////

		// Rzucanie kostka az do wylosowania zbyt malej liczby

		int rzut = 0 ;

		do
		{
			
			cli ( p1 , 'w' ) ;

			// Gracz 0..3
			int ktoryRusza = p1 .ktoryRusza ;

			// Gracz 1..4
			cout << "Ruch gracza " << ktoryRusza +1
				<< endl;


			if ( ! BETATEST )
			{
				cout << endl
					<< "Wcisnij dowolny klawisz, by rzucic kostka..."
					<< endl ;

				pauza = getch () ;

			}	

			






/////////////////////////


				// Na probe wyciszam, kolejna wersja gry bez tego
				sox .Stop (  ) ;




///////////////////////










			rzut = p1 .rzutKostka () ;

			
			cout << endl 
				<< "--------------------"
				 << endl ;

			cout << endl 
				<< "Wylosowales " << rzut  
				<< endl ;


			// Gra zachowuje sie na kilka sposobow
			// zaleznie od liczby oczek

			
			int naMapie = 0 ;
			
			// Czy mam juz pion na mapie?
			for ( int i = 0 ; i < 4 ; i ++ )
			{
				
				if ( Pion ::Mapa == p1 .getGracz ( ktoryRusza ) .getPion (i ) .stan ) 
				{
					naMapie ++ ;

				}
			}
				
				if ( rzut < 6 )
				{
					if ( naMapie )
					{
						cout << endl
						<< "Ktorym pionem ruszyc? Wpisz mala litere..."
						<< endl ;

						if ( ! BETATEST )
						{
							cin >> wybor ;
						}
						else
						{
							wybor = 'b' ;
						}

						
						// Przyjmuje int liczbe oczek ,
						// char symbol piona
						p1 .setGracz ( rzut , wybor ) ;

					}
					// Nie mialem nikogo na mapie
					else
					{
						cout << endl
							<< "Brak mozliwosci ruchu."
							<< endl
							<< "Wcisnij dowolny klawisz, by kontynuowac..."
							<< endl ;

						pauza = getch () ;

					}
				}
				// Wylosowalem wysoka liczbe oczek
				else
				{
					cout << endl
						<< "Ktorym pionem ruszyc? Wpisz mala litere..."
						<< endl ;

					if ( ! BETATEST )
					{
						cin >> wybor ;
					}
					else
					{
						wybor = 'b' ;
					}

					
					// Proba przesuniecia piona naprzod
					p1 .setGracz ( rzut , wybor ) ;






				}
		}
		while ( ! ( rzut < 6 ) ) ;
			
		
	/*

		

	*/
		

		// Odswiezanie konsoli
		if ( ! BETATEST )
		{
			system ( "cls" ) ;
		}

		p1 .koniecTury () ;

		sox .Play ( turnSound  ) ;

	

	}
	while ( ! p1 .gameOver () );


	cout << endl 
		<< "Koniec gry. Zwyciezyl gracz " << p1 .gameOver ()
		<< endl;


	return 0 ;
}





//////////////////////////////////////




void cli ( Plansza & p1  , char fragment , int meta )
{

	// Czyszczenie konsoli 
	if ( ! BETATEST )
	{
		system ( "cls" ) ;
	}

	// Aktualizacja widoku
	p1 .tworzPlansze () ;


	
	//  Wyswietlanie pol poza plansza

	switch ( fragment )
	{

		case 'm':
		{

		/*
			// META wszystkich

			for ( int j = 0 ; j < 4 ; j ++ )
			{
				for ( int k = 0 ; k < 4 ; k ++ )
				{
					cout << p1 .getMeta ( j , k ) ;
				}

				cout << '\t' ;
			}

			cout << endl ;

		*/


			//// META wybranego gracza

			int j = meta ;

			cout << " META " << j +1 ;


			//for ( int j = 0 ; j < 4 ; j ++ )
			{
				for ( int k = 0 ; k < 4 ; k ++ )
				{
					cout << p1 .getMeta ( j , k ) ;
				}

				//cout << '\t' ;
			}









			break ;

		}


		default:
		{


			
		// Wyswietlanie pol poza plansza

		// POLA STARTU GRACZA

		for ( int j = 0 ; j < 4 ; j ++ )
		{
			for ( int k = 0 ; k < 4 ; k ++ )
			{
				
				cout << p1 .getStart ( j , k ) ;
			}

			cout << '\t' ;
		}

		cout << endl ;



		// Wyswietlanie pol MAPY PLANSZY
		// a po prawej pol METY

		for ( int i = 0 ; i <= 70 ; i ++ )
		{
			// Jesli nr pola jest podzielny przez 40
			// ale niezerowy
			if ( ! ( i % 10) && i != 0 )
			{

		/*

				// Jesli tu konczy sie mapa dla gracza,
				// wyswietl jego mete
				if ( ! ( i % 40)  )
				{
					// i/41 uniemozliwia patrzenie funkcji
					// za graczem po ostatnim, za nieistniejacym
					cli ( p1 , 'm' ,  i / 41 ) ;
				}

		*/

				cout << endl ;


			}

			cout << p1 .getMapa ( i ) ;

		}

		cout << endl ;


		// Wyswietlanie pol poza plansza

		// POLA METY GRACZA

		for ( int j = 0 ; j < 4 ; j ++ )
		{
			for ( int k = 0 ; k < 4 ; k ++ )
			{
				cout << p1 .getMeta ( j , k ) ;
			}

			cout << '\t' ;
		}

		cout << endl ;



		


			break ;
		}

	}




}

