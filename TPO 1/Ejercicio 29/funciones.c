#include<stdio.h>
#include<stdlib.h>
void diagonalprincipalsuma(int*pm,int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
    	sum+=*pm;
    	pm+=(100+1);
	}
	printf("La suma de la diagonal es: %d\n",sum);
}
void diagonalsecundariasuma(int*pm,int n)
{
    int sum=0,i;
    pm+=(n-1);
    for(i=0;i<n;i++)
    {
    	sum+=*pm;
    	pm+=(100-1);
	}
	printf("La suma de la diagonal es: %d",sum);
}
