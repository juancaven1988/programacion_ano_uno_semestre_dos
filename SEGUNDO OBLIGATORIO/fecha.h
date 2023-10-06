#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED


#include <stdio.h>
#include "boolean.h"

typedef struct {

int dd;
int mm;
int aaaa;

}Fecha;


// DETERMINA SI UNA FECHA ES VALIDA
boolean ComprobarF (Fecha f);

// RECIBE UNA FECHA POR TECLADO
void cargarF (Fecha &f);

// MUESTRA UNA FECHA POR PANTALLA
void mostrarF (Fecha f);

// REGRESA EL DIA DE LA FECHA F
int DarDia (Fecha f);

// REGRESA EL MES DE LA FECHA F
int DarMes (Fecha f);

// REGRESA EL ANIO DE LA FECHA F
int DarAnio (Fecha f);

// REGRESA TRUE SI A ES MAYOR QUE B
boolean Fechamayor (Fecha A, Fecha B);


// ESCRIBE EN EL ARCHIVO LA FECHA
// Precondición: El archivo viene abierto para escritura
void Bajar_Fecha (Fecha r, FILE *f);

// LEE DESDE EL ARCHIVO LA FECHA
// Precondición: El archivo viene abierto para lectura
void Subir_Fecha (Fecha &r, FILE *f);

// DADA DOS FECHA SABER CUAL ES MAYOR
boolean Fechamayor (Fecha A, Fecha B);

// DADA DOS FECHAS SABER SI SON IGUALUES
boolean FechaIGUAL (Fecha A, Fecha B);


#endif // FECHA_H_INCLUDED
