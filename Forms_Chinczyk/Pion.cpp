#include "stdafx.h"

#include "Pion.h"

Pion::Pion(void)
{
}

Pion::~Pion(void)
{
}

// Start dla kazdego gracza od innego miejsca
// na planszy, lecz wzglednie to zerowe
Pion ::Pion(int pole, char symbol)
:	pole ( pole ) ,
	postep ( 0 ) ,
	symbol ( symbol ) ,
	stan ( Start ) 
{
}


// Gdzie pionek?
// Ruch tam i z powrotem
void Pion::setStan(Pion::Stan stan)
{
	// Koniecznie this ->
	this ->stan = stan ;

}

// Ruch tylko wprzod
void Pion ::setPostep ( int ile  ) 
{
	this ->pole += ile ;
	this ->postep += ile ;

}








void Pion ::zbij()
{
	// Powrot do startu
	pole -= postep ;
	postep = 0 ;
	stan = Start ;
}







char Pion ::getSymbol ( )
{
	return symbol ;
}

int Pion ::getPole ()
{
	return pole ;
}

int Pion ::getPostep()
{
	return postep ;
}









