#include <stdio.h>
void funcion(int num1,int num2)
{
    int aux,i;
    for(i=0;i<num2;i++)
    {
        aux+=num1;
    }
    printf("El producto de %d y %d es: %d",num1,num2,aux);
}
