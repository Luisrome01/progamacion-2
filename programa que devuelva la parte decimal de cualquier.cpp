#include <stdio.h> 
#include <math.h>  

int main(void)
 {
  int parteEntera; 
  float parteDecimal, numero;
  
  printf("ingrese un numero no entero (separe los decimales con un punto)\n");
 	scanf("%f", &  numero);
 	
  parteEntera = numero/1;
	parteDecimal = numero - parteEntera;
  
  printf("Parte entera: %d. Parte decimal: %f\n", parteEntera, parteDecimal);
  
  return 0;
 
}
