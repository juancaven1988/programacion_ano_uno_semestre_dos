#ifndef ESTUDIANTES_H_INCLUDED
#define ESTUDIANTES_H_INCLUDED

#include<stdio.h>


typedef struct{

long int ci;
int edad;
float nota;
}Estudiante;


void cargar (Estudiante &e);
//CARGA LOS DATOS DEL ESTUDIANTE E DESDE EL TECLADO//

void mostrar(Estudiante e);
//MUESTRA LOS DATOS DEL ESTUDIANTE E POR PANTALLA//

long int DarCi (Estudiante e);
//REGRESA LA CI DEL ESTUDIANTE E//

int DarEdad (Estudiante e);
//REGRESA LA EDAD DEL ESTUDIANTE E//

float DarNota(Estudiante e);
//REGRESA LA NOTA DEL ESTUDIANTE E//

#endif // ESTUDIANTES_H_INCLUDED
