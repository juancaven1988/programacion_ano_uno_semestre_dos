#include "ABB.h"


int main()
{

    Arbol a;
    int x, opc;
    cadenas nomarch = "Prueba.txt";

    CrearABB(a);

    do{
		printf("Seleccione una opcion:\n");
		printf("\t1 - Añadir numero\n");
		printf("\t2 - Quitar numero\n");
		printf("\t3 - Mostrar Arbol ordenado\n");
		printf("\t4 - Indicar cuantos nodos tiene el arbol\n");
		printf("\t5 - Guardar\n");
		printf("\t6 - Cargar\n");
		printf("\t7 - Salir\n");
		scanf("%d", &opc);

		switch (opc){

		case 1:
			printf("Indique el numero a agregar: ");
			scanf("%d", &x);
			if(!PerteneceABB(a,x))
				InsertABB(a,x);
			else
				printf("El numero no puede ser agregado porque ya existe\n");
			break;

		case 2:
			printf("Indique el numero que desea eliminar: ");
			scanf("%d", &x);
			if(PerteneceABB(a,x))
				BorrarABB(x,a);
			else
				printf("El numero no existe en el arbol\n");
			break;

		case 3:
			ListarOrdenadoABB(a);
			printf("\n");
			PostOrden(a);
			printf("\n");
			PreOrden(a);
			printf("\n");
			break;

		case 4:
			printf("La cantidad de nodos es: %d\n", ContarNodos(a));
			break;

		case 5:
			Bajar_ABB(a,nomarch);
			break;

		case 6:
			Levantar_ABB(a,nomarch);
			break;

		case 7:
			break;

		default:
			printf("Opcion no valida\n");

		}



    }while (opc != 7);

    return 0;
}
