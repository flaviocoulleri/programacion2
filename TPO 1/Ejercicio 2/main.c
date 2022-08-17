#include <stdio.h>
#include "funciones.h"

int main()
{
    int numero1,numero2,num1,num2,num3;
    printf("Ingresa el primer numero: ");
    numero1=leemayor();
    printf("Ingresa el segundo numero: ");
    numero2=leemayor();
    num1=funcionfactor(numero1);
    num2=funcionfactor(numero2);
    num3=funcionfactor(numero1-numero2);
    cuenta(num1,num2,num3);
    return 0;
}
