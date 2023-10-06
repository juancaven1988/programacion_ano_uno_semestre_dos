#include "archivint.h"

void Agregar (cadenas nomArch, int entero){

FILE *f;
f = fopen(nomArch, "ab");

fwrite(&entero, sizeof(int), 1, f);

fclose(f);

}

boolean Existe (cadenas nomArch){

boolean exist = FALSE;
FILE *f;
f = fopen(nomArch,"rb");

if (f != NULL)
	exist = TRUE;

fclose(f);

return exist;}


boolean Vacio (cadenas nomArch){

boolean vacio = FALSE;

FILE *f;

f = fopen(nomArch, "rb");

fseek (f, 0, SEEK_END);

if (ftell(f) == 0)
	vacio = TRUE;

fclose(f);

return  vacio;}



boolean Pertenece (cadenas nomArch, int entero){

boolean exist = FALSE;

FILE *f;
f = fopen(nomArch, "rb");
int x;


while (!feof(f) && !exist){

	fread(&x, sizeof(int), 1,f);
	if (x == entero)
		exist = TRUE;

}

fclose(f);

return exist;}


int Largo (cadenas nomArch){

int larg;
FILE *f;
f = fopen(nomArch, "rb");

fseek (f, 0, SEEK_END);


larg = ftell(f)/sizeof(int);

fclose(f);

return larg;}


int Kesimo (cadenas nomArch, int k){

int ent;

FILE *f;
f = fopen(nomArch, "rb");

fseek(f, (k-1) * sizeof(int), SEEK_SET);

fread(&ent, sizeof(int), 1, f);

fclose(f);

return ent;}


void Desplegar (cadenas nomArch){

FILE *f;
f = fopen(nomArch, "rb");
int info;

fread(&info, sizeof(int), 1, f);

while (!feof(f)){

	printf("%d ", info);
	fread(&info, sizeof(int), 1, f);


}

fclose(f);

printf("\n");
}

