#include"funciones.h"
int main()
{
    int orden,**px;
    printf("Ingresar orden de matriz: ");
    scanf("%d",&orden);
    px=malloc(orden*orden*sizeof(int));
    llenarmatriz(px);
    printf("%d\n",*px);
    **px++;
    printf("%d",*px);
//    int matriz[orden][orden];
//    px=&matriz[0][0];

    return 0;
}
