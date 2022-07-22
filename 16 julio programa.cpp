//Estructuras Anidadas
#include<stdio.h>
#include<stdlib.h>

struct infoDireccion{

    char direccion  [30];
    char ciudad      [20];
    char municipio [20];
    char civil 	[20];
    char tipovivienda 	[20];
    char agua 	[20];
    char luz 	[20];
    char tlf 	[20];
};

struct empleado{

    char      nombre[20];
    struct infoDireccion  dirEmpleado;
    double salario, numhijos;

}empleados[2];


int main(){

    int i;

    for(i = 0; i <2; i++){

        fflush(stdin);
        printf("%i Digita tu nombre: ", i +1);
        gets(empleados[i].nombre);
		fflush(stdin);

        printf("%i Digita tu Direccion: ", i +1);
        gets(empleados[i].dirEmpleado.direccion);
		fflush(stdin);

        printf("%i Digita tu Ciudad: ", i +1);
        gets(empleados[i].dirEmpleado.ciudad);
		fflush(stdin);
		
        printf("%i Digita tu Municipio: ", i +1);
        gets(empleados[i].dirEmpleado.municipio);
        fflush(stdin);

        printf("%i Digita tu salario: ", i +1);
        scanf("%lf", &empleados[i].salario);
		fflush(stdin);

		 printf("%i Digita tu estado civil: ", i +1);
        gets(empleados[i].dirEmpleado.civil);
        fflush(stdin);
        
         printf("%i Digita tu tipo de vivienda: ", i +1);
        gets(empleados[i].dirEmpleado.tipovivienda);
        fflush(stdin);
        
		 printf("%i Digita tu num de hijos: ", i +1);
        scanf("%lf", &empleados[i].numhijos);
        fflush(stdin);
        printf("\n");
        
        printf("%i Digita si posee agua regularmente o compañia de agua: ", i +1);
        gets(empleados[i].dirEmpleado.agua);
        fflush(stdin);
        
        printf("%i Digita si posee telefono o compañia de telefonia: ", i +1);
        gets(empleados[i].dirEmpleado.tlf);
        fflush(stdin);
        
        printf("%i Digita si posee luz o compañia de elctricidad: ", i +1);
        gets(empleados[i].dirEmpleado.luz);
        fflush(stdin);

    }
       for(i = 0; i <2; i++){

            printf("\n\nDatos del empleado num: %d ", i +1);
            printf("\nNombre  : %s", empleados[i].nombre);
            printf("\nDireccion: %s", empleados[i].dirEmpleado.direccion);
            printf("\nCiudad    : %s", empleados[i].dirEmpleado.ciudad);
            printf("\nMunicipio: %s", empleados[i].dirEmpleado.municipio);
            printf("\nSalario    : %.2lf \n", empleados[i].salario);
            printf("\n Estado civil: %s ", empleados[i].dirEmpleado.civil);
            printf("\n Tipo de vivienda: %s ", empleados[i].dirEmpleado.tipovivienda);
            printf("\n");
            printf("\n Num de hijos    : %.2lf \n", empleados[i].numhijos);
            printf("\n Agua: %s ", empleados[i].dirEmpleado.agua);
            printf("\n Telefono: %s ", empleados[i].dirEmpleado.tlf);
            printf("\n Luz: %s ", empleados[i].dirEmpleado.luz);
         }
    printf("\n");
    system("pause");
    return 0;
}
