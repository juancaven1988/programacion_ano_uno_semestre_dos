#include "numero.h"


void Cargar (int x, Numero &n){

switch (x)
{
	case 0:
		n = ASS;
		break;
	case 1:
		n = DOS;
		break;
	case 2:
		n = TRES;
		break;
	case 3:
		n = CUATRO;
		break;
	case 4:
		n = CINCO;
		break;
	case 5:
		n = SEIS;
		break;
	case 6:
		n = SIETE;
		break;
	case 7:
		n = OCHO;
		break;
	case 8:
		n = NUEVE;
		break;
	case 9:
		n = DIEZ;
		break;
	case 10:
		n = JACK;
		break;
	case 11:
		n = QUEEN;
		break;
	case 12:
		n = KING;
		break;
}
}

void Mostrar (Numero n){

switch (n)
{
	case ASS:
		printf("ASS");
		break;
	case DOS:
		printf("DOS");
		break;
	case TRES:
		printf("TRES");
		break;
	case CUATRO:
		printf("CUATRO");
		break;
	case CINCO:
		printf("CINCO");
		break;
	case SEIS:
		printf("SEIS");
		break;
	case SIETE:
		printf("SIETE");
		break;
	case OCHO:
		printf("OCHO");
		break;
	case NUEVE:
		printf("NUEVE");
		break;
	case DIEZ:
		printf("DIEZ");
		break;
	case JACK:
		printf("JACK");
		break;
	case QUEEN:
		printf("QUEEN");
		break;
	case KING:
		printf("KING");
		break;
}
}

int Dar_valor(Numero n){
int val;
switch (n)
{
	case ASS:
		val = 14;
		break;
	case DOS:
		val = 2;
		break;
	case TRES:
		val = 3;
		break;
	case CUATRO:
		val = 4;
		break;
	case CINCO:
		val = 5;
		break;
	case SEIS:
		val = 6;
		break;
	case SIETE:
		val = 7;
		break;
	case OCHO:
		val = 8;
		break;
	case NUEVE:
		val = 9;
		break;
	case DIEZ:
		val = 10;
		break;
	case JACK:
		val = 11;
		break;
	case QUEEN:
		val = 12;
		break;
	case KING:
		val = 13;
		break;
}

return val;}
