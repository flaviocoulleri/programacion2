#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{   int *puntero,vec[5]={5,10,15,20,25};
    puntero=&vec[0];
    for(int i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }
    printf("\n\n");
    funcion(puntero);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }
    return 0;
}
