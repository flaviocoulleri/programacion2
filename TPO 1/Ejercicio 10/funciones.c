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
    int aux=0,i;
    for(i=nat;i>0;i--)
    {
        aux+=i;
    }
    printf("La suma de N numeros naturales es: %d",aux);
}
