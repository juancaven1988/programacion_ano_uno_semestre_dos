#ifndef CLASE_H_INCLUDED
#define CLASE_H_INCLUDED

#include "estudiantes.h"

const int TAM = 5;

typedef Estudiante Arrestudiantes[TAM];

void CargarEstudiantes (Arrestudiantes &clase);

void MostrarEstudiantes (Arrestudiantes clase);
//MUESTRA LOS ESTUDIANTES//

Estudiante EstudianteConNotaPromedioMaxima (Arrestudiantes clase);
//DEVUELVE EL ESTUDIANTE CON LA NOTA PROMEDIO MAS ALTA//

#endif // CLASE_H_INCLUDED
