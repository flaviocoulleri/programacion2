#include <stdio.h>

void funcion(int* px)
{
    int *aux;
    *px=0;
    aux=px;
    px++;
    *aux=*px;
    for(int i=0;i<5;i++)
    {
      aux=px;
      px++;
      *aux=*px;
    }
}
