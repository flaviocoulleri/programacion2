#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int entero;
    printf("Ingresar un numero entero: ");
    scanf("%d",&entero);
    fibonacci(entero);
    return 0;
}
