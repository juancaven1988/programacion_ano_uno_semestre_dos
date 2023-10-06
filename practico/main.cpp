#include <stdio.h>
#include "clase.h"

int main (){

Arrestudiantes clas1;

CargarEstudiantes(clas1);

MostrarEstudiantes(clas1);

printf("El estudiante con mayor nota promedio es:\n");
mostrar(EstudianteConNotaPromedioMaxima(clas1));


return 0;
}
