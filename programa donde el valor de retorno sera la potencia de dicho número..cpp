//programa donde el valor de retorno sera la potencia de dicho número.
#include <math.h>
#include <stdio.h>
int main()
{
	double base, exponente, elevado;
	
	
	
	 	printf( "\n Ingrese la base de la potencia \n " );
		scanf( "%lf", &base);
	
		printf( "\n Ingrese el exponente de la potencia \n " );
		scanf( "%lf", &exponente);
	
			elevado= pow(base, exponente);
			
				printf(" el resultado es %lf ",elevado); 
	
	
	
	return 0;
	
	
	
	}
	
	
	
	
