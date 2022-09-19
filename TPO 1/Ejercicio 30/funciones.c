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
void principal(int** px,int orden)
{
    int *pax=*px,i,suma=0;
    for(i=0; i<orden; i++)
    {
        suma+=*pax;
        pax+=orden+1;
    }
    printf("El resultado de la suma de la diagonal principal es: %d\n",suma);
}
void secundaria(int** px,int orden)
{
    int *pax=*px,i,suma=0;
    pax+=orden-1;
    for(i=0; i<orden; i++)
    {
        suma+=*pax;
        pax+=orden-1;
    }
    printf("El resultado de la suma de la diagonal secundaria es: %d\n",suma);
}
