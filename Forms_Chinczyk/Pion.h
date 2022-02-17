#pragma once

class Pion
{
	// Polozenie
	// Wzgledem poczatku - pole

	int pole ;
	// Wartosci 0..40 *4 +5
	// Z nadmiarem dla kostki

	// Wzgledem startu gracza
	int postep ;
	// Wartosci 0..39 +6
	// Z nadmiarem dla kostki

	// Gracz 0 : a do d
	// Gracz 1 : e do h itd.
	char symbol ;

	
public:

	Pion(void);

		
	// Interfejs dla kompozycji w planszy

	
	// Gdzie pionek?
	enum Stan
	{
		// Przed wejsciem lub po zbiciu
		Start ,		
		// Wprowadzenie pionka na plansze
		Mapa ,	
		// Po ukonczeniu planszy
		Meta		

	} 
		stan ;



	~Pion(void);

	Pion ( int pole , char symbol ) ;

	
	// Ruch tam i z powrotem
	void setStan(Pion::Stan) ;

	// Ruch tylko wprzod
	void setPostep ( int ile  ) ;

	// Powrot do startu
	void zbij () ;


	// Standardowe gettery
	char getSymbol ( ) ;
	int getPole () ;

	// Bardzo wazny dla mechaniki
	int getPostep () ;



	

	// Placeholders

	//// return this ;
	//Pion get ( ) ;
};
