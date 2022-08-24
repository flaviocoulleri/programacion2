#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int *puntero,valor,posicion,vec[5]={0};
    puntero=&vec[0];
    printf("Ingrese valor 0 para terminar: ");
    scanf("%d",&valor);
    while(valor!=0)
    {
    printf("Ingrese posicion: ");
    scanf("%d",&posicion);
    funcion(valor,posicion,puntero);
    printf("Ingrese valor 0 para terminar: ");
    scanf("%d",&valor);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }
    return 0;
}
