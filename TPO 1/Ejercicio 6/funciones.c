#include<stdio.h>
#include<math.h>
void funcion(int numero,float tol)
{
//    float seno=numero;
//    int i=1,aux=3;
//    tol=numero+tol;
//    while(seno<tol)
//    {
//        if(i%2!=0)
//        {
//            seno-=pow(numero,aux)/funcionfactor(aux);
//            aux+=2;
//            i++;
//        }
//        else
//        {
//            seno+=pow(numero,aux)/funcionfactor(aux);
//            aux+=2;
//            i++;
//        }
//    }
//    printf("El seno es: %f",seno);
    float seno=numero;
    int i=1,aux=3;
    while(i<tol)
    {
        if(i%2!=0)
        {
            seno-=pow(numero,aux)/funcionfactor(aux);
            aux+=2;
            i++;
        }
        else
        {
            seno+=pow(numero,aux)/funcionfactor(aux);
            aux+=2;
            i++;
        }
    }
    printf("El seno es: %f",seno);
}
int funcionfactor(int num)
{
    int resu=num;
    for(num--; num>=1; num--)
    {
        resu*=num;
    }
    return resu;
}
