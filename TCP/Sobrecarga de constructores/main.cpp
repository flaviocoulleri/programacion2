#include <stdio.h>
#include <stdlib.h>
class Fecha{
private://atributos
    int dia, mes, anio;
public://metodos
    Fecha(int,int,int);//Constructor1
    Fecha(long);//Constructor2
    void mostrarFecha();
};

// 9/1/2017 --- 20170109 ---
//Constructor1
Fecha::Fecha(int _dia,int _mes,int _anio)
{
    anio= _anio;
    mes= _mes;
    dia= _dia;
}
//Constructor2
Fecha::Fecha(long fecha){
    anio= int(fecha/10000);
    mes= int(fecha%10000/100);
    dia= int(fecha%10000%100);
}

void Fecha::mostrarFecha(){
    printf("La fecha es: %d/%d/%d",dia,mes,anio);
}

int main()
{
    Fecha hoy(8,1,2017);
    Fecha ayer(20170108);
    hoy.mostrarFecha();
    ayer.mostrarFecha();
    return 0;
}
