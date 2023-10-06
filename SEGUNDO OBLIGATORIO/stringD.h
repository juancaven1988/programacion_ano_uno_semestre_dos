#ifndef STRINGD_H_INCLUDED
#define STRINGD_H_INCLUDED

#include "boolean.h"

const int MAX = 80;

typedef char *cadenas;


//CREA UNA CADENA VACIA
void strcrear (cadenas &str);

//LIBERA LA MEMORIA OCUPADA POR EL STRING
void strdestruir (cadenas &str);

//DEVUELVE EL LARGO DE UN STRING
int strlar (cadenas str);

//RECIBE DOS STRING COPIA EL SEGUNDO EN EL PRIMERO
void strcop (cadenas &copia, cadenas org);

//LLE UN STRING DESDE TECLADO
void scan (cadenas &str);

//CONCATEN EL SEGUNDO STRING EN EL PRIMERO
void strcon (cadenas &str1, cadenas concat);

//RECIBE DOS STRING Y DEVUELVE EL PRIMERO EN EL SEGUNDO Y VICEVERSA
void strswap (cadenas &str1, cadenas &str2);

//DESPLIEGA UN STRING POR PANTALLA
void print (cadenas str);

//DEVUELVE TRUE SI EL PRIMER STRING ES MENOR QUE EL SEGUNDO
boolean strmen (cadenas str1, cadenas str2);

//DEVUELVE TRUE SI  LOS STRING SON IGUALES
boolean streq (cadenas str1, cadenas str2);

// ESCRIBE EN EL ARCHIVO LOS CARACTERES DEL STRING S (INCLUIDO '\0')
// Precondición: El archivo viene abierto para escritura
void Bajar_String (cadenas s, FILE * f);

// LEE DESDE EL ARCHIVO LOS CARACTERES DEL STRING S
// Precondición: El archivo viene abierto para lectura
void Levantar_String (cadenas &s, FILE * f);





#endif // STRINGD_H_INCLUDED
