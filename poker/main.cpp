#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "mano.h"



int main()
{
	srand(time(NULL));

	Mazos M;
	Mano H, G;
	H.tope = 0;
	G.tope = 0;
	barajar(M);

	Repartir(M,H);
	Repartir(M,G);

	int valIA, valUser, x, c;
	Numero IAreten, NUser;

	printf("Sus cartas son: \n");
	Mostrar(H);

	printf("Cuantas cartas desea cambiar? ");
	scanf("%d", &x);

	if(x > 3){
		printf("Solo puede pedir 3 cartas");
		x = 3;}

for (int i = 0; i < x; i++){
	bool existe = false;
	do{
			printf("Idique la carta que desea quitar: ");
			scanf("%d", &c);
			if(c-1 < H.tope){
				Quitar(H,c);
				existe = true;
				}
			else{
				printf("La carta seleccionada no existe\n");
				getch();}
	}while  (!existe);

	system ("cls");
	Mostrar(H);
}

printf("PRESIONE UNA TECLA PARA CONTINUAR");
getch();
system ("cls");

	valuar(G,valIA,IAreten);

	IA (G,valIA,IAreten);

	Repartir(M, H);
	Repartir(M,G);

	printf("Su mano:\n");
	Mostrar(H);

	printf("Mano de IA:\n");
	Mostrar(G);



	valuar(H,valUser,NUser);
	valuar(G,valIA,IAreten);

	if(valUser < valIA)
		printf("GANA LA IA\n");
	else
	{
		if(valIA < valUser)
			printf("GANA EL USUARIO\n");
		else
			if(mayor(H) <  mayor(G))
				printf("GANA LA IA\n");
			else
			{
				if(mayor(H) > mayor(G))
					printf("GANA EL USUARIO\n");
				else
					printf("ES UN EMPATE\n");
			}

	}





/*
	int valormano1 = 0, valormano2 = 0, punto1 = -1, punto2 = -1;

	barajar(mazo);

	repartir(mazo,Numeros,Palos,palodelamano1,numerodelamano1, M, carta);
	repartir(mazo,Numeros,Palos,palodelamano2,numerodelamano2, M, carta);

	printf("Mano 1:\n");
	for (int i = 0; i < M; i++){
		printf("%s de %s\n", Numeros[numerodelamano1[i]], Palos[palodelamano1[i]]);
	}

	printf("Mano 2:\n");
	for (int i = 0; i < M; i++){
		printf("%s de %s\n", Numeros[numerodelamano2[i]], Palos[palodelamano2[i]]);
	}


ordenarmano(palodelamano1,numerodelamano1,M);
ordenarmano(palodelamano2,numerodelamano2,M);


printf("***************************\n");



	for (int i = 0; i < M; i++){
		printf("%s de %s\n", Numeros[numerodelamano[i]], Palos[palodelamano[i]]);
	}

	printf("\n");

	verificar_mano(palodelamano1,numerodelamano1,M, punto1, valormano1);
    verificar_mano(palodelamano2,numerodelamano2,M, punto2, valormano2);


    if (valormano1 > valormano2)
		printf("GANA MANO 1");
	else{
		if(valormano1 < valormano2)
		  printf("GANA MANO 2");
		else{
			if (punto1 < punto2)
				printf("GANA MANO 2");
			else
				printf("GANA MANO 1");}}
*/
    return 0;
}
