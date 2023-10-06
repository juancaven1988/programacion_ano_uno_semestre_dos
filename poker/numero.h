#ifndef NUMERO_H_INCLUDED
#define NUMERO_H_INCLUDED

#include<stdio.h>

typedef enum  {ASS,DOS,TRES,CUATRO,CINCO,SEIS,SIETE,OCHO,NUEVE,DIEZ,JACK,QUEEN,KING} Numero;

//CARGA UN TIPO NUMERO
void Cargar (int x, Numero &n);

//MUESTRA UN TIPO NUMERO
void Mostrar (Numero n);

//RETORNA EL VALOR NUMERICO DEL NUMERO
int Dar_valor (Numero n);

#endif // NUMERO_H_INCLUDED
