#include<stdio.h>
#include"mictype.h"
int mistrlen(char palabra[])
{
    char *pc=&palabra[0];
    int i=0;
    while(*pc!='\0')
    {
        pc++;
        i++;
    }
    return i;
}
void mistrcpy(char palabra[],char copia[])
{
    char *pp=&palabra[0],*pc=&copia[0];
    while(*pc!='\0')
    {
        *pp=*pc;
        pc++;
        pp++;
    }
}
void mistrcat(char destino[],char origen[])
{
    int i;
    i=mistrlen(destino);
    char *pp=&destino[i++],*pc=&origen[0];
    while(*pc!='\0')
    {
        *pp=*pc;
        pp++;
        pc++;
    }

}
int mistrcmp(char palabra[],char copia[])
{
    int px=0,py=0;
    char *pp=&palabra[0],*pc=&copia[0];
    while(*pp!='\0')
    {
    px+=*pp;
    pp++;
    }
    while(*pc!='\0')
    {
    py+=*pc;
    pc++;
    }

    return px-py;
}
int mistrcmpi(char palabra[],char copia[])
{
    int px=0,py=0;
    char *pp=&palabra[0],*pc=&copia[0];
    while(*pp!='\0')
    {
    px+=(mitolower(*pp));
    pp++;
    }
    while(*pc!='\0')
    {
    py+=(mitolower(*pc));
    pc++;
    }
    return px-py;
}
