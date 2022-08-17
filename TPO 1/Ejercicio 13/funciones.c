#include<stdio.h>
void EsPrimo(int numero)
{
    int resu=1,x;
    if(numero == 0 || numero == 1 || numero == 4)
    resu=0;
    for(x=2;x<numero/2;x++)
    {
        if (numero%x == 0)
        resu=0;
    }
    if(resu==1)
    printf("Es primo");
}
