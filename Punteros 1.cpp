//Un puntero a puntero es un puntero que contiene la dirección de memoria de otro puntero
#include<stdio.h>
#include<stdlib.h>
int main ()
{
 int a = 5;
 int *p; // Puntero a entero
 int **q; // Puntero a puntero
 p = &a;
 q = &p;
 printf("La dirreccion de los punteros es: %p ",p,q);
}
