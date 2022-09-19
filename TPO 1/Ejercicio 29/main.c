#include "funciones.h"
int main()
{
    int orden,*px;
    printf("Ingresar orden: ");
    scanf("%d",&orden);
    px=(int*)malloc(orden*orden*sizeof(int));
    if (px==NULL)
    {
        return(-4);
    }
    llenarmatriz(&px,orden);
    triangularsuperior(&px,orden);
    triangularinferior(&px,orden);
    free(px);
    return 0;
}
