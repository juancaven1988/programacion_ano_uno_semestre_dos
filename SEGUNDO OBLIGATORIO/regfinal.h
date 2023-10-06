#ifndef REGFINAL_H_INCLUDED
#define REGFINAL_H_INCLUDED

#include "stringD.h"
#include "fecha.h"

typedef struct {
Fecha fin;
long int CI;
cadenas nombre;
int dias;

}Registro;

//CARGA UN REGISTRO POR TECLADO
void CargarReg (Registro &r);

//MUESTRA UN REGISTRO POR PANTALLA
void MostrarReg (Registro r);

//REGRESA LA FECHA DEL REGISTRO//
Fecha Darfecha (Registro r);

//REGRESA LA CI DEL REGISTRO//
long int DarCI (Registro r);

//REGRESA EL NOMBRE EN EL REGISTRO//
cadenas Darnom (Registro r);

//REGRESA LA CANTIDAD DE DIAS DEL REGISTRO//
int Dardias (Registro r);

//GUARDA LOS DATOS DE UN REGISTRO EN EL ARCHIVO//
/*Precondicion: El archivo debe venir abierto para escritura*/
void Bajar_Registro (Registro r, FILE *f);

//LEE LOS DATOS DE UN REGISTRO DEL ARCHIVO Y LOS GUARDA EN r//
/*Precondicion: El archivo debe venir abierto para lectura*/
void Subir_Registro (Registro &r, FILE *f);


#endif // REGFINAL_H_INCLUDED
