#include"funciones.h"
int main()
{	int matrix[100][100]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	int *pm=&matrix[0][0],n;
    printf("Ingresar n orden de matriz: ");
    scanf("%d",&n);
    diagonalprincipalsuma(pm,n);
    diagonalsecundariasuma(pm,n);
	return 0;
}
