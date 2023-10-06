#include <stdio.h>

const int Max = 10;

typedef struct {

int arreglo[Max];
int tope;

}ArregloConTope;

typedef enum {FALSE, TRUE}boolean;


void Quitarelemento (ArregloConTope &Ar, int elim){

boolean encontre = FALSE;
int i = 0;

while (i < Ar.tope && !encontre){

	if (Ar.arreglo[i] == elim){

		encontre = TRUE;
		if (Ar.tope > 1)
			Ar.arreglo[i] = Ar.arreglo[Ar.tope - 1];

		Ar.tope--;


	}
	else
		i++;

}

}


int main()
{
   ArregloConTope ar;
   ar.tope = 5;
   int eliminar;

   for(int i = 0; i <ar.tope; i++){
	printf("Ingrese valor %d: ", i+1);
	scanf("%d", &ar.arreglo[i]);

   }

     for (int i = 0; i < ar.tope; i++)
		printf("%d ", ar.arreglo[i]);

      printf("\nElija un numero para eliminar del arreglo: ");
      scanf("%d", &eliminar);

      Quitarelemento(ar, eliminar);


      for (int i = 0; i < ar.tope; i++)
		printf("%d ", ar.arreglo[i]);


    return 0;
}
