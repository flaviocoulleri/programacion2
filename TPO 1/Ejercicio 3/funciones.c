#include<stdio.h>
#include<math.h>
void funcion(int entero,int tolerancia)
{
    int potencia=1,div=1;
    float e=1;
    while(e>(entero-tolerancia)&&e<(entero+tolerancia))
    {
        e+=((pow(entero,potencia))/div);
        potencia++;
        div*=potencia;
    }
    printf("El numero calculado es: %.2f",e);
}
