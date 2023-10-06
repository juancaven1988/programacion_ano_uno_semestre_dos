#ifndef ABB_H_INCLUDED
#define ABB_H_INCLUDED

#include "stringD.h"



typedef struct nodoA {
	int	info;
    nodoA * hizq;
	nodoA * hder;
     } nodo;

typedef nodo * Arbol;

/* crear un �rbol vac�o */
void CrearABB (Arbol &a);


/* saber si el �rbol est� vac�o */
boolean EsVacioABB (Arbol a);

/* devolver la ra�z del �rbol */
/* Precondici�n: Arbol NO vac�o */
int DarRaiz (Arbol a);

/* obtener el sub�rbol izquierdo */
/* Precondici�n: Arbol NO vac�o */
Arbol HijoIzq (Arbol a);

/* obtener el sub�rbol derecho */
/* Precondici�n: Arbol NO vac�o */
Arbol HijoDer (Arbol a);

void InsertABB (Arbol &a, int e);

/* saber si un elemento pertenece al ABB, versi�n recursiva */
boolean PerteneceABB (Arbol a, int e);

/* Versi�n recursiva para una operaci�n que retorna el m�nimo valor */
/* PRECONDICION: a no vacio */
int MinimoABB (Arbol a);

/*Suma los valores del arbol*/
int SumaABB (Arbol a);

/*Muestra los valores de forma ordenada*/
void ListarOrdenadoABB (Arbol a);

/* algoritmo que borra el valor m�nimo del ABB */
/* Precondici�n : el �rbol a  NO est� vac�o */
void Borrar_MinimoABB (Arbol &a);


/* algoritmo que borra un valor cualquiera del ABB */
/* Precondici�n : el valor x est� en el �rbol a */
void BorrarABB (int x , Arbol &a);

//Muestra el arbol en preorden//
void PreOrden (Arbol a);


//Muestra el arbol en post-orden//
void PostOrden (Arbol a);

//Regresa la cantidad de nodos del arbol//
int ContarNodos (Arbol a);


void Bajar_ABB_Aux (Arbol a, FILE * f);
// Escribe en el archivo los datos de todos los enteros del �rbol
// en forma recursiva.
// Precondici�n: El archivo viene abierto para escritura.
void Bajar_ABB (Arbol a, cadenas nomArch);
// Abre el archivo para escritura y escribe los datos de todos los
// enteros del �rbol (llamando al procedimiento anterior)
void Levantar_ABB (Arbol &a,cadenas nomArch);
// Abre el archivo para lectura e inserta en el �rbol todos los
// enteros est�n en el archivo (llamando
// Precondici�n: El archivo existe.


#endif // ABB_H_INCLUDED
