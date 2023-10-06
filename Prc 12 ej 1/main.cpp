#include "archivint.h"


int main()
{

FILE *arch;
cadenas nombre = "Archivo.txt";

int x;

for (int i = 0; i <  3; i++){

printf("Indique un numero para argegar al archivo: ");
scanf("%d", &x);

Agregar(nombre, x);

printf("El archivo contiene los siguientes datos:\n");
Desplegar(nombre);

}

if (Existe(nombre)){
	if (Vacio(nombre))
		printf("El archivo esta vacio\n");
	else
		printf("El archivo no esta vacio\n");

	if(Pertenece(nombre, 3))
		printf("El 3 pertenece al archivo\n");
	else
		printf("El 3 no pertenece al archivo\n");

	printf("El largo del archivo es de %d enteros\n", Largo(nombre));

	if (Largo(nombre)>= 2)
		printf("El numero de la segunda posicion es %d\n", Kesimo(nombre, 2));
	else
		printf("El archivo no tiene 2 numeros");

    }




    return 0;
}
