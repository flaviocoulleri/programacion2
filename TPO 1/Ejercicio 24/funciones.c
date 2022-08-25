#include <stdio.h>

void funcion(int posicion,int* px)
{
    int *aux;
    px+=(posicion-1);
    for(posicion-1;posicion<5;posicion++)
    {
      aux=px;
      px++;
      *aux=*px;
    }
}
