#include "Menu.h"

int MenuPrincipal ()
{
    int opc;
    system("cls");
    fflush(stdin);
        printf("Selecciona una opcion:");
        printf("\n\t1 - Menu de altas y bajas");
        printf("\n\t2 - Menu de consultas ");
        printf("\n\t3 - Menu de listado ");
        printf("\n\t4 - Salir\n");
        scanf("%d",&opc);


    return opc;
}

int MenuAB ()
{
    system("cls");
    int opc;
    printf("\tAltas y Bajas:");
    printf("\n\t1 - Ingresar una nueva persona");
    printf("\n\t2 - Registrar finalizacion de taller");
    printf("\n\t3 - Borrar datos de persona");
    printf("\n\t4 - Regresar\n");
    scanf("%d",&opc);

    return opc;
}

int MenuConsulta ()
{
    system("cls");
    int opc;
    printf("\tConsultas:");
    printf("\n\t1 - Mostrar cantidad de personas con un determinado apellido");
    printf("\n\t2 - Cantidad de talleres que finalizaron entre dos fechas");
    printf("\n\t3 - Mostrar registro con mayor cantidad de dias");
    printf("\n\t4 - Mostrar persona con la mayor edad");
    printf("\n\t5 - Regresar\n");
    scanf("%d",&opc);

    return opc;

}

int MenuListado ()
{
    system("cls");
    int opc;
    printf("\tListados:");
    printf("\n\t1 - Listar personas");
    printf("\n\t2 - Personas que no han compleatado ningun taller");
    printf("\n\t3 - Registros de una persona");
    printf("\n\t4 - Registros de una fecha");
    printf("\n\t5 - Regresar\n");
    scanf("%d",&opc);

    return opc;
}

void Pausa()
{
    printf("\nPresiona una tecla para continuar\n");
    getch();
}
