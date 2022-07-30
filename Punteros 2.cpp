//Programa para llamado de valores mediante puntero
#include <stdio.h>
  
void geeks() 
{ 
    //Declaracion de arreglo 
    int val[3] = { 1, 2, 3 }; 
      
    //Declaracion de variable del puntero
    int *p; 
      
    //Asignacion de direccion de la variable dpuntero
    p = val ; 
    printf("Los elementos del arreglo son: "); 
    printf("%d %d %d", p[0], p[1], p[2]); 
} 

int main() 
{ 
    geeks(); 
}
