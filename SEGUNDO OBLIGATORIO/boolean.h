#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED
#include <stdio.h>


typedef enum {FALSE, TRUE}boolean;

// LEE UN VALOR BOOLEANO DESDE TECLADO //
void bscan (boolean &x);

//MUESTRA EL VALOR DE UN BOOLEANO POR PANTALLA//
void bprint (boolean x);


#endif // BOOLEAN_H_INCLUDED
