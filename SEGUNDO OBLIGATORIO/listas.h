#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

#include "regfinal.h"

typedef struct nodoL {
	  Registro info;
      nodoL * sig;
	} Nodo;


typedef Nodo * Lista;

//CREA UNA LISTA//
void Crear (Lista & lis);

//DEVUELVE TRUE SI LA LISTA ESTA VACIA//
boolean Vacia (Lista lis);

//DEVUELVE LA MEMORIA DE LA LISTA//
void DestruirLista (Lista &l);

//MUESTRA LA LISTA POR PANTALLA//
void Mostrar (Lista lis);

//BORRA EL PRIMER ELEMENTO DE LA LISTA//
/*Precondicion: La lista no puede estar vacia*/
void Resto (Lista &L);

//RETORNA la cantidad de registros entre la fecha a y la fecha b//
/*Precondicion B >= A*/
int Contarentre (Lista L, Fecha A, Fecha B);

//RETORNA EL ULTIMO ELEMENTO DE LA LISTA//
/*Precondicion la lista no puede estar vacia*/
Registro Ultrecu (Lista L);

//REGRESA EL ELEMENTO CON MAYOR CANTIDAD DE DÌAS//
/*Precondicion: la lista no puede estar vacia*/
Registro MaximoRecu (Lista L);

//AGREGA UN ENTERO AL FINAL DE LA LISTA
/*Precondicion: Fecha del registro debe ser mayor o igual a ultimo*/
void InsbackRecu (Lista &L, Registro n);

//BORRA TODAS LAS OCURRENCIAS DE n//
void Borrarocurrencia (Lista &L, long int n);

//MUESTRA TODOS LOS REGISTROS DE LA FECHA//
void MostrarocurrenciaFecha (Lista &L, Fecha n);

//MUESTRA TODOS LOS REGISTROS DE LA CI//
void MostrarocurrenciaCI (Lista &L, long int n);

// ABRE EL ARCHIVO PARA ESCRITURA Y ESCRIBE LOS DATOS//
// DE LOS REGISTROS QUE FORMAN PARTE DE LA LISTA//
void Bajar_Lista (Lista L, cadenas nomArch);

//ABRE EL ARCHIVO PARA LECTURA Y CARGA EN LA LISTA LOS DATOS DE//
//TODOS LOS REGISTROS QUE ESTAN ALMACENADOS EN EL ARCHIVO//
//LLAMANDO AL PROCEDIMIENTO "InsbackRecu"//
void Levantar_Lista (Lista &L, cadenas nomArch);


#endif // LISTAS_H_INCLUDED
