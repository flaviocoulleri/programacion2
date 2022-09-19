#include <stdio.h>
#include <stdlib.h>
void llenarmatriz(int**px,int orden)
{
    int *pax=*px,i;
    for(i=0; i<orden*orden; i++)
    {
        scanf("%d",pax);
//        *pax=i;
        pax++;
    }
}
void matrizidentidad(int** px,int orden)
{
    int *pax=*px,*paux=*px+1,i,j,pos=-1;
    for(i=0; i<orden; i++)
    {
        if(*pax!=1)
            pos=1;
        pax+=(orden+1);
    }
    for(i=0; i<orden-1; i++)
    {
        for(j=0; j<orden; j++)
        {
            if(*paux!=0)
                pos=1;
            paux++;
        }
        paux++;
    }

    if(pos==-1)
        printf("La matriz es identidad");
    else
        printf("La matriz no es identidad");
}
