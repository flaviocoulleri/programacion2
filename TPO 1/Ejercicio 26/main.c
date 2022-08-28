#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int *puntero,vec[5]={5,10,5,20,25},elemento;
    puntero=&vec[0];
    for(int i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }
    printf("\n\n");
    printf("Ingresar elemento: ");
    scanf("%d",&elemento);
    funcion(puntero,elemento);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }
    return 0;
}
