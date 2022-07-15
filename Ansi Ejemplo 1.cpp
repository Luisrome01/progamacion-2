//ANSI: FUNCION abs, retorna el valor absoluto de algun numero

#include <stdlib.h>
#include <stdio.h>
int main()
{
int num;
puts( "Escriba un numero entero:" );
scanf( "%d", &num );
printf( "abs( %d ) = %d\n", num, abs(num) );
return 0;
}
