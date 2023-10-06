#include <stdio.h>


bool busquedalin (int arre[], int a,int SIZE){

 if (SIZE == 1){
	if (arre[0] == a)
		return true;
	else
		return false;

 }

else {

 if(arre[0] == a)
	return true;
 else
	busquedalin(&arre[1], a, SIZE-1);}

}

bool palindromo (char cadena[],int ult){


if (ult <= 1)
	return true;
else{
	if (cadena[0] == cadena[ult]){
	    palindromo(&cadena[1], ult-2);}
	else{
		if (cadena[0] == ' ')
		 palindromo(&cadena[1], ult);
		else {if (cadena[ult] == ' ')
				palindromo(&cadena[0], ult-1);
			 else
					return false;}

}

}}


int busqueda_binaria (int arre[], int buscado, int inicio, int fin){

int medio = (inicio+fin)/2;


if (medio <= fin){

	if (buscado == arre[medio])
		return medio;
	else if (buscado < arre[medio])
		busqueda_binaria(arre, buscado, inicio, medio-1);
		 else

			busqueda_binaria(arre, buscado,medio+1, fin);

}
else
	return -1;


}





int main()
{

    int arreglo [5] = {10,23,51,71,72};
    char cadena[] = "animal lamina";


    if (busquedalin(arreglo, 3, 5))
		printf("El numero 3 se encuentra en el arreglo\n");
	else
		printf("El numero 3 no se encuentra en el arreglo\n");

	if (palindromo(cadena, 12))
		printf("La cadena es palindromo\n");
	else
		printf("La cadena no es un palindromo\n");



printf("El valor 10 se encuentra en la posicion %d", busqueda_binaria(arreglo,10,0,4));


    return 0;
}
