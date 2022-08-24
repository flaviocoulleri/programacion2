#include<stdio.h>
typedef struct
{
    int dia,
        mes,
        anio;
} tFecha;
void control(tFecha aux)
{
    if(aux.mes>=1&&aux.mes<=12)
    {
        switch(aux.mes)
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if (aux.dia>=1&&aux.dia<=31)
                          printf("FECHA CORRECTA");
                      else
                          printf("FECHA INCORRECTA");
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if (aux.dia>=1&&aux.dia<= 30)
                          printf("FECHA CORRECTA");
                      else
                          printf("FECHA INCORRECTA");
                      break;

            case  2 : if((aux.anio%4==0&&aux.anio%100!= 0)||(aux.anio%400==0))
                          if (aux.dia>=1&&aux.dia<=29)
                              printf("FECHA CORRECTA");
                          else
                              printf("FECHA INCORRECTA");
                      else
                          if (aux.dia>=1&&aux.dia<=28)
                              printf("FECHA CORRECTA");
                          else
                              printf("FECHA INCORRECTA");
        }
    }
    else
        printf("FECHA INCORRECTA");
}

