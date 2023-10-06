#include<stdio.h>
#include "boolean.h"


void bscan (boolean &x){

char opc;

do{
fflush(stdin);

printf("N - NO    S - SI\n");
scanf("%c", &opc);

if (opc != 'N' && opc != 'S' && opc != 's' && opc != 'n')
	printf("Opcion no valida\n");

}while (opc != 'N' && opc != 'S' && opc != 's' && opc != 'n');

if (opc == 'N' || opc == 'n')
	x = FALSE;
else
	x = TRUE;
}


void bprint (boolean x){

if (x == FALSE)
	printf("N");
else
	printf("S");


}

