#include "stringD.h"

void strcrear (cadenas &str){

str = new char;
*str = '\0';

}


void strdestruir (cadenas &str){

delete [] str;
}


int strlar (cadenas str){

int largo = 0;

while (str[largo] != '\0'){
	largo++;
}

return largo;}


void strcop (cadenas &copia, cadenas org){

delete [] copia;

copia = new char [strlar(org)+1];

int i = 0;

while (org[i] != '\0'){

	copia[i] = org[i];
	i++;
}

copia[i] = '\0';

}


void scan (cadenas &str){

cadenas aux;
aux = new char [MAX];
int i = 0;
char c;
scanf("%c", &c);


while(c != '\n' && i < MAX-1){

	aux[i] = c;
	i++;
	scanf("%c", &c);

}

aux[i] = '\0';



strcop(str,aux);

strdestruir(aux);


}


void strcon (cadenas &str1, cadenas concat){

cadenas aux;
strcrear(aux);

strcop(aux, str1);

strdestruir(str1);

int Largo = strlar(aux)+strlar(concat)+1;

if (Largo > 79)
	Largo = MAX;

str1 = new char [strlar(aux)+strlar(concat)+1];

int i = 0;

while (aux[i] != '\0'){

	str1[i] = aux[i];
	i++;
}

int j = 0;

while (concat[j] != '\0' && i < MAX - 1){

	str1[i] = concat[j];
	i++;
	j++;
}

str1[i] = '\0';
strdestruir(aux);

}


void strswap (cadenas &str1, cadenas &str2){

cadenas aux;

aux = str1;
str1 = str2;
str2 = aux;

}


void print (cadenas str){

int i = 0;

while (str[i] != '\0'){
	printf("%c", str[i]);
	i++;
}

}


boolean strmen (cadenas str1, cadenas str2){

boolean menor = FALSE;

int i = 0;

while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'){
	i++;

}

if (str1[i] < str2[i])
	menor = TRUE;

return menor;}


boolean streq (cadenas str1, cadenas str2){

boolean iguales = TRUE;

int i = 0;



while (iguales && str1[i] != '\0' && str2[i] != '\0'){

	if (str1[i] != str2 [i])
		iguales = FALSE;
	else
	i++;

}

if (str1[i] != '\0' || str2[i] != '\0')
	iguales = FALSE;

return iguales;}


void Bajar_String (cadenas s, FILE * f){

int i = 0;

while (s[i] != '\0'){

	fwrite(&s[i],sizeof(char),1,f);
	i++;

}

fwrite(&s[i],sizeof(char),1,f);

}

void Levantar_String (cadenas &s, FILE * f){

strcrear(s);
cadenas aux;
aux = new char [MAX];
int i = 0;

fread(&aux[i], sizeof(char), 1,f);


while (aux[i] != '\0' && i < MAX -1 && !feof(f) ){
	i++;
	fread(&aux[i], sizeof(char), 1,f);
	}

	if(i == MAX-1 || feof(f))
		aux[i] = '\0';


strcop(s,aux);
strdestruir(aux);

}
