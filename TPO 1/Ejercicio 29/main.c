#include"funciones.h"
int main()
{	int *px,orden;
    printf("Ingresar orden de la matriz: ");
    scanf("%d",&orden);
    px=(int*)malloc(orden*orden*sizeof(int));
    if(px==NULL)
        return -1;
    llenarmatriz(&px,orden);
    triangularsuperior(&px,orden);
    triangularinferior(&px,orden);
    free(px);
	return 0;
}
