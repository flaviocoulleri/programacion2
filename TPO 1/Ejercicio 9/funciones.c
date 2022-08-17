#include<stdio.h>
int leemayor(int mayor)
{
	int numero;
	scanf("%d",&numero);
	while(numero<mayor)
	{
	printf("ERROR. Ingresar nuevamente: ");
	scanf("%d",&numero);
	}
	return numero;
}
void cociente(int numero1,int numero2)
{
    printf("El cociente es: %d\nEl resto es: %d",numero1/numero2,numero1%numero2);
}
