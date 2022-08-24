#include <stdio.h>
#include <stdlib.h>
#define MACRO1(a) ({int cast=a;(a>cast+.5)?(cast+1):cast;})
#define MACRO2(a,b) (a<b)?(a):(b)
#define MACRO3(a) (a==0)?("Buen dia"):("Buenas noches")
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MACRO5(a,b) ({int aux;aux=a;a=b;b=aux;})
#define MACRO6(c,d)({\
    printf("La suma de los dos numeros es: %d\n",c+d);\
    printf("La multiplicacion de los dos numeros es: %d\n",c*d);\
    printf("La resta de los dos numeros es: %d\n",c-d);\
    printf("La division de los dos numeros es: %d",c/d);\
    })

int main()
{
    int a=8,b=6;
    float c=5.6;
    printf("%d\n",MACRO1(c));
    int saludo;
    printf("%d\n",MACRO2(a,b));
    printf("Hola. %s\n",MACRO3(0));
    printf("El max es: %d\n",MAX(a,b));
    MACRO5(a,b);
    printf("%d %d",a,b);
    MACRO6(5,5);
    return 0;
}
//(MACRO1)|Escriba una macro que redondee un número real al entero más cercano.
//(MACRO2)|Escriba una función que devuelva el menor entre dos enteros que recibe por argumento.
//(MACRO3)|Escriba una macro que cumpla con el mismo cometido.
//(MACRO4)|Investigue y utilice las macros max y min de la biblioteca stdlib.h.
//(MACRO5)|Escriba una función que intercambie dos enteros que recibe por puntero.
//(MACRO6)|Escriba una macro multilínea que cumpla con el mismo cometido.
