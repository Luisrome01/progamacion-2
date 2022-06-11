/*Serie de Fibonacci
La serie de Fibonacci es una sucesión infinita de números naturales cuyos
dos primeros términos son 0 y 1, y los demás se forman con la suma de los
dos anteriores.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, … */
#include <stdio.h>
#include <stdlib.h>

int serie(int a)
{
  if (a>2)
    return serie(a-1) + serie(a-2);
  else if (a==2)
    return 1;
  else if (a==1)       
    return 1;
  else if (a==0)
    return 0;
}

int main(void)
{
    int num;

    for (num=0; num<=20; num++)
    {
      printf("%d\n", serie(num));
    }
    
  return 0;
}
