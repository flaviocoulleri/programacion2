#include <stdio.h>

void funcion(int valor,int* px)
{
    int band=0,i=0,*aux;
    aux=px;
    while(i<5&&band==0)
    {
        if(valor<*px)
        {
            aux=*px;
            *px=valor;
            band=1;
            for(i; i<5; i++)
            {   px++;
                valor=*px;
                *px=aux;
                aux=valor;
            }
        }
        else
        {
            i++;
            px++;
        }
    }
}
