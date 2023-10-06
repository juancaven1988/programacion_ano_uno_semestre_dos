#include "Clasificacion.h"


void Selectclasif (Clasificacion &cl){

int opc;

do{
printf("\nSeleccione la clasificacion:\n");
printf("\t1- Gases Nobles\n");
printf("\t2- Metales\n");
printf("\t3- No Metales\n");
scanf("%d", &opc);

switch (opc){

	case 1: cl = GASES_NOBLES;
			break;
	case 2: cl = METALES;
			break;
	case 3: cl = NO_METALES;
			break;
	default: Opcnovalid();
		}

}while (opc > 3 || opc < 1);
}


void PrintClas (Clasificacion cl){

switch (cl){

	case GASES_NOBLES: printf("Gas Noble");
					   break;
	case METALES: printf("Metal");
				  break;
	case NO_METALES: printf("No Metal");}


}




