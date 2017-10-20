#include <stdio.h>

/*calcula a potencia de modo recursivo usando
*o fato que x^y = x*x^y-1*/
int potencia (int x, int y)
{
  if (y == 1){
    return x;
  } else {
  return (x*potencia(x,y-1));
  }
}

int main()
{
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    int p;
    p = potencia(x,y);
    printf("%d\n", p);

    return 0;  
}
