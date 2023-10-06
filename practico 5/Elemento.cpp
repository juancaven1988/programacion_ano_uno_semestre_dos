#include "Elemento.h"


void CargarElemento (Elemento &ele){

printf("Ingrese el numero atomico: ");
scanf("%d", &ele.num_atom);

printf("Existe ?\n\t");
bscan(ele.existe);

if (ele.existe){
	 printf("Ingrese nombre ");
	 scan(ele.nombre);
	 printf("Ingrese el simbolo ");
	 scan(ele.simbolo);
	 printf("Ingrese el estado de oxidacion: ");
	 scanf("%d", &ele.estado_oxidacion);
	 Selectclasif(ele.disc);

		switch (ele.disc){


		 case GASES_NOBLES: printf("Es radioactivo?\n");
							bscan(ele.Info.radioactividad);
							break;
		 case METALES: printf( "Ingrese la conductividad ");
					   scanf("%d", &ele.Info.conductividad);
					   break;
		 case NO_METALES: SelectEstd(ele.Info.est);
						  break;

		}
	}
}
//CARGA UN ELEMENTO//

void MostrarElemento(Elemento ele){


printf("%3d\t", ele.num_atom);
bprint(ele.existe);

if (ele.existe){

	printf("\t");
	print(ele.nombre);
	printf("\t");
	print(ele.simbolo);
	printf("\t%7d", ele.estado_oxidacion);
	printf("\t\t");
	PrintClas(ele.disc);
	printf("\t");

	switch (ele.disc){

		 case GASES_NOBLES:
						   bprint(ele.Info.radioactividad);
						   break;

		 case METALES: printf("\t\t\t");
					   printf( "%d", ele.Info.conductividad);
					   break;
		 case NO_METALES: printf("\t\t\t\t");
						  PrintEstd(ele.Info.est);
						  break;
	}

}

else
	printf("\tElemento inexistente");


}


int Darnum (Elemento ele){


return ele.num_atom;}


boolean Existe (Elemento ele){


return ele.existe;}




void DarNombre (Elemento ele, cadenas &str){

if (ele.existe)
	strcop(str,ele.nombre);
else
	Imposible();
}


void DarSimbolo (Elemento ele, cadenas &str){


if (ele.existe)
	strcop(str,ele.simbolo);
else
	Imposible();


}
int Daroxid (Elemento ele){



return ele.estado_oxidacion;}


Clasificacion Darclas (Elemento ele){


return ele.disc;}


boolean Dar_Radioactividad (Elemento ele){


return ele.Info.radioactividad;}


int Dar_conductividad (Elemento ele){

return ele.Info.conductividad;}


Estados Dar_estado (Elemento ele){


return ele.Info.est;}


