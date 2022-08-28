#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"
int main()
{   int i=0,valor;
    char *pc,palabra[24];
    printf("Ingresar una palabra: ");
    fflush(stdin);
    scanf("%s",&palabra);
    while(palabra[i]!='\0')
    {
        i++;
    }
    pc=&palabra[0];
    valor=funcion(pc,i);
    printf("%d",valor);
    return 0;
}
