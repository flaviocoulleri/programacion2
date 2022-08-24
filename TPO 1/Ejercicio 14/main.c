#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   tFecha aux;
    printf("Ingresar dia: \n");
    scanf("%d",&aux.dia);
    printf("Ingresar mes: \n");
    scanf("%d",&aux.mes);
    printf("Ingresar anio: \n");
    scanf("%d",&aux.anio);
    control(aux);
    return 0;
}
