#include <stdio.h>
#include "funciones.h"

int main()
{
    int n,m,num1,num2,num3;
    printf("Ingresa el primer numero: ");
    n=leemayor(0);
    printf("Ingresa el segundo numero: ");
    m=leemayor(n);
    num1=funcionfactor(m);
    num2=funcionfactor(n);
    num3=funcionfactor(m-n);
    cuenta(num1,num2,num3);
    return 0;
}
