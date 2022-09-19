#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include"funciones.c"
void llenarmatriz(int**,int);
void triangularsuperior(int**,int n);
void triangularinferior(int**,int n);
#endif // FUNCIONES_H_INCLUDED
/*
Desarrollar una función para que, dada una matriz cuadrada de reales de orden
N, obtenga la sumatoria de los elementos que están por encima de la diagonal princi -
pal (excluida ésta). Lo mismo para la diagonal secundaria. Lo mismo incluyendo la
diagonal. Lo mismo, con los que están por debajo de la diagonal.
*/
