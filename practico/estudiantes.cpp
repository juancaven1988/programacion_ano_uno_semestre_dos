#include<stdio.h>
#include "estudiantes.h"

void cargar (Estudiante &e){

printf("Ingrese CI del estudiante (sin puntos ni guiones): ");
scanf("%d", &e.ci);
printf("Ingrese edad del estudiante: ");
scanf("%d", &e.edad);
printf("Ingrese la nota promedio del estudiante: ");
scanf("%f", &e.nota);

}

void mostrar(Estudiante e){

printf("C.I : %2d - Edad: %2d - Nota Promedio: %2.2f\n",e.ci,e.edad,e.nota);
}

long int DarCi (Estudiante e){

return e.ci;}

int DarEdad (Estudiante e){

return e.edad;}

float DarNota (Estudiante e){

return e.nota;}
