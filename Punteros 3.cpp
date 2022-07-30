		// Asignaciones de punteros 

	#include<stdio.h>
	#include<stdlib.h>
	main() // Asignamos direcciones 
	{
		int a;
		int *p1,*p2;
		p1=&a;
		p2=p1;
		printf("direccion del p1 %p1 , direccion del p2 %p2",p1,p2);
	}
