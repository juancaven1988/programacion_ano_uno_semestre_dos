#include "carta.h"


void Cargar (Carta &c, Palo p, Numero n){

c.P = p;
c.N = n;

}



void Mostrar (Carta c){

Mostrar(c.N);
printf(" de ");
Mostrar(c.P);
printf("\n");

}
