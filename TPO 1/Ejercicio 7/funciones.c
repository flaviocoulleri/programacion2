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
void funcion(int numero)
{

}
