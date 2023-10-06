#include "Tablaperiodica.h"


void CARGAR_TABLA (Tablaperiodica &tp){

 for (int i = 0; i < CANT; i++){

	  CargarElemento(tp[i]);
	  system("cls");

	}

}
//CARGA LA TABLA PERIODICA POR TECLADO//

void MOSTRAR_TABLA (Tablaperiodica tp){


printf("Num\tExiste\tNombre\tSimbolo\tEst Oxid\tClasificacion\tRadioact\tConductividad\tEstd Nat\n");
for (int i = 0; i < CANT; i++){
	MostrarElemento(tp[i]);
	printf("\n");}

}
//MUESTRA POR PANTALLA LA TABLA PERIODICA//

void ORDENAR_TABLA (Tablaperiodica &tp){

Elemento hold;
int pass = 1;
boolean intercambio = FALSE;

do{    /*pasadas*/

intercambio = FALSE;

    for(int i = 0; i < CANT - pass; i++ ){       /*una pasada */

        if (Darnum(tp[i])> Darnum(tp[i+1])){
            hold = tp[i];
            tp[i] = tp[i+1];
            tp[i+1] = hold;
            intercambio = TRUE;}
}

pass++;

}while (pass < CANT && intercambio);


}


void ADDELEMENTO (Tablaperiodica &tp, Elemento e1){

int i = 0;
boolean colocado = FALSE;

do{
	if (!Existe(tp[i])){
		tp[i] = e1;
		colocado = TRUE;}
	else
		i++;
}while (i < CANT && !colocado);

if (colocado)
	ORDENAR_TABLA(tp);
else{
	printf("El elemento no pudo ser colocado\n");
	printf("Verifique que su tabla disponga de elementos inexistentes o lugares disponibles\n");}



}

void BUSCAR_SIM_NOM (Tablaperiodica tp, cadenas &nombre, cadenas &simbolo, int num){

int i = 0;
boolean encontrado = FALSE;

do{

	if (Darnum(tp[i])== num){

		DarNombre(tp[i], nombre);
		DarSimbolo(tp[i],simbolo);
		encontrado = TRUE;

	}
	else
		i++;

}while (i < CANT && !encontrado);

if (!encontrado)
	printf("Elemento no encontrado\n");

}

boolean BUSCAR_ELEM (Tablaperiodica tp, int num){

boolean existe = FALSE;
int i = 0;

do{
		if (Darnum(tp[i])== num)
			existe = TRUE;
		else
			i++;

}while (i < CANT && !existe);


if (!Existe(tp[i]))
	existe = FALSE;

return existe;}


void EstOxBusq (int oxi, Tablaperiodica tp){

for (int i = 0; i < CANT; i++){
		if (Existe(tp[i]) && Daroxid(tp[i]) == oxi){
			MostrarElemento(tp[i]);
			printf("\n");}


	}

}

void Saberclasif (Tablaperiodica tp, int atomicnum, Clasificacion &tipo){

int i = 0;
boolean encontre = FALSE;

do{
	if (Darnum(tp[i]) == atomicnum)
		encontre = TRUE;
	else
		i++;


}while (i < CANT && !encontre);

if (Existe(tp[i]))
    tipo = Darclas(tp[i]);

else
	printf("El elemento buscado no existe");
}
