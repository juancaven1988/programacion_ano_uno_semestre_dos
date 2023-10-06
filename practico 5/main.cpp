#include <stdio.h>
#include "Tablaperiodica.h"





int main()
{

Tablaperiodica Tabla1;
Elemento e1;
int num;
cadenas str1, str2;
Clasificacion test;

CARGAR_TABLA(Tabla1);
ORDENAR_TABLA(Tabla1);
printf("\nColoquemos un nuevo elemento: \n");
CargarElemento(e1);

ADDELEMENTO(Tabla1, e1);

MOSTRAR_TABLA(Tabla1);

printf("Ingrese un numero atomico para buscarlo en la tabla y obtener nombre y simbolo: ");
scanf("%d", &num);

BUSCAR_SIM_NOM(Tabla1, str1,str2,num);
printf("Nombre\tSimbolo\n");
print(str1);
printf("\t");
print(str2);


printf("\nIngrese un estado de oxidacion: ");
scanf("%d", &num);

EstOxBusq(num, Tabla1);

printf("\nIngrese un numero atomico y le diremos si el elemento existe o no\n");
scanf("%d", &num);

if (BUSCAR_ELEM(Tabla1, num)){
	printf("El elemento existe y es un ");
	Saberclasif(Tabla1,num,test);
	PrintClas(test);}

else
	printf("El elemento no existe");



    return 0;
}
