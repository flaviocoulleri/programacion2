#include <stdio.h>
int leemayor()
{
    int numero;
    scanf("%d",&numero);
    while(numero<0)
    {
        printf("Error. Ingresar nuevamente: ");
        scanf("%d",&numero);
    }
    return numero;
}
int funcionfactor(int num)
{
    int resu=num;
    for(num--;num>=1;num--)
    {
        resu*=num;
    }
    return resu;
}
void cuenta(int num1,int num2,int num3)
{
    int resu;
    printf("El resultado es: %d",(num1/(num2*num3)));
}
