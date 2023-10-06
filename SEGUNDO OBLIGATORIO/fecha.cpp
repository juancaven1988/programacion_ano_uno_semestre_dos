#include "fecha.h"


boolean ComprobarF (Fecha f){

boolean valido = FALSE;

switch (f.mm){

case 1: case 3: case 5: case 7: case 8:
case 10: case 12:
	if (f.dd >= 1 || f.dd <= 31)
		valido = TRUE;
		break;
case 4:case 6: case 9: case 11:
	if (f.dd >= 1 || f.dd <= 30)
		valido = TRUE;
		break;
case 2: if (f.aaaa %4 == 0){
			if (f.dd >= 1 || f.dd <= 29)
				valido = TRUE;
			else
				if (f.dd >= 1 || f.dd <= 28)
					valido = TRUE;
		}
		break;
}

return valido;}

void cargarF (Fecha &f){

do {
	printf("Ingrese dia [dd]: ");
	scanf("%d", &f.dd);
	printf("Ingrese mes [mm]: ");
	scanf("%d", &f.mm);
	printf("Ingrese anio [aaaa]: ");
	scanf("%d", &f.aaaa);

	if(!ComprobarF(f))
		printf("FECHA INVALIDA\n\n");

}while (!ComprobarF(f));

}


void mostrarF (Fecha f){

printf("%d/%d/%d",f.dd,f.mm,f.aaaa);

}

int DarDia (Fecha f){

return f.dd;}


int DarMes (Fecha f){

return f.mm;}


int DarAnio (Fecha f){

return f.aaaa;}


void Bajar_Fecha (Fecha r, FILE *f){

fwrite(&r.dd,sizeof(int), 1, f);
fwrite(&r.mm,sizeof(int), 1, f);
fwrite(&r.aaaa,sizeof(int), 1, f);

}

void Subir_Fecha (Fecha &r, FILE *f){

fread(&r.dd,sizeof(int), 1, f);
fread(&r.mm,sizeof(int), 1, f);
fread(&r.aaaa,sizeof(int), 1, f);

}

boolean Fechamayor (Fecha A, Fecha B){

boolean mayor = FALSE;

if (A.aaaa > B.aaaa)
	mayor = TRUE;
else
{
	if (A.aaaa == B.aaaa){
		if (A.mm  >  B.mm)
			mayor = TRUE;
		else{
			if (A.mm == B.mm){
				if (A.dd >= B.dd)
					mayor = TRUE;
			}

		}


	}

}

return mayor;}

boolean FechaIGUAL (Fecha A, Fecha B){

boolean igual = FALSE;

if(A.aaaa==B.aaaa && A.mm == B.mm && A.dd == B.dd)
    igual = TRUE;

return igual;
}


