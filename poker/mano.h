#ifndef MANO_H_INCLUDED
#define MANO_H_INCLUDED

#include "mazo.h"

const int total = 5;

typedef struct{
	Carta arre[total];
	int pos[total];
	int tope;
}Mano;

//REPARTE TANTAS CARTAS COMO x indique
void Repartir (Mazos &M, Mano &H);

//MUESTRA LA MANO
void Mostrar(Mano M);

//QUITA LA CARTA INDICADA por p
void Quitar (Mano &M, int p);

//ORDENA UNA MANO
void ordenar (Mano &M);

//DEVUELVE EL VALOR DE LA MANO Y EL NUMERO DEL JUEGO
void valuar (Mano H, int &valuacion, Numero &reten);

//REGRESA EL VALOR DE LA CARTA MAS ALTA
int mayor (Mano H);

bool escalera (Mano H);

bool color (Mano H);

bool real (Mano H);

//DEVUELVE CUANTAS CARTAS SOLICITA
int Pedir (Mano H,int val);

//DEVUEVLVE LA POSICION DE LA MANO A CAMBIAR
int analizar (Mano H, Numero reten);

//RETIRA LAS CARTAS DE LA MANO QUE CONSIDERA NO SIRVEN
void IA (Mano &G, int valG, Numero &NG);

#endif // MANO_H_INCLUDED
