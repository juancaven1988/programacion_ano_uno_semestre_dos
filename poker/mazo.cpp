#include <stdio.h>
#include <stdlib.h>
#include "mazo.h"


void barajar(Mazos &mazo){

int arre[4][13]  = {0};


int carta, fila, columna;

for (carta = 1; carta <= MAX; carta++){
	do{
	fila = rand()%4;
	columna = rand()%13;}
	while (arre[fila][columna] != 0);

	arre[fila][columna] = carta;
}

for(mazo.tope = 1; mazo.tope <= MAX; mazo.tope++){

	for (fila = 0;fila < 4;  fila++){
		for(columna = 0; columna < 13; columna++){
			if (mazo.tope == arre[fila][columna]){
				Cargar(fila,mazo.arre[mazo.tope-1].P);
				Cargar(columna,mazo.arre[mazo.tope-1].N);}
		}
	}

}
mazo.tope --;
}

void Mostrar (Mazos M){

for(int i = 0; i < M.tope; i++){

	Mostrar(M.arre[i]);
	}

}


void Resto (Mazos &M){

M.tope -= 1;

}






