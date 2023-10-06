#ifndef MAZO_H_INCLUDED
#define MAZO_H_INCLUDED

#include "carta.h"

const int MAX = 52;

typedef struct{
	Carta arre[MAX];
	int tope;
}Mazos;

//ORDENA AL AZAR LAS 52 CARTAS
void barajar (Mazos &mazo);


//MUESTRA EL MAZO
void Mostrar (Mazos M);

//QUITA LA ULTIMA CARTA DEL MAZO
void Resto (Mazos &M);

/*
void ordenarmano (int palomano[], int numeromano[], int M);
//ORDENA LA MANO DE MAYOR A MENOR //

void verificar_mano (int palomano[], int numeromano[], int M, int &numero, int &valormano);
*/
#endif // MAZO_H_INCLUDED
