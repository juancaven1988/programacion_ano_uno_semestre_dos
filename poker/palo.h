#ifndef PALO_H_INCLUDED
#define PALO_H_INCLUDED

#include<stdio.h>

typedef enum {CORAZONEZ,DIAMANTES,TREBOLES,PICAS}Palo;

//CARGA UN TIPO PALO
void Cargar (int x, Palo &p);

//MUESTRA UN TIPO PALO
void Mostrar(Palo p);

#endif // PALO_H_INCLUDED
