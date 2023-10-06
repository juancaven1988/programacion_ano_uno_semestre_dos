#ifndef CARTA_H_INCLUDED
#define CARTA_H_INCLUDED

#include "palo.h"
#include "numero.h"

typedef struct {
	Palo P;
	Numero N;
	}Carta;

//CARGA UNA CARTA
void Cargar (Carta &c, Palo p, Numero n);


//MUESTRA UNA CARTA
void Mostrar (Carta c);


#endif // CARTA_H_INCLUDED
