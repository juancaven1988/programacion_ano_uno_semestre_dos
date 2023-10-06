#ifndef TABLAPERIODICA_H_INCLUDED
#define TABLAPERIODICA_H_INCLUDED

#include "Elemento.h"
#include <stdlib.h>

const int CANT = 3;

typedef  Elemento  Tablaperiodica[CANT];


void CARGAR_TABLA (Tablaperiodica &tp);
//CARGA LA TABLA PERIODICA POR TECLADO//

void MOSTRAR_TABLA (Tablaperiodica tp);
//MUESTRA POR PANTALLA LA TABLA PERIODICA//

void ORDENAR_TABLA (Tablaperiodica &tp);
//ORDENA LA TABLA POR NUMERO ATOMICO//

void ADDELEMENTO (Tablaperiodica &tp, Elemento e1);
//COLOCA UN ELEMENTO EN LA POSICION CORRESPONDIENTE//

void BUSCAR_SIM_NOM (Tablaperiodica tp, cadenas &nombre, cadenas &simbolo, int num);
//REGRESA EL NOMBRE Y SIMBOLO DE UN ELEMENTO DE LA TABLA BUSCADO POR SU NUMERO//

boolean BUSCAR_ELEM (Tablaperiodica tp, int num);
//DEVUELVE SI ELE NUMERO ATOMICO EXISTE EN LA TABLA//


void EstOxBusq (int oxi, Tablaperiodica tp);
//DESPLIEGA TODOS LOS ELEMENTOS CON EL ESTADO DE OXIDACION INGRESADO//

void Saberclasif (Tablaperiodica tp, int atomicnum, Clasificacion &tipo);
//DADO UN NUMERO ATOMICO DEVUELVE SU CLASIFICACION//


#endif // TABLAPERIODICA_H_INCLUDED
