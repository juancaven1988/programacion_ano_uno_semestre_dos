#ifndef ABB_H_INCLUDED
#define ABB_H_INCLUDED

#include "stringD.h"



typedef struct nodoA {
	int	info;
    nodoA * hizq;
	nodoA * hder;
     } nodo;

typedef nodo * Arbol;

/* crear un árbol vacío */
void CrearABB (Arbol &a);


/* saber si el árbol está vacío */
boolean EsVacioABB (Arbol a);

/* devolver la raíz del árbol */
/* Precondición: Arbol NO vacío */
int DarRaiz (Arbol a);

/* obtener el subárbol izquierdo */
/* Precondición: Arbol NO vacío */
Arbol HijoIzq (Arbol a);

/* obtener el subárbol derecho */
/* Precondición: Arbol NO vacío */
Arbol HijoDer (Arbol a);

void InsertABB (Arbol &a, int e);

/* saber si un elemento pertenece al ABB, versión recursiva */
boolean PerteneceABB (Arbol a, int e);

/* Versión recursiva para una operación que retorna el mínimo valor */
/* PRECONDICION: a no vacio */
int MinimoABB (Arbol a);

/*Suma los valores del arbol*/
int SumaABB (Arbol a);

/*Muestra los valores de forma ordenada*/
void ListarOrdenadoABB (Arbol a);

/* algoritmo que borra el valor mínimo del ABB */
/* Precondición : el árbol a  NO está vacío */
void Borrar_MinimoABB (Arbol &a);


/* algoritmo que borra un valor cualquiera del ABB */
/* Precondición : el valor x está en el árbol a */
void BorrarABB (int x , Arbol &a);

//Muestra el arbol en preorden//
void PreOrden (Arbol a);


//Muestra el arbol en post-orden//
void PostOrden (Arbol a);

//Regresa la cantidad de nodos del arbol//
int ContarNodos (Arbol a);


void Bajar_ABB_Aux (Arbol a, FILE * f);
// Escribe en el archivo los datos de todos los enteros del árbol
// en forma recursiva.
// Precondición: El archivo viene abierto para escritura.
void Bajar_ABB (Arbol a, cadenas nomArch);
// Abre el archivo para escritura y escribe los datos de todos los
// enteros del árbol (llamando al procedimiento anterior)
void Levantar_ABB (Arbol &a,cadenas nomArch);
// Abre el archivo para lectura e inserta en el árbol todos los
// enteros están en el archivo (llamando
// Precondición: El archivo existe.


#endif // ABB_H_INCLUDED
