#include "Persona.h"

void IngresarPersona (Persona &P){

fflush(stdin);
strcrear(P.Nombre);
strcrear(P.Apellido);
strcrear(P.Direccion);

printf("Ingrese CI: ");
scanf("%ld", &P.cedula);
fflush(stdin);
printf("Ingrese nombre: ");
scan(P.Nombre);
printf("Ingrese apellido: ");
scan(P.Apellido);
printf("Ingrese fecha de nacimiento:\n");
cargarF(P.natalicio);
fflush(stdin);
printf("Ingrese direccion: ");
scan(P.Direccion);
printf("Ingrese telefono: ");
scanf("%ld", &P.Telefono);
fflush(stdin);
P.finalizados = 0;


}

void DespleglarP (Persona P){

printf("%d\t", P.cedula);
print(P.Nombre);
printf(" ");
print(P.Apellido);
printf("\t");
mostrarF(P.natalicio);
printf("\t");
print(P.Direccion);
printf("\t%ld", P.Telefono);

}

long int Darced (Persona P){

return P.cedula;}

cadenas DarNombre (Persona P){

return P.Nombre;}

cadenas DarApellido (Persona P){

return P.Apellido;}

Fecha DarNatalicio (Persona P){

return P.natalicio;}

cadenas DarDireccion (Persona P){

return P.Direccion;}

long int DarTel (Persona P){

return P.Telefono;}

int Darfinalizados (Persona P){

return P.finalizados;}

void Mastaller (Persona &P){

P.finalizados++;
}

void Bajar_Persona (Persona P, FILE *f){

fwrite(&P.cedula,sizeof(long int), 1, f);
Bajar_String(P.Nombre,f);
Bajar_String(P.Apellido,f);
Bajar_Fecha(P.natalicio,f);
Bajar_String(P.Direccion,f);
fwrite(&P.Telefono,sizeof(long int), 1, f);
fwrite(&P.finalizados, sizeof(int), 1, f);

}

void Levantar_Persona (Persona &P, FILE *f){

fread(&P.cedula,sizeof(long int), 1, f);
Levantar_String(P.Nombre,f);
Levantar_String(P.Apellido,f);
Subir_Fecha(P.natalicio,f);
Levantar_String(P.Direccion,f);
fread(&P.Telefono,sizeof(long int), 1, f);
fread(&P.finalizados, sizeof(int), 1, f);

}
