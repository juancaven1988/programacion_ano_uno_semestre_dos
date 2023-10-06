#ifndef ABB_H_INCLUDED
#define ABB_H_INCLUDED

#include "Persona.h"


typedef struct nodoA {
	Persona	info;
    nodoA * hizq;
	nodoA * hder;
     } nodo;

typedef nodo * Arbol;

// CREAR UN ÁRBOL VACÍO
void CrearABB (Arbol &a);


// SABER SI EL ÁRBOL ESTA VACÍO
boolean EsVacioABB (Arbol a);

//LIBERA LA MEMORIA DE ARBOL//
void DestruirABB (Arbol &a);

// DEVOLVER LA RAÍZ DEL ÁRBOL
// Precondición: Arbol NO vacío
Persona DarRaiz (Arbol a);

// OBTENER EL SUBÁRBOL IZQUIERO
// Precondición: Arbol no vacío
Arbol HijoIzq (Arbol a);

// OBTENER EL SUBÁRBOL DERECHO
// Precondición: Arbol no vacío
Arbol HijoDer (Arbol a);

// INSERTAR UNA NUEVA PERSONA AL ÁRBOL
// precondición: la persona no existía previamente en el árbol
void InsertABB (Arbol &a, Persona e);

// SABER SI UNA PERSONA PERTENECE AL ÁRBOL, VERSION RECURSIVA
boolean PerteneceABB (Arbol a, long int e);

// DADO UN APELLIDO CUENTA LAS OCURRENCIAS EN EL ARBOL
int ContarporApellido (Arbol a, cadenas Ap);

//REGRESA LA PERSONA CON MAYOR EDAD EN EL ÁRBOL
//Precondición: Debe exisitr al menos una persona en el árbol.
Persona MayoredadABB (Arbol a);

// MUESTA LOS DATOS EN FORMA ORDENADA
void ListarOrdenadoABB (Arbol a);

// MUESTRA LAS PERSONAS QUE NO HAN COMPLETADO NINGUN TALLER
// Precondición: Debe existir al menos una persona en el árbol.
void Listarsintaller (Arbol a);

//REGRESA CAUNTOS TALLERES TIENE LA PERSONA CON LA CI
//Precondicion: La ci debe pertenecer al arbol
int TalleresporCI  (Arbol a, long int ci);

// AUMENTA LOS  TALLERES FINALIZADOS DE LA CEDULA DADA
// Precondición: La ci debe pertenecer al arbol
void Aumentartaller (Arbol a, long int ci);

// REGRESA LA PERSONA CON MENOR CI DEL ARBOL
// Precondicíon: a no vacío
Persona MinimoABB (Arbol a);

// BORRA LA CI MAS BAJA DEL ÁRBOL
// Precondición : el árbol a no está vacío
void Borrar_Minimo (Arbol &a);

// ALGORITMO QUE BORRA CUALQUIER PERSONA EN EL ÁRBOL
// Precondición : el valor ci está en el árbol a
void BorrarABB (long int ci , Arbol &a);

// ESCRIBE EN EL ARCHIVO LOS DATOS DE TODAS LAS PERSONAS
// EN FORMA RECURSIVA
// Precondición: El archivo viene abierto para escritura.
void Bajar_ABB_Aux (Arbol a, FILE * f);

// ABRE EL ARCIVO PARA ESCRITURA Y ESCIRBE LOS DATOS DE TODAS LAS
// PERSONAS DEL ÁRBOL (LLAMANDO AL PROCEDIMIENTO ANTERIOR)
void Bajar_ABB (Arbol a, cadenas nomArch);

// ABRE EL ARCHIVO PARA LECTURA E INSTERTA EN EL ÁRBOL TODOS LOS
// DATOS DE LAS PERSONAS QUE ESTAN EN EL ARCHIVO (LLAMANDO AL PROCEDIMIENTO ANTERIOR)
// Precondición: El archivo existe.
void Levantar_ABB (Arbol &a,cadenas nomArch);


#endif // ABB_H_INCLUDED
