#include <stdio.h>
int leemayor(int mayor)
{
    int numero;
    scanf("%d",&numero);
    while(numero<=mayor)
    {
        printf("Error. Ingresar nuevamente: ");
        scanf("%d",&numero);
    }
    return numero;
}
void funcion(int nat)
{
    int aux=0,i=1;
    while(i!=nat+1)
    {
        aux+=2*i;
        i++;
    }
    printf("La suma de N numeros primeros naturales pares es: %d",aux);
}
