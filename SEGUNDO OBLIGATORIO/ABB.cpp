#include "ABB.h"

void CrearABB (Arbol &a)
{
 a = NULL;
}


boolean EsVacioABB (Arbol a)
{
 return (boolean) (a == NULL);
}

void DestruirABB (Arbol &a){

while (HijoDer(a) != NULL && HijoIzq(a) != NULL){

  Borrar_Minimo(a);
}

delete(a);

}

Persona DarRaiz (Arbol a)
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


void InsertABB (Arbol &a, Persona e)
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
  if (Darced(e) < Darced(a->info))
   InsertABB (a -> hizq, e);
  else
   InsertABB (a -> hder, e);
 }
}

 boolean PerteneceABB (Arbol a, long int e)
{
 if (a == NULL)
  return FALSE;
 else
  if (Darced(a -> info) == e)
   return TRUE;
  else
   if (e <Darced( a -> info))
    return PerteneceABB(a -> hizq, e);
   else
    return PerteneceABB(a -> hder, e);
}



int ContarporApellido (Arbol a, cadenas Ap){

if (a == NULL)
	return 0;
else{
	if (streq(DarApellido(a->info),Ap))
		return 1 + ContarporApellido(a->hizq,Ap)  +  ContarporApellido(a->hder,Ap);
	else
		return ContarporApellido(a->hizq,Ap)  +  ContarporApellido(a->hder,Ap);
	}

}


Persona MayoredadABB (Arbol a){

if (a->hizq == NULL  && a->hder == NULL)
	return a->info;
else{
	if(a->hizq  != NULL &&  a->hder != NULL){
		if (Fechamayor(DarNatalicio(MayoredadABB(a->hizq)), DarNatalicio(a->info))  && Fechamayor(DarNatalicio(MayoredadABB(a->hder)), DarNatalicio(a->info)))
			return a->info;
		else{
			if (Fechamayor(DarNatalicio(MayoredadABB(a->hizq)), DarNatalicio(MayoredadABB(a->hder))))
				return MayoredadABB(a->hder);
			else
				return MayoredadABB(a->hizq);

		}

	}
	else{
		if (a->hizq == NULL){
			if(Fechamayor(DarNatalicio(MayoredadABB(a->hder)), DarNatalicio(a->info)))
				return a->info;
			else
				return MayoredadABB(a->hder);}
		else{
			if(Fechamayor(DarNatalicio(MayoredadABB(a->hizq)), DarNatalicio(a->info)))
				return a->info;
			else
				return MayoredadABB(a->hizq);}
		}


	}
}



  void ListarOrdenadoABB (Arbol a)
 {
  if (a != NULL)
  {
   ListarOrdenadoABB (a -> hizq);
   DespleglarP(a->info);
   printf("\n");
   ListarOrdenadoABB (a -> hder);
  }
 }

 void Listarsintaller (Arbol a){

  if (a != NULL)
  {
   ListarOrdenadoABB (a -> hizq);
    if (Darfinalizados(a->info) == 0)
		DespleglarP(a->info);
   ListarOrdenadoABB (a -> hder);
  }



 }

 void Aumentartaller (Arbol a, long int ci){

  if ( a != NULL){

	if (Darced(a -> info) == ci)
		Mastaller(a->info);
	else
		if (ci <Darced( a -> info))
		Aumentartaller(a -> hizq, ci);
	else
		Aumentartaller(a -> hder, ci);
    }

 }

int TalleresporCI  (Arbol a, long int ci){

  if ( a != NULL){

	if (Darced(a -> info) == ci)
		return a->info.finalizados;
	else
		if (ci <Darced( a -> info))
		TalleresporCI(a -> hizq, ci);
	else
		TalleresporCI(a -> hder, ci);
    }

 }


Persona MinimoABB (Arbol a)
{
 if (a -> hizq == NULL)
 return (a->info);
 else
 return MinimoABB (a -> hizq);
}



void Borrar_Minimo (Arbol &a)
{
Arbol aux;
 if (a -> hizq == NULL)
{
 aux = a -> hder;
 delete a;
 a = aux;
 }
 else
 Borrar_Minimo (a -> hizq);
}


 void BorrarABB (long int x , Arbol &a)
{
Arbol aux;
if (x == Darced(a -> info))
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
         Borrar_Minimo (a -> hder);
   }
}
}
else
{
if (x < Darced(a -> info))
  BorrarABB (x, a -> hizq);
else
  BorrarABB (x, a -> hder);
}
 }

 void Bajar_ABB_Aux (Arbol a, FILE * f){

if (a != NULL)
	{
	Bajar_Persona(a->info,f);
	Bajar_ABB_Aux(a->hizq, f);
	Bajar_ABB_Aux(a->hder, f);
	}

}


void Bajar_ABB (Arbol a, cadenas nomArch){

FILE *f;

f = fopen(nomArch,"wb");

Bajar_ABB_Aux(a,f);

fclose(f);

}

void Levantar_ABB (Arbol &a,cadenas nomArch){

FILE *f;


f = fopen(nomArch,"rb");
Persona aux;

Levantar_Persona(aux,f);

while (!feof(f)){
	InsertABB(a,aux);
	Levantar_Persona(aux,f);

}

fclose(f);

}
