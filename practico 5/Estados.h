#ifndef ESTADOS_H_INCLUDED
#define ESTADOS_H_INCLUDED

#include"Errores.h"


typedef enum {GASEOSO, SOLIDO, LIQUIDO} Estados;

void SelectEstd (Estados &est);
//CARGA UNA VARIABLE DE CLASIFICACION//

void PrintEstd (Estados est);
//MUESTRA POR PANTALLA UNA CLASIFICACION//

#endif // ESTADOS_H_INCLUDED
