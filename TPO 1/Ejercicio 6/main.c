#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int numero;
    float TOL;
    printf("Ingresar numero: ");
    scanf("%d",&numero);
    printf("Ingresar tolerancia: ");
    scanf("%f",&TOL);
    funcion(numero,TOL);
    return 0;
}
