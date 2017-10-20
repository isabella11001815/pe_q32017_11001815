#include <stdio.h>

/*calcula o mdc de maneira recursiva usando o algoritmo
*de Euclides visto em aula*/
int maior_divisor (int n, int m) 
{
    if (m == 0) {
      return n;
    } else {
      return maior_divisor(m, n%m);
    }
}

int main()
{ 
  int n;
  scanf("%d", &n);
  int m;
  scanf("%d", &m);
  
  int mdc;
  mdc = maior_divisor(n,m);
  printf("%d\n", mdc);

  return 0;  
}
