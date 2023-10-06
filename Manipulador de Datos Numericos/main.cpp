#include <stdio.h>

typedef int arreglo[5];
const int MAX = 5;

typedef struct{
int a;
int b;}Caso;

typedef enum {FALSE, TRUE} boolean;
typedef enum {ENTERO, REAL} TipoNumero;

typedef struct { TipoNumero discriminante;
                 union { int numEntero;
                         float numReal;
                       } Dato;
               } Numero;

typedef struct { Numero arre[MAX];
                 int tope;
               } ArrayConTope;

/*a) MODULO Numero*/


boolean SonIguales (Numero n1, Numero n2){

boolean iguales = FALSE;

if (n1.discriminante == n2.discriminante){
	 if(n1.discriminante == REAL)
		iguales = (boolean)(n1.Dato.numReal == n2.Dato.numReal);
	 else
	   iguales = (boolean)(n1.Dato.numEntero == n2.Dato.numEntero);}

return iguales;}

/*b)MODULO Numero*/
Numero SumarNumeros (Numero n1, Numero n2){

Numero resultado;

if(n1.discriminante == n2.discriminante){
      resultado.discriminante = n1.discriminante;
       if(resultado.discriminante == REAL)
          resultado.Dato.numReal = n1.Dato.numReal + n2.Dato.numReal;
       else
          resultado.Dato.numEntero =  n1.Dato.numEntero + n2.Dato.numEntero;
       }
else{
     resultado.discriminante = REAL;
         if (n1.discriminante == REAL)
             resultado.Dato.numReal = n1.Dato.numReal + n2.Dato.numEntero;
         else
             resultado.Dato.numReal = n1.Dato.numEntero + n2.Dato.numReal;
   }

return resultado;}

/*c)*/
boolean TodosIguales (ArrayConTope act){

boolean iguales = TRUE;
int i = 1;

while (iguales && i < act.tope){
      iguales =  SonIguales (act.arre[i-1],act.arre[i]);
      i++;}


return iguales;}

/*d)Modulo ArrayConTope*/
Numero SumarTodos (ArrayConTope act){

Numero resultado = act.arre[0];
int i = 1;

while  (i < act.tope){
      resultado =  SumarNumeros (resultado, act.arre[i]);
      i++;}

return resultado;}
int main()
{

  Numero c;
  ArrayConTope act;
  act.tope = 3;

  act.arre[0].discriminante = REAL;
  act.arre[1].discriminante = REAL;
  act.arre[2].discriminante = ENTERO;
  act.arre[0].Dato.numReal = 1.5;
  act.arre[1].Dato.numReal = 2.3;
  act.arre[2].Dato.numEntero = 1;


  printf("El resultado es: \n");
   if (TodosIguales(act))
	printf("Iguales");
	else
	printf("Distintos");

	c = SumarTodos(act);

	if (c.discriminante == REAL)
		printf("\n**********\nSuma - REAL - %f ", c.Dato.numReal);
	else
		printf("\n**********\nSuma - ENTERO - %d ", c.Dato.numEntero);

    return 0;
}
