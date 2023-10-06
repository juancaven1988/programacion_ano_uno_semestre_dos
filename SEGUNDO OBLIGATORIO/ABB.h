#ifndef ABB_H_INCLUDED
#define ABB_H_INCLUDED

#include "Persona.h"


typedef struct nodoA {
	Persona	info;
    nodoA * hizq;
	nodoA * hder;
     } nodo;

typedef nodo * Arbol;

// CREAR UN �RBOL VAC�O
void CrearABB (Arbol &a);


// SABER SI EL �RBOL ESTA VAC�O
boolean EsVacioABB (Arbol a);

//LIBERA LA MEMORIA DE ARBOL//
void DestruirABB (Arbol &a);

// DEVOLVER LA RA�Z DEL �RBOL
// Precondici�n: Arbol NO vac�o
Persona DarRaiz (Arbol a);

// OBTENER EL SUB�RBOL IZQUIERO
// Precondici�n: Arbol no vac�o
Arbol HijoIzq (Arbol a);

// OBTENER EL SUB�RBOL DERECHO
// Precondici�n: Arbol no vac�o
Arbol HijoDer (Arbol a);

// INSERTAR UNA NUEVA PERSONA AL �RBOL
// precondici�n: la persona no exist�a previamente en el �rbol
void InsertABB (Arbol &a, Persona e);

// SABER SI UNA PERSONA PERTENECE AL �RBOL, VERSION RECURSIVA
boolean PerteneceABB (Arbol a, long int e);

// DADO UN APELLIDO CUENTA LAS OCURRENCIAS EN EL ARBOL
int ContarporApellido (Arbol a, cadenas Ap);

//REGRESA LA PERSONA CON MAYOR EDAD EN EL �RBOL
//Precondici�n: Debe exisitr al menos una persona en el �rbol.
Persona MayoredadABB (Arbol a);

// MUESTA LOS DATOS EN FORMA ORDENADA
void ListarOrdenadoABB (Arbol a);

// MUESTRA LAS PERSONAS QUE NO HAN COMPLETADO NINGUN TALLER
// Precondici�n: Debe existir al menos una persona en el �rbol.
void Listarsintaller (Arbol a);

//REGRESA CAUNTOS TALLERES TIENE LA PERSONA CON LA CI
//Precondicion: La ci debe pertenecer al arbol
int TalleresporCI  (Arbol a, long int ci);

// AUMENTA LOS  TALLERES FINALIZADOS DE LA CEDULA DADA
// Precondici�n: La ci debe pertenecer al arbol
void Aumentartaller (Arbol a, long int ci);

// REGRESA LA PERSONA CON MENOR CI DEL ARBOL
// Precondic�on: a no vac�o
Persona MinimoABB (Arbol a);

// BORRA LA CI MAS BAJA DEL �RBOL
// Precondici�n : el �rbol a no est� vac�o
void Borrar_Minimo (Arbol &a);

// ALGORITMO QUE BORRA CUALQUIER PERSONA EN EL �RBOL
// Precondici�n : el valor ci est� en el �rbol a
void BorrarABB (long int ci , Arbol &a);

// ESCRIBE EN EL ARCHIVO LOS DATOS DE TODAS LAS PERSONAS
// EN FORMA RECURSIVA
// Precondici�n: El archivo viene abierto para escritura.
void Bajar_ABB_Aux (Arbol a, FILE * f);

// ABRE EL ARCIVO PARA ESCRITURA Y ESCIRBE LOS DATOS DE TODAS LAS
// PERSONAS DEL �RBOL (LLAMANDO AL PROCEDIMIENTO ANTERIOR)
void Bajar_ABB (Arbol a, cadenas nomArch);

// ABRE EL ARCHIVO PARA LECTURA E INSTERTA EN EL �RBOL TODOS LOS
// DATOS DE LAS PERSONAS QUE ESTAN EN EL ARCHIVO (LLAMANDO AL PROCEDIMIENTO ANTERIOR)
// Precondici�n: El archivo existe.
void Levantar_ABB (Arbol &a,cadenas nomArch);


#endif // ABB_H_INCLUDED
