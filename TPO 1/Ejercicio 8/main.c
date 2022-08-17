#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int numero1,numero2;
    printf("Ingresar el primer numero: ");
    scanf("%d",&numero1);
    printf("Ingresar el segundo numero: ");
    scanf("%d",&numero2);
    funcion(numero1,numero2);
    return 0;
}
