#include <stdio.h>

void funcion(int valor,int* px)
{
    int band=0,i=0,aux;
    while(i<5&&band==0)
    {
        if(valor<*px)
        {
            aux=*px;
            *px=valor;
            *(px+1)=aux;
            band=1;
            for(i+1; i<5; i++)
            {
                aux=*(px+i+1);
                *(px+i+1)=*(px+i);
                *(px+i)=aux;
            }
        }
        else
        {
            i++;
            px++;
        }
    }
}
