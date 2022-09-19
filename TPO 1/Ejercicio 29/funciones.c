#include <stdio.h>
#include <stdlib.h>
void llenarmatriz(int**px,int orden)
{
    int *pax=*px,i;
    for(i=0; i<orden*orden; i++)
    {
        //printf("%p\n",pax);
        *pax=i;
        pax++;
    }
}
void triangularsuperior(int** px,int orden)
{
    int *pax=*px,i,j=0,suma=0;
    for(i=0; i<orden; i++)
    {
        j=0;
        while(j<orden-i)
        {
            suma+=*pax;
            pax++;
            j++;
        }
        pax+=i+1;
    }
    printf("El resultado de la suma triangular superior es: %d\n",suma);
}
void triangularinferior(int** px,int orden)
{
    int *pax=*px,i,j=0,suma=0;
    for(i=0; i<orden; i++)
    {
        j=0;
        while(j<i+1)
        {
            suma+=*pax;
            pax++;
            j++;
        }
        pax+=orden-i-1;
    }
    printf("El resultado de la suma triangular inferior es: %d",suma);
}
