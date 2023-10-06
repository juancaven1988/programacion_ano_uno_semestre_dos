#include "mano.h"



void Repartir (Mazos &M, Mano &H){

for (int i = H.tope; i < total ; i++){
	H.tope += 1;
	H.arre[H.tope-1] = M.arre[M.tope -1];
	H.pos[i] = i+1;
	Resto(M);
}

}


void Mostrar(Mano M){

for (int i = 0;  i  < M.tope; i++){
	printf("%d. ", M.pos[i]);
	Mostrar(M.arre[i]);

}

}


void Quitar (Mano &M, int p){

if (p == M.tope)
	M.tope --;
else{

	do{
		M.arre[p-1] = M.arre[p];
		p++;

	}while (p < M.tope);
	M.tope--;
}
}

void ordenar (Mano &M){

int i, j;
Carta aux;


for (i = 0; i < M.tope -1 ; i++){
	for( j = i+1; j < M.tope; j++){
		if ( Dar_valor(M.arre[i].N) > Dar_valor(M.arre[j].N)){
			aux = M.arre[i];
			M.arre[i] = M.arre[j];
			M.arre[j] = aux;
		}


	}


}

}

int mayor (Mano H){

int mayor = 0;

for (int i = 0; i < H.tope; i++){
	if (Dar_valor(H.arre[i].N) > mayor)
		mayor = Dar_valor(H.arre[i].N);
}



return mayor;}

bool escalera (Mano H){

ordenar(H);
bool escalera = true;
int i = 1;
do{
	if (Dar_valor(H.arre[i-1].N) !=  Dar_valor(H.arre[i].N )- 1)
		escalera = false;
	else
		i++;


}while (i < H.tope && escalera);

return escalera;}

bool color (Mano H){

bool  clr = true;
int i = 0;

do{
	if(H.arre[i].P != H.arre[i+1].P)
		clr = false;
	else
		i++;

}while (clr && i < H.tope-1);

return clr;}

bool real (Mano H){

bool esreal = false;

	if  (escalera(H) &&  mayor(H) == 14)
		esreal = true;

return esreal;}


void valuar (Mano H, int &valuacion, Numero &reten){


ordenar(H);
int par = 0;
bool poker = false, trio = false;
valuacion = 0;
reten = DOS;

if (escalera(H)){
	if(color(H)){
		if(real(H)){
			valuacion  = 9;
			reten = ASS;
		}
		else
		{
			valuacion = 8;
			reten = ASS;
		}
	}
	else{
		valuacion = 4;
		Cargar(mayor(H), reten);
	}
}

if (color(H)){
	valuacion = 5;
	Cargar(mayor(H), reten);}
if (valuacion == 0){
	for ( int i = 0; i < H.tope-1; i++){
			int iguales = 1;
		for (int j = i+1; j < H.tope; j++)
			if (H.arre[i].N == H.arre[j].N)
				{iguales++;
				if (H.arre[i].N > reten)
				reten = H.arre[i].N;
				}


		switch (iguales){

		case 2:
			i++;
			par ++;
			break;
		case 3:
			i +=2;
			trio = true;
			break;
		case 4:
			i = 3;
			poker = true;
		break;
		}

	}


	if (poker)
		valuacion  = 7 ;

	if(trio){
		if(par == 1)
			valuacion = 6 ;
		else
			valuacion = 3;
	}
	else{
		switch (par){
			case 1:
				valuacion = 1 ;
				break;
			case 2:
				valuacion = 2 ;
		}
	}



}
}

int Pedir (Mano H,int val){

int c = 0;


switch (val)
{
	case 7:
		if (mayor(H) < 10)
			c = 1;
		break;
	case 3:
		c = 2;
		break;
	case  2:
		c = 3;
		break;
	case 1:
		c = 3;
		break;
	case 0:
		c = 3;
		break;

}

return c;}


int analizar (Mano H, Numero reten){

int i = 0, j = 1, val;
bool iguales = true;


do{
	if(H.arre[i].N != reten)
		iguales = false;
	else
		i++;
}while ( i < H.tope && iguales);


return i+1;}

void IA (Mano &G, int valG, Numero &NG){

if(valG = 0)
		Cargar(mayor(G), NG);

	int c = Pedir(G,valG);
	printf("La IA solicita %d cartas\n", c);

	for ( int j = 0; j < c; j++){
		Quitar(G,analizar(G,NG));
		}


}
