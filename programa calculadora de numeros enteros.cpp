//programa que mediante el uso de funciones, realice las opresiones aritméticas básicas, suma resta, multiplicación y división de números enteros
#include <conio.h>
#include <stdio.h>

int main()
{
    char opcion;
    int num1, num2;

    do
    {
        printf( "\n Escoja una de las siguientes opciones \n " );
        printf( "\n  1. Sumar " );
        printf( "\n   2. Restar");
        printf( "\n   3. Multiplicar");
        printf( "\n   4. Dividir" );
        printf( "\n   5. Salir.\n" );

        do
        {
            printf( "\n   Introduzca de las opciones (1-5): ");
        
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '5' );


        switch ( opcion )
        {
                      /* Sumar */
            case '1': printf( "\n   Introduzca primer sumando: " );
                      scanf( "%d", &num1);
                      printf( "\n   Introduzca segundo sumando: " );
                      scanf( "%d", &num2);
                      printf( "\n   %d + %d = %d\n", num1, num2, num1 + num2 );
                      break;

                      /* Restar */
            case '2': printf( "\n   Introduzca minuendo: " );
                      scanf( "%d", &num1);
                      printf( "\n   Introduzca sustraendo: " );
                      scanf( "%d", &num2);
                      printf( "\n   %d - %d = %d\n", num1, num2, num1 - num2 );
                      break;

                      /*  Multiplicar */
            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%d", &num1);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%d", &num2);
                      printf( "\n   %d * %d = %d\n", num1, num2, num1 * num2 );
                      break;

                      /*  Dividir */
            case '4': printf( "\n   Introduzca dividendo: " );
                      scanf( "%d", &num1);
                      printf( "\n   Introduzca divisor: " );
                      scanf( "%d", &num2);
                      if ( num2 != 0 )
                          printf( "\n   %d div %d = %d ( Resto = %d )\n", num1, num2, num1 / num2, num1 % num2 );
                      else
                          printf( "\n No se puede dividir entre cero.\n" );
        }

    } while ( opcion != '5' );

    return 0;
}
