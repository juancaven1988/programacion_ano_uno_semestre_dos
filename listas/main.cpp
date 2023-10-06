#include "listas.h"



int main()
{

	Lista lista1, pares, impares;
	int opc = 0;

	Crear(lista1);
	Crear(pares);
	Crear(impares);

	do{
	printf("Seleccione una opcion:\n");
	printf("\t1 - Agregar un numero al comienzo de la lista\n");
	printf("\t2 - Quitar el primer elemento de la lista\n");
	printf("\t3 - Mostrar la lista\n");
	printf("\t4 - Muestra el largo de la lista\n");
	printf("\t5 - Muestra el ultimo elemento de la lista\n");
	printf("\t6 - Muestra cuantas veces aparece un entero en la lista\n");
	printf("\t7 - Declara si 3 pertenece o no a la lista\n");
	printf("\t8 - Sustituye un numero por otro dentro de la lista\n");
	printf("\t9 - Mustra el maximo de la lista\n");
	printf("\t10 - Crea una lista con los valores impares de la original y otra con los pares\n");
	printf("\t11 - Agrega un numero al final de la lista\n");
	printf("\t12 - eliminar las ocurrencias de un numero\n");
	printf("\t13 - Indicar si hay repetidos\n");
	printf("\t14 - Duplicar los valores\n");

	printf("\t15 - Salir\n");
	scanf("%d", &opc);

	switch (opc){

	case 1:
		int e;
		printf("Indique el numero a agregar: ");
		scanf("%d", &e);
		InsFront(lista1,e);
		break;
	case 2:
		if(!Vacia(lista1))
			Resto(lista1);
		else
			printf("No se puede eliminar, lista ya vacia\n");
		break;
	case 3:
		Mostrar(lista1);
		break;

	case 4:
		printf("La lista tiene %d elementos\n", LargoRecu(lista1));
		break;

	case 5:
		printf("El ultimo elemento es: %d\n", Ultrecu(lista1));
		break;

	case 6:
		int n;
		printf("Indique un numero para contar: ");
		scanf("%d", &n);
		printf("El numero %d, aparece %d veces en la lista\n", n, ContarRecu(lista1,n));
		break;

	case 7:
		if (PerteneceRecu(lista1,3))
			printf("El 3 pertenece a la lista\n");
		else
			printf("El 3 no pertenece a la lista\n");

		break;

	case 8:
		int x, y;
		printf("Seleccione que numero desea sustituir: ");
		scanf("%d", &x);
		printf("Indique por cual debe sustituirse: ");
		scanf("%d", &y);
		SustituirRecu(lista1,x,y);
		break;

	case 9:
		printf("El maximo es: %d\n", MaximoRecu(lista1));
		break;

	case 10:
		pares = NULL;
		impares = NULL;
		ParesImparesRecu(lista1,pares,impares);
		int opc2;
		do{
		printf("Indique cual lista desea ver:\n");
		printf("\t1 - Pares\n");
		printf("\t2 - Impares\n");
		printf("\t3 - volver\n");
		scanf("%d", &opc2);

		switch (opc2){

		case 1:
			Mostrar(pares);
			break;
		case 2:
			Mostrar(impares);
		case 3:
			break;
		default:
			printf("Opcion no valida\n");

		}

		}while (opc2 != 3);
		break;

	case 11:
		int z;
		printf("Indique el numero a agregar: ");
		scanf("%d", &z);
		InsbackRecu(lista1, z);
		break;

	case 12:
		printf("Indique el numero a eliminar: ");
		scanf("%d", &z);
		Borrarocurrencia(lista1, z);
		break;

	case 13:
		if (hayrepetidos(lista1))
			printf("Hay numeros repetidos en la lista\n");
		else
			printf("En la lista no hay repetidos\n");
		break;

	case 14:
		clonarvalores(lista1);
		break;

	case 15:
		break;

	default:
		printf("Opcion no valida\n");

	}
	}while (opc != 15);

    return 0;
}
