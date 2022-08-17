#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{   int numero1,numero2;
    printf("Ingresar el primer numero: ");
    numero1=leemayor(0);
    printf("Ingresar el segundo numero: ");
    numero2=leemayor(1);
    cociente(numero1,numero2);
    return 0;
}
