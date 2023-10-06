#include "regfinal.h"

void CargarReg (Registro &r){

strcrear(r.nombre);

cargarF(r.fin);
printf("Ingrese cedula:");
scanf("%ld",&r.CI);
fflush(stdin);
printf("Ingrese nombre:");
scan(r.nombre);
printf("Ingrese cantidad de dias cursados:");
scanf("%d",&r.dias);
fflush(stdin);

}

void MostrarReg (Registro r){

mostrarF (r.fin);
printf("\t%ld\t", r.CI);
print (r.nombre);
printf("\t%d", r.dias);


}

Fecha Darfecha (Registro r){

return r.fin;}

long int DarCI (Registro r){

return r.CI;}

cadenas Darnom (Registro r){

return r.nombre;}

int Dardias (Registro r){

return r.dias;}

void Bajar_Registro (Registro r, FILE *f){

Bajar_Fecha(r.fin,f);
fwrite(&r.CI,sizeof(long int),  1, f);
Bajar_String(r.nombre,f);
fwrite(&r.dias,sizeof (int),1,f);


}

void Subir_Registro (Registro &r, FILE *f){

Subir_Fecha(r.fin,f);
fread(&r.CI,sizeof(long int),  1, f);
Levantar_String(r.nombre,f);
fread(&r.dias,sizeof (int),1,f);

}
