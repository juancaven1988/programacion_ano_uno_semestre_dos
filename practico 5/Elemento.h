#ifndef ELEMENTO_H_INCLUDED
#define ELEMENTO_H_INCLUDED

#include "Clasificacion.h"
#include "cadenas.h"
#include "Estados.h"


typedef struct{

	int num_atom;
	boolean existe;
	cadenas nombre;
	cadenas simbolo;
	int estado_oxidacion;
	Clasificacion disc;

	union {
		boolean radioactividad;
		int conductividad;
		Estados est;
	}Info;


}Elemento;



void CargarElemento (Elemento &ele);
//CARGA UN ELEMENTO//

void MostrarElemento(Elemento ele);
//MUESTRA UN ELEMENTO//


int Darnum (Elemento ele);
//REGRESA EL NUMERO ATOMICO//

boolean Existe (Elemento ele);
//REGRESA  SI EXISTE EL ELEMENTO O NO//



void DarNombre (Elemento ele, cadenas &str);
//GUARDA EL NOMBRE DEL ELEMENTO EN LA CADENA//
//EL ELEMENTO DEBE EXISTIR//

void DarSimbolo (Elemento ele, cadenas &str);
//GUARDA EL SIMBOLO DEL ELEMENTO EN LA CADENA//
//ELEMENTO DEBE EXISTIR//

int Daroxid (Elemento ele);
//RETORNA EL ESTADO DE OXIDACION//
//ELEMENTO DEBE EXISTIR//

Clasificacion Darclas (Elemento ele);
//RETORNA LA CLASIFICACION//
//ELEMENTO DEBE EXISTIR//

boolean Dar_Radioactividad (Elemento ele);
//RETORNA SI ES RADIOACTIVO O NO//
//EL ELEMENTO DEBE EXISTIR Y SE GAS NOBLE//

int Dar_conductividad (Elemento ele);
//RETORNA LA CONDUCTIVIDAD//
//ELEMENTO DEBE EXISTIR Y SER METAL//

Estados Dar_estado (Elemento ele);
//RETORNA EL ESTADO NATURAL//
//ELEMENTO DEBE EXISTIR Y SER NO METAL//


#endif // ELEMENTO_H_INCLUDED
