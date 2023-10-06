#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

#include "boolean.h"

typedef struct nodoL { int info;
      nodoL * sig;
	} Nodo;


typedef Nodo * Lista;

//CREA UNA LISTA//
void Crear (Lista & lis);

//DEVUELVE TRUE SI LA LISTA ESTA VACIA//
boolean Vacia (Lista lis);

//DEVUELVE EL PRIMER MIEMBRO DE LA LISTA//
/* Precondición: lista NO vacía */
int Primero (Lista lis);

//ELIMINA EL PRIMER MIEMBRO DE LA LISTA//
/* Precondición: lista NO vacía */
void Resto (Lista & lis);

//INSERTA UN NUEVO MIEMBRO AL COMIENZO DE LA LISTA//
void InsFront (Lista & lis, int e);

//MUESTRA LA LISTA POR PANTALLA//
void Mostrar (Lista lis);

//SUMA LOS VALORES DE LA LISTA//
int Suma (Lista L);

//MULTIPLICA POR 2 LOS ELEMENTOS DE LA LISTA//
void Duplica (Lista & L);

//RETORNA TRUE SI EXISTE UN NEGATIVO//
boolean ExisteNegativo (Lista L);

//RETORNA EL LARGO DE UNA LISTA//
int LargoRecu (Lista L);
int Largoiter (Lista L);

//RETORNA EL ULTIMO ELEMENTO DE LA LISTA//
int Ultiter (Lista L);
int Ultrecu (Lista L);

//DEVUELVE CUANTAS VECES APARECE n  EN LA LISTA//
int ContarIter (Lista L, int n);
int ContarRecu (Lista L, int n);


//RETORNA TRUE SI e PERTENECE A LA LISTA//
boolean PerteneceIter (Lista L, int e);
boolean PerteneceRecu (Lista L, int e);

//SUSTITUYE CADA OCURRENCIA DE e POR n//
void SustituirIter (Lista &L, int e, int n);
void SustituirRecu (Lista &L, int e, int n);

//RETORNA EL MAXIMO VALOR DE LA LISTA//
int MaximoIter (Lista L);
int MaximoRecu (Lista L);

//REGRESA DOS LISTAS NUEVAS UNA CON LSO VALORES PARES Y OTRA CON LOS IMPARES//
void ParesImparesIter (Lista L, Lista &P, Lista &I);
/*P e I deben estar inicializadas y vacias*/
void ParesImparesRecu (Lista L, Lista &P, Lista &I);

//AGREGA UN ENTERO AL FINAL DE LA LISTA
void InsbackIter (Lista &L, int n);
void InsbackRecu (Lista &L, int n);

//BORRA TODAS LAS OCURRENCIAS DE n//
void Borrarocurrencia (Lista &L, int n);

//DEVUELVE TRUE SI HAY ELEMENTOS REPETIDOS//
boolean hayrepetidos  (Lista L);


//DUPLICA LOS VALORES DE LA LISTA//
void clonarvalores (Lista &L);

#endif // LISTAS_H_INCLUDED
