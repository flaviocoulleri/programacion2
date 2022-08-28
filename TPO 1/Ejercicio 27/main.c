#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"
int main()
{   int i=0,cond;
    char palabra[24],*px,*p;
    printf("Ingresar tamano: ");
    fflush(stdin);
    scanf("%s",&palabra);
    while(palabra[i]!='\0')
    {
        i++;
    }
    px=&palabra[0];
    p=&palabra[i-1];
    cond=funcion(px,p,i-1);
    if(cond==1)
    printf("La palabra es un palindromo.");
    else
    printf("La palabra no es un palindromo.");
    return 0;
}
