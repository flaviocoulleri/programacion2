#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int *puntero,valor,vec[5]={5,10,15,20,25};
    puntero=&vec[0];
    printf("Ingrese valor 0 para terminar: ");
    scanf("%d",&valor);
    funcion(valor,puntero);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }
    return 0;
}
