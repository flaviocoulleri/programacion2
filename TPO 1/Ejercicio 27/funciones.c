#include<stdio.h>
int funcion(char*pi,char*pf,int largo)
{ int i=0,cond=1;
    while(i<largo)
    {
    if(*pi!=*pf)
    {
        cond=0;
    }
    pi++;pf--;i++;
    }
    return cond;
}
