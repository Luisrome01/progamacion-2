// //ANSI: FUNCION div, retorna la estructura de tipo div_t, conteniendo el cociente y el resto.

#include <stdlib.h>
#include <stdio.h>
int main()
{
div_t d;
int num, denom;
puts( "Escriba el numerador y el denominador" );
scanf( "%d %d", &num, &denom );
d = div( num, denom );
printf( "ldiv( %d, %d ) : cociente = %d, resto = %d\n", num, denom, d.quot, d.rem
);
return 0;
}
