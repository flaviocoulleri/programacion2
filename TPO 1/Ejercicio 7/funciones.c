#include<stdio.h>
int leemayor(int mayor)
{
    int numero;
    scanf("%d",&numero);
    while(numero<mayor)
    {
        printf("ERROR. Ingresar nuevamente: ");
        scanf("%d",&numero);
    }
    return numero;
}
void funcion(int numero)
{
    int aux=0,i=1;
    while(i<numero)
    {
        if((numero%i)==0)
        {
            aux+=i;
        }
        i++;
    }
    if(aux==numero)
        printf("Clasificacion: PERFECTO");
    if(aux<numero)
        printf("Clasificacion: DEFICIENTE");
    if(aux>numero)
        printf("Clasificacion: ABUNDANTE");
}
