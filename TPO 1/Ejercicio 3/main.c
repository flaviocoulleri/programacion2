#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int entero,TOL;
    printf("Ingresar un numero entero: ");
    scanf("%d",&entero);
    printf("Ingresar tolerancia: ");
    scanf("%d",&TOL);
    funcion(entero,TOL);
    return 0;
}
