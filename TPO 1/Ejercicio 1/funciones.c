#include<stdio.h>
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
void funcionfactor(int num)
{
    int resu=num;
    for(num--;num>=1;num--)
    {
        resu*=num;
    }
    printf("Factor: %d",resu);
}
