#include "ABB.h"
#include "Listas.h"
#include "Menu.h"

int main()
{
int opc,opc2;
long int ci;
Arbol a;
CrearABB(a);
Lista l;
Crear(l);
Persona paux;
Registro raux;
FILE *fa, *fl;
cadenas ArchivoArbol ="personas.dat";
cadenas ArchivoLista ="registros.dat";
cadenas aux;
strcrear(aux);

cadenas comandos[2] = {"hola","chau"};

print(comandos[0]);
printf("\n");
print(comandos[1]);

int x = streq(comandos[0],comandos[1]);
printf("%d", x);

/*

fa = fopen(ArchivoArbol,"rb");
if(fa != NULL)
    Levantar_ABB(a,ArchivoArbol);

fclose(fa);

fl = fopen(ArchivoLista,"rb");
if(fl != NULL)
    Levantar_Lista(l,ArchivoLista);
fclose(fl);


do{
     opc = MenuPrincipal();
    switch(opc){

    case 1:
              do{
                opc2 = MenuAB();
                switch(opc2){

                case 1:  IngresarPersona(paux);
                         if(!PerteneceABB(a,Darced(paux)))
                            InsertABB(a,paux);

                         else
                            printf("\nPersona ya ha sido ingresada anteriormente");

                         Pausa();
                         break;

                case 2:  CargarReg(raux);
                         if(PerteneceABB(a,DarCI(raux))){
                             if(Vacia(l)){
                                InsbackRecu(l,raux);
                                Aumentartaller(a,DarCI(raux));
                             }
                            else{
                                if(Fechamayor(Darfecha(raux),Darfecha(Ultrecu(l)))){
                                    InsbackRecu(l,raux);
                                    Aumentartaller(a,DarCI(raux));
                                }
                                else
                                    printf("\nLa fecha no puede ser anterior a la ultima ingresada");
                         }
                         }
                         else
                            printf("\nLa cedula de registro no pertence a ninguna persona");

                        Pausa();
                        break;


                case 3: printf("\nIngrese la cedula de la persona que desea borrar:");
                        scanf("%ld",&ci);
                        if(PerteneceABB(a,ci)){
                            Borrarocurrencia(l,ci);
                            BorrarABB(ci,a);
                        }

                        else
                            printf("\nLa cedula no pertenece a ninguna persona ingresada");

                        Pausa();
                        break;


                case 4: break;


                default: printf("\nOpcion no valida");

                        }


              }while(opc2!= 4);

              break;

    case 2:
            do{
                  opc2 = MenuConsulta();
                  switch(opc2){

                  case 1:   fflush(stdin);
                            printf("\nIngrese el apellido a contar:");
                            scan(aux);
                            printf("\nHay %d personas con el apellido ",ContarporApellido(a,aux));
                            print(aux);
                            Pausa();
                            break;


                  case 2:    Fecha f1, f2;
                             do{
                             printf("Ingrese rango de fechas:\n");
                             cargarF(f1);
                             cargarF(f2);
                             if(Fechamayor(f2,f1))
                               printf("Hay %d registros entre las fechas",Contarentre(l,f1,f2));
                             else
                                printf("La segunda fecha debe ser mayor o igual a la primera");
                             }while(!Fechamayor(f2,f1));
                             Pausa();
                             break;



                  case 3:   printf("El registro con mas cantidad de dia es:\n");
                            MostrarReg(MaximoRecu(l));
                            Pausa();
                            break;


                  case 4:   printf("La persona con mayor edad es:\n");
                            DespleglarP(MayoredadABB(a));
                            Pausa();
                            break;

                  case 5:   break;

                  default:  printf("Opcion no valida");


                  }
                }while(opc2!= 5);

                break;

    case 3:
              do{
              opc2 = MenuListado();
              switch(opc2){

              case 1:  ListarOrdenadoABB(a);
                       Pausa();
                       break;

              case 2:  Listarsintaller(a);
                       Pausa();
                       break;

              case 3:  printf("Ingrese la cedula:");
                       scanf("%ld",&ci);
                       if (PerteneceABB(a,ci)){
                          if (TalleresporCI(a,ci) == 0)
                            printf("La persona no cuenta con talleres finalizados\n");
                          else
                            MostrarocurrenciaCI(l,ci);}
                        else
                          printf("La CI ingresada no corresponde a una persona ingresada al sistema\n");
                       Pausa();
                       break;

              case 4:  Fecha f3;
                       printf("Ingrese una fecha:\n");
                       cargarF(f3);
                       MostrarocurrenciaFecha(l,f3);
                       Pausa();
                       break;


              case 5:  break;

              default: printf("Opcion no valida");


              }

              }while(opc2 != 5);


    case 4:   break;


    default:   printf("\nOpcion invalida");

    }


}while(opc != 4);

Bajar_ABB(a,ArchivoArbol);
Bajar_Lista(l,ArchivoLista);


DestruirABB(a);


DestruirLista(l);

*/

return 0;}
