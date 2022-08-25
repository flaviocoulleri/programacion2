#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int *puntero,posicion,vec[5]={5,10,15,20,25};
    puntero=&vec[0];
    printf("Ingrese posicion: ");
    scanf("%d",&posicion);
    funcion(posicion,puntero);
    for(int i=0;i<4;i++)
    {
        printf("%d\n",vec[i]);
    }
    return 0;
}
