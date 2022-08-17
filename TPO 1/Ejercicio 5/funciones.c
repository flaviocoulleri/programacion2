#include<stdio.h>
void fibonacci(int entero)
{   int produ,fino,aux;
    produ=1;
    fino=1;
    while(entero!=produ&&produ<entero)
    {   aux=produ;
        produ=produ+fino;
        fino=aux;
    }
    if(entero==produ)
        printf("El entero pertenece a la serie Fibonacci.");
    else
        printf("El entero no pertenece a la serie Fibonacci.");
}
