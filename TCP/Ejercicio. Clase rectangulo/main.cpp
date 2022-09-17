/*Ejercicio: Construya una clasee llamada rectangulo que tenga las siguientes
atributos: largo y ancho, y los siguientes metodos: perimetro y area.*/
#include <stdio.h>
#include <stdlib.h>
class Rectangulo
{
private: //Atributos
    float largo,ancho;
public: //Metodos
    Rectangulo(float,float);//Constructor
    void perimetro();
    void area();
};

Rectangulo::Rectangulo(float _largo,float _ancho)
{
    largo= _largo;
    ancho= _ancho;
}

void Rectangulo::perimetro()
{
    float _perimetro;
    _perimetro =(2*largo)+(2*ancho);
    printf("El perimetro es: %f\n",_perimetro);
}
void Rectangulo::area()
{
    float _area;
    _area =largo*ancho;
    printf("El area es: %f\n",_area);
}
int main()
{
    Rectangulo r1(11,7);
    r1.perimetro();
    r1.perimetro();

    return 0;
}
