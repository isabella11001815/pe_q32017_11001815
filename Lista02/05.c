#include <stdio.h>

/*Calcula o fatorial de n de modo iterativo */
int fatorial (int n)
{
    int p;
    p = 1;
    for (int i=1; i<=n; i++){
      p = p*i;
    }
    return p;
}

/*Calcula o binomio de Newton entre n e k
*chamando a funcao fatorial*/
int binomio (int n, int k)
{
  int b;
  b = (fatorial(n))/(fatorial(k)*fatorial(n-k));
  return b;
}

int main()
{
  int n;
  int k;
  scanf("%d", &n);
  scanf("%d", &k);
  
  int bin;
  /*Calcula o binomio das entradas n e k chamando a funcao*/
  bin = binomio(n,k);
  printf("%d\n", bin);
  
  return 0;
}
