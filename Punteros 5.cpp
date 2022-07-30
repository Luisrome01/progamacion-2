//Programa para elevar numeros al cuadrado
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cuadrado(int a);


int main(){
	float *p;
	int n, i, res;
	
	printf("Ingrese la cantidad de numeros a elevar al cuadrado: ");
	scanf("%d", &n);
	
	p= (float *) malloc(n*sizeof(float));
	
	for(i=0;i<n;i++){
		printf("Numero #%d: ", i+1);
		scanf("%f", &p[i]);
		res = pow(p[i],2);
		printf("Cuadrado: %d\n", res);
	}
	
	free(p);

	return 0;
}


