#include <stdio.h>

void funcion(int valor,int pos,int* px)
{
    px+=(pos-1);
    *px=valor;
}
