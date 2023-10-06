#include "palo.h"


void Cargar (int x, Palo &p){

switch (x)
	{
	case 0:
		p = CORAZONEZ;
		break;
	case 1:
		p = DIAMANTES;
		break;
	case 2:
		p = TREBOLES;
		break;
	case 3:
		p = PICAS;
		break;
	}

}

void Mostrar(Palo p){

switch (p)
	{
	case CORAZONEZ:
		printf("CORAZONEZ");
		break;
	case DIAMANTES:
		printf("DIAMANTES");
		break;
	case TREBOLES:
		printf("TREBOLES");
		break;
	case PICAS:
		printf("PICA");
		break;
	}

}
