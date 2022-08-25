#include <stdio.h>

void funcion(int posicion,int* px)
{
    int *aux;
    px+=(posicion-1);
    *px=0;
    posicion--;
    for(posicion;posicion<5;posicion++)
    {
      aux=px;
      px++;
      *aux=*px;
    }
}
