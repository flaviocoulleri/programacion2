#include <stdio.h>
#include <stdlib.h>
void llenarmatriz(int**px,int orden)
{
    int *pax=*px,i;
    for(i=0; i<orden*orden; i++)
    {
        *pax=i;
        pax++;
    }
}
void matrizdiagonal(int** px,int orden)
{
    int *pax=*px,i=0,j,pos=-1;
    pax++;
    for(i=0; i<orden-1; i++)
    {
        for(i=0; i<orden; i++)
        {
         if(*pax!=0)
                pos=1;
         pax++;
        }
        pax++;
    }
    if(pos==-1)
        printf("La matriz es diagonal principal");
    else
        printf("La matriz no es diagonal principal");
}

