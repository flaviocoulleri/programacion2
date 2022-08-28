#include <stdio.h>

void funcion(int* px,int elemento)
{
    int *aux,*p;
    for(int i=0; i<5; i++)
    {
        if(*px==elemento)
        {
            *px=0;
            p=px;
            for(int j=i; j<5; j++)
            {
                aux=p;
                p++;
                *aux=*p;
            }
        }
        px++;
    }
}
