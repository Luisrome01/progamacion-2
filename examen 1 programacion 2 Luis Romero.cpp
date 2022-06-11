#include <stdio.h>
#include <math.h>

int n, i, pregunta(int i);
float a, b, c, d;
void c1(float xx, float x, float constante);
void c2(float r);
void c3(float xo, float vo, float t, float a);


int main(){

    do{

        printf("\n cual opcion desea usar\n");
        printf("1. Calculadora raiz de polinomio (grado 2)\n");
        printf("2. Calculo del volumen de una esfera\n");
        printf("3. Calculo del desplazamiento de un movil (MRUV)\n");
        printf("4. Salir\n");
        scanf("%d", &n);
        switch(n){
            case 1:

                printf("\n calculadora de un polinomio de segundo grado \n ");
                printf("\n\nIntroduzca el valor de A\n");
                scanf("%f", &a);
                printf("Introduzca el valor de B\n");
                scanf("%f", &b);
                printf("Introduzca el valor de C\n");
                scanf("%f", &c);
                c1(a, b, c);
                i = pregunta(i);

            break;

            case 2:

                printf("\n calculadora del volumen de una esfera \n ingrese el valor del radio\n");
                scanf("%f", &a);
                c2(a);
                i = pregunta(i);

            break;

            case 3:

                printf("\n calculadora del desplazamiento de un movil \n");
                printf("Introduzca el valor del desplazamiento inicial\n");
                scanf("%f", &a);
                printf("Introdzca el valor de la vi\n");
                scanf("%f", &b);
                printf("Introduzca el tiempo del desplazamiento\n");
                scanf("%f", &c);
                printf("Introduzca la aceleracion del movil\n");
                scanf("%f", &d);
                c3(a,b,c,d);
                i = pregunta(i);
                
            break;

            case 4:
            i=0;
            break;

            default:
            printf("\n vuelva a escoger\n");
            i=1;
            break;

        }
    } while(i==1);
    
    return 0;
}

void c1(float xx, float x, float constante){

    float raiz_i = pow(x,2)-4*xx*constante;
    float x1, x2;
    float denominador=2*xx;

    if (raiz_i<0){
        printf("El resultado de la raiz es complejo\n");

    } else {

        x1 = (-x+raiz_i)/denominador;
        x2 = (-x-raiz_i)/denominador;
        printf("Las raices del polinomio de la forma %fx^2 + %fx + %f = 0 son las siguientes\n", xx, x, constante);
        printf("x1 = %f\nx2 = %f\n", x1, x2);

    }
}
void c2(float r){

    if(r>0){
        float pi=3.14159, r3=pow(r,3), k=(float)4/(float)3;
        float v= k*pi*r3;
        printf("\n el volumen de la esfera de radio %f es de %f\n\n", r, v);
    } else {
        printf("\n EL valor del radio debe ser mayor a 0\n\n");
    }

}

void c3(float xo, float vo, float t, float a){

    float termino2=vo*t, termino3=(a*pow(t,2))/(float)2;
    float x=xo+termino2+termino3;
    printf("\nEl desplazamiento final es de %f\n\n", x);

}

int pregunta(int i){

    printf("Desea reiniciar?\n");
    printf("1. Si\n2. No\n");
    scanf("%d", &i);
    return i;
    
}
