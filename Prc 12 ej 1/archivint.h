#ifndef ARCHIVINT_H_INCLUDED
#define ARCHIVINT_H_INCLUDED

#include "stringD.h"

void Agregar (cadenas nomArch, int entero);
// Agrega el nuevo entero al final del archivo

boolean Existe (cadenas nomArch);
// Determina si existe o no un archivo con el nombre recibido por parámetro

boolean Vacio (cadenas nomArch);
// Determina si el archivo está vacío o no. Precondición: El archivo existe


boolean Pertenece (cadenas nomArch, int entero);
// Determina si el entero recibido está en el archivo. Precondición: El archivo existe

int Largo (cadenas nomArch);
// Devuelve la cantidad de enteros almacenados en el archivo. Precondición: El archivo existe

int Kesimo (cadenas nomArch, int k);
// Devuelve el k-ésimo entero almacenado en el archivo. Precondición: El archivo existe
// y su largo es ≥ k.

void Desplegar (cadenas nomArch);
// Despliega por pantalla los enteros almacenados en el archivo. Precondición: El archivo existe

#endif // ARCHIVINT_H_INCLUDED
