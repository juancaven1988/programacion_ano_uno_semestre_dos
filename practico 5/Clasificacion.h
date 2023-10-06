#ifndef CLASIFICACION_H_INCLUDED
#define CLASIFICACION_H_INCLUDED

#include <stdio.h>
#include "Errores.h"

typedef enum {GASES_NOBLES, METALES, NO_METALES} Clasificacion;


void Selectclasif (Clasificacion &cl);
//CARGA UNA VARIABLE DE CLASIFICACION//

void PrintClas (Clasificacion cl);
//MUESTRA POR PANTALLA UNA CLASIFICACION//


#endif // CLASIFICACION_H_INCLUDED
