#include <stdio.h>

/*Podemos entender o binomio de Newton como quantos subconjuntos de tamanho k
*existe em um conjunto de tamanho n. Assim, se n=k=1, ha apenas o proprio subconjunto
*, i.e., o binomio retorna 1; se k=0, ha apenas o subconjunto vazio. Logo, temos esses
*dois casos como condicoes iniciais e tambem sabemos que (n k) = (n-1 k-1) + (n-1 k)*/
int binomio (int n, int k)
{
    if (n==k) return 1;
    if (k==0) return 1;
    else {
    return binomio(n-1,k-1) + binomio(n-1, k);
    } 
}

int main()
{
  int n;
  scanf("%d", &n);
  int k;
  scanf("%d", &k);
  
  int bin;
  bin  = binomio(n,k);
  printf("%d\n", bin);
  
  return 0;
}
