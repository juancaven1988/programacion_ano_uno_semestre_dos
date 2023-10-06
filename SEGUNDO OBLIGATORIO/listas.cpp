#include "listas.h"


void Crear (Lista & lis)
{
    lis = NULL;
}

boolean Vacia (Lista lis)
{
    boolean es = FALSE;
    if (lis == NULL)
        es = TRUE;
    return es;
}

void DestruirLista (Lista &l){
int cont = 0;

while (l->sig != NULL){
 Resto(l);

}

delete(l);

}

void Mostrar (Lista lis){



while (lis != NULL){
	MostrarReg(lis->info);
	printf("\n");
	lis = lis->sig;

}

printf("\n");

}

void Resto (Lista &L){

Lista aux;

if (L->sig != NULL){

    aux = L;
    L = L->sig;

}
else
    L  = NULL;

    delete(aux);

}





int Contarentre (Lista L, Fecha A, Fecha B){

int cont = 0;

while (L  != NULL){
        if(Fechamayor(B,Darfecha(L->info))){
            if(Fechamayor(Darfecha(L->info),A))
            cont++;
        }
            L = L->sig;


}

return cont;}


Registro Ultrecu (Lista L){

if (L->sig == NULL)
    return L->info;
else
    return Ultrecu(L->sig);


}

Registro MaximoRecu (Lista L){

if (L->sig == NULL)
    return L->info;

else{
    if (Dardias(MaximoRecu(L->sig))<Dardias(L->info))
        return L->info;
    else
        return MaximoRecu(L->sig);
}
}

void InsbackRecu (Lista &L, Registro n){

if (L == NULL){
    L = new Nodo;
    L->info = n;
    L->sig = NULL;

}
else
    InsbackRecu(L->sig,n);

}

void Borrarocurrencia (Lista &L, long int n){


if (L != NULL){

    if (DarCI(L->info) == n){

       Lista aux;
       aux = L;
       L  = L->sig;
       delete aux;
       Borrarocurrencia(L, n);}

    else
        Borrarocurrencia(L->sig, n);

}

}

void MostrarocurrenciaFecha (Lista &L, Fecha n){

if (L != NULL){

    if (FechaIGUAL(n,Darfecha(L->info))){
        MostrarReg(L->info);
        MostrarocurrenciaFecha(L->sig,n);}
    else
        MostrarocurrenciaFecha(L->sig,n);

}

}

void MostrarocurrenciaCI (Lista &L, long int n){

if (L != NULL){

    if (DarCI(L->info)== n){
        MostrarReg(L->info);
        MostrarocurrenciaCI(L->sig,n);}
    else
        MostrarocurrenciaCI(L->sig,n);

}
}

void Bajar_Lista (Lista L, cadenas nomArch) {

FILE *a;

a = fopen(nomArch, "wb");

while (L != NULL){


    Bajar_Registro(L->info,a);
    L = L->sig;

}

fclose(a);

}

void Levantar_Lista (Lista &L, cadenas nomArch){

FILE *a;

a = fopen(nomArch, "rb");
Registro aux;

Subir_Registro(aux,a);


while(!feof(a)){

    InsbackRecu(L,aux);
    Subir_Registro(aux,a);

}

fclose(a);
}



