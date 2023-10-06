#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include "stringD.h"
#include "fecha.h"

typedef struct {

long int cedula;
cadenas Nombre;
cadenas Apellido;
Fecha natalicio;
cadenas Direccion;
long int Telefono;
int finalizados;

}Persona;

//CARGA UNA PERSONA POR TECLADO
void IngresarPersona (Persona &P);

//MUESTRA LOS DATOS DE UNA PERSONA POR PANTALLA
void DespleglarP (Persona P);

//RETORNA LA CI DE UNA PERSONA
long int Darced (Persona P);

//RETORNA EL NOMBRE DE UNA PERSONA
cadenas DarNombre (Persona P);

//RETORNA EL APELLIDO DE UNA PERSONA
cadenas DarApellido (Persona P);

//RETORNA LA FECHA DE NACIMIENTO DE UNA PERSONA
Fecha DarNatalicio (Persona P);

//RETORNA LA DIRECCION DE UNA PERSONA
cadenas DarDireccion (Persona P);

//RETORNA EL TELEFONO DE UNA PERSONA
long int DarTel (Persona P);

//RETORNA LOS TALLERES FINALIZADOS DE UNA PERSONA
int Darfinalizados (Persona P);

// LE AGREGA 1 A LA VARIABLE FINALIZADO
void Mastaller (Persona &P);

// DADA UNA PERSONA GUARDA SUS DATOS EN EL ARCHIVO
//Precondicion: El archivo debe venir abierto para escritura
void Bajar_Persona (Persona P, FILE *f);

// DADA UNA PERSONA LA CARGA DESDE EL ARCHIVO
// Precondicion: El archivo debe venir abierto para lectura
void Levantar_Persona (Persona &P, FILE *f);



#endif // PERSONA_H_INCLUDED
