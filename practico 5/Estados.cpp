#include "Estados.h"


void SelectEstd (Estados &est){

int opc;

do{
printf("\nSeleccione el estado natural:\n");
printf("\t1- Gaseoso\n");
printf("\t2- Solido\n");
printf("\t3- Liquido\n");
scanf("%d", &opc);

switch (opc){

	case 1: est = GASEOSO;
			break;
	case 2: est = SOLIDO;
			break;
	case 3: est = LIQUIDO;
			break;
	default: Opcnovalid();
		}

}while (opc > 3 || opc < 1);
}
//CARGA UNA VARIABLE DE CLASIFICACION//

void PrintEstd (Estados est){

switch (est){

	case GASEOSO: printf("Gaseoso");
					   break;
	case SOLIDO: printf("Solido");
				  break;
	case LIQUIDO: printf("Liquido");}

}
//MUESTRA POR PANTALLA UNA CLASIFICACION//
