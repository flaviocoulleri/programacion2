#include "funciones.h"
int main()
{
    int *px,orden;
    printf("Ingresar orden de la matriz: ");
    scanf("%d",&orden);
    px=(int*)malloc(orden*orden*sizeof(int));
    llenarmatriz(&px,orden);
    principal(&px,orden);
    secundaria(&px,orden);
    free(px);
    return 0;
}
