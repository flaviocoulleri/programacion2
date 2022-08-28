#include<stdio.h>
int funcion(char*pc,int largo)
{
    int valor=0,i;
    for(i=0;i<largo;i++)
    {
        valor+=*pc;
        pc++;
    }
    return valor;
}
