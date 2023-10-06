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


/* Precondición: lista NO vacía */
int Primero (Lista lis)
{
    return lis -> info;
}

/* Precondición: lista NO vacía */
void Resto (Lista & lis)
{
    Lista aux = lis;
    lis = lis -> sig;
    delete aux;
}

void InsFront (Lista & lis, int e)
{
    Lista aux = new Nodo;
    aux -> info = e;
    aux -> sig = lis;
    lis = aux;
}

void Mostrar (Lista lis){



while (lis != NULL){
	printf("%d - ", lis->info);
	lis = lis->sig;

}

printf("\n");

}

int Suma (Lista L)
{
  if (L == NULL)
    return 0;
  else
    return (L->info) + Suma(L);
}

void Duplica (Lista & L)
{
    if (L != NULL){
       L->info = (L ->info) * 2;
       Duplica(L->sig);
    }
}

boolean ExisteNegativo (Lista L)
{
   if (L == NULL)
    return FALSE;
   else
      if ((L->info) <  0)
        return TRUE;
      else
        ExisteNegativo(L->sig);

}

int LargoRecu (Lista L){

if (L  == NULL)
    return 0;
else
    return 1 +  LargoRecu(L->sig);


}

int Largoiter (Lista L){

int largo = 0;

while (L != NULL){
    largo++;
    L = L->sig;

}

return largo;}

//RETORNA EL ULTIMO ELEMENTO DE LA LISTA//
/*Precondicion la lista no puede estar vacia*/
int Ultiter (Lista L){

while (L->sig != NULL)
    L = L->sig;


return L->info;}

int Ultrecu (Lista L){

if (L->sig == NULL)
    return L->info;
else
    return Ultrecu(L->sig);


}

int ContarIter (Lista L, int n){

int cont = 0;

while (L != NULL){
    if (L->info == n)
        cont++;

    L = L->sig;

}

return cont;}

int ContarRecu (Lista L, int n){

if (L == NULL)
    return 0;
else
    if (L->info == n)
        return 1 + ContarRecu(L->sig, n);
    else
        return ContarRecu(L->sig, n);


}

//RETORNA TRUE SI e PERTENECE A LA LISTA//
boolean PerteneceIter (Lista L, int e){

boolean encontre = FALSE;

while (L != NULL && !encontre){

    if (L->info == e)
        encontre = TRUE;
    else
        L = L->sig;

}

return encontre;}

boolean PerteneceRecu (Lista L, int e){


if(L == NULL)
    return FALSE;
else
    if (L->info == e)
        return TRUE;
    else
        PerteneceRecu(L->sig, e);


}

//SUSTITUYE CADA OCURRENCIA DE e POR n//
void SustituirIter (Lista &L, int e, int n){

Lista aux;
aux = L;

while (aux != NULL){
    if (aux->info == e)
        aux->info = n;

    aux = aux ->sig;

}
}

void SustituirRecu (Lista &L, int e, int n){


if (L != NULL){
    if (L->info == e)
        L->info = n;

        SustituirRecu(L->sig, e, n);
}
}

//RETORNA EL MAXIMO VALOR DE LA LISTA//
/*Precondicion: La lista debe tener al menos un elemento*/
int MaximoIter (Lista L){

int maxi = L->info;

    L = L->sig;

 while (L != NULL){
    if((L->info)>maxi)
        maxi = (L->info);

    L =  L->sig;
 }


return maxi;}

int MaximoRecu (Lista L){

if (L->sig == NULL)
    return L->info;

else{
    if (MaximoRecu(L->sig)<L->info)
        return L->info;
    else
        return MaximoRecu(L->sig);
}
}

//REGRESA DOS LISTAS NUEVAS UNA CON LSO VALORES PARES Y OTRA CON LOS IMPARES//
void ParesImparesIter (Lista L, Lista &P, Lista &I){

delete P;
delete I;

P = NULL;
I = NULL;

while (L != NULL){

    if ((L->info)%2 == 0)
        InsFront(P, L->info);
    else
        InsFront(I, L->info);

    L = L->sig;

}
}

/*Las listas P e I tiene que estar inicializadas y vacias*/
void ParesImparesRecu (Lista L, Lista &P, Lista &I){

if (L != NULL){

    if ((L->info)%2 == 0)
        InsFront(P,  L->info);
    else
        InsFront(I, L->info);

    ParesImparesRecu(L->sig,P,I);


}
}

//AGREGA UN ENTERO AL FINAL DE LA LISTA
void InsbackIter (Lista &L, int n){

if (L == NULL){
    L = new Nodo;
    L->info = n;
    L->sig = NULL;}

else{
    Lista aux;
    aux = L;

    while (aux->sig != NULL)
        aux = aux->sig;

    aux->sig = new Nodo;
    aux = aux->sig;
    aux->info = n;
    aux->sig = NULL;

}

}

void InsbackRecu (Lista &L, int n){

if (L == NULL){
    L = new Nodo;
    L->info = n;
    L->sig = NULL;

}
else
    InsbackRecu(L->sig,n);

}

void Borrarocurrencia (Lista &L, int n){


if (L != NULL){

    if (L->info == n){

       Lista aux;
       aux = L;
       L  = L->sig;
       delete aux;
       Borrarocurrencia(L, n);}

    else
        Borrarocurrencia(L->sig, n);

}

}

boolean hayrepetidos  (Lista L){

boolean hay = FALSE;

while (L != NULL && !hay){

    Lista aux;
    aux = L->sig;

    while (aux != NULL  && !hay){

        if (L->info ==  aux->info)
             hay = TRUE;
        else
            aux = aux->sig;

    }

    L = L->sig;
    delete aux;

}


return hay;}

void clonarvalores (Lista &L){

Lista aux, add;
aux = L;

while (aux != NULL){

        add = aux->sig;


        aux->sig = new Nodo;

        aux->sig->info = aux ->info;
        aux->sig->sig = add;

        aux = add;


}

}

