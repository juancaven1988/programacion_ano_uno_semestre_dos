#include "ABB.h"



void CrearABB (Arbol &a)
{
 a = NULL;
}


boolean EsVacioABB (Arbol a)
{
 return (boolean) (a == NULL);
}


int DarRaiz (Arbol a)
{
 return a -> info;
}


Arbol HijoIzq (Arbol a)
{
 return a -> hizq;
}

Arbol HijoDer (Arbol a)
{
 return a -> hder;
}


void InsertABB (Arbol &a, int e)
{
 if (a == NULL)
 {
  a = new nodo;
  a -> info = e;
  a -> hizq = NULL;
  a -> hder = NULL;
 }
 else
 {
  if (e < a->info)
   InsertABB (a -> hizq, e);
  else
   InsertABB (a -> hder, e);
 }
}

 boolean PerteneceABB (Arbol a, int e)
{
 if (a == NULL)
  return FALSE;
 else
  if (a -> info == e)
   return TRUE;
  else
   if (e < a -> info)
    return PerteneceABB(a -> hizq, e);
   else
    return PerteneceABB(a -> hder, e);
}



int MinimoABB (Arbol a)
{
 if (a -> hizq == NULL)
  return (a->info);
 else
  return MinimoABB (a -> hizq);
}

 int SumaABB (Arbol a)
 {
  if (a == NULL)
   return 0;
  else
   return (a -> info) + SumaABB (a -> hizq) + SumaABB (a -> hder);
 }

  void ListarOrdenadoABB (Arbol a)
 {
  if (a != NULL)
  {
   ListarOrdenadoABB (a -> hizq);
   printf (" %d ", a -> info);
   ListarOrdenadoABB (a -> hder);
  }
 }

 void Borrar_MinimoABB (Arbol &a)
{
Arbol aux;
      if (a -> hizq == NULL)
{
         aux = a -> hder;
         delete a;
         a = aux;
      }
      else
           Borrar_MinimoABB (a -> hizq);
}

 void BorrarABB (int x , Arbol &a)
{
Arbol aux;
if (x == a -> info)
{
if (a -> hder == NULL)
{
aux = a -> hizq;
delete a;
a = aux;
}
else
{
if (a -> hizq == NULL)
{
aux = a -> hder;
         delete a;
         a = aux;
   }
   else
{
a -> info = MinimoABB (a -> hder);
         Borrar_MinimoABB (a -> hder);
   }
}
}
else
{
if (x < a -> info)
  BorrarABB (x, a -> hizq);
else
  BorrarABB (x, a -> hder);
}
 }

void PreOrden (Arbol a){

if (a != NULL){
	printf("%d ", a->info);
	PreOrden(a->hizq);
	PreOrden(a->hder);
	}
}

void PostOrden (Arbol a){

if (a != NULL){
	PostOrden(a->hizq);
	PostOrden(a->hder);
	printf("%d ", a->info);
	}

}

int ContarNodos (Arbol a){

if (a == NULL)
	return 0;
else
	return 1 + ContarNodos(a->hizq) + ContarNodos(a->hder);
}


void Bajar_ABB_Aux (Arbol a, FILE * f){

if (a != NULL)
	{
	fwrite(&(a->info),sizeof(int),1,f);
	Bajar_ABB_Aux(a->hizq, f);
	Bajar_ABB_Aux(a->hder, f);
	}

}
// Escribe en el archivo los datos de todos los enteros del árbol
// en forma recursiva.
// Precondición: El archivo viene abierto para escritura.


void Bajar_ABB (Arbol a, cadenas nomArch){

FILE *f;

f = fopen(nomArch,"wb");

Bajar_ABB_Aux(a,f);

fclose(f);

}
// Abre el archivo para escritura y escribe los datos de todos los
// enteros del árbol (llamando al procedimiento anterior)


void Levantar_ABB (Arbol &a,cadenas nomArch){

FILE *f;


f = fopen(nomArch,"rb");
int aux;

fread(&aux,sizeof(int),1,f);

while (!feof(f)){
	InsertABB(a,aux);
	fread(&aux,sizeof(int),1,f);

}

fclose(f);

}
// Abre el archivo para lectura e inserta en el árbol todos los
// enteros están en el archivo (llamando
// Precondición: El archivo existe.
