
#include "clase.h"

void CargarEstudiantes (Arrestudiantes &clase){

for (int i = 0; i < TAM; i++)
	cargar(clase[i]);

}

void MostrarEstudiantes (Arrestudiantes clase){

for (int i = 0; i < TAM; i++)
	mostrar(clase[i]);

}


Estudiante EstudianteConNotaPromedioMaxima (Arrestudiantes clase){


int maximo = 0;
float notamax = DarNota(clase[0]);



for (int i = 1; i < TAM; i++){

	if(DarNota(clase[i])>notamax){
		maximo = i;
		notamax = DarNota(clase[i]);
	}


}

return clase[maximo];}
//DEVUELVE EL ESTUDIANTE CON LA NOTA PROMEDIO MAS ALTA//
