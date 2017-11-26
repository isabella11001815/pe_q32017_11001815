#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

/* Calculamos a soma dos bits de x somando o resto da divisão
* de x por 2 e fazendo x = x/2 */
ulint f1 (ulint x)
{
  	int soma;
  	soma = 0;

  	while (x != 0){
    	soma = soma + (x%2);
    	x = x/2;
  	}
    return soma;
}

/* Calculamos a soma dos bits de x somando o resto da divisão
* de x por 2 (que só será 1 se x for ímpar, e se x é ímpar x & 1 é 1
* e fazendo x = x/2 usando x >> 1 */
ulint f2 (ulint x)
{
  	int soma = 0;
  	while (x != 0){
    	soma += x&1;
    	x >>=1;
  	}
  	return soma;
}


int main (void)
{
    clock_t tempo_init, tempo_fim;
  	double tempo_gasto;
  	ulint soma = 0;
  
  	tempo_init = clock();
  	for (int i = 0; i<BIGNUM; i++)
  	{
    	soma += f1(i);
  	}
  	tempo_fim = clock();
  
  	tempo_gasto = (double) (tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  	printf("Tempo gasto na versão  normal %lf\n", tempo_gasto);
  
  	tempo_init = clock();
  	for (int i = 0; i<BIGNUM; i++)
  	{
    	soma += f2(i);
  	}
  	tempo_fim = clock();
  
  	tempo_gasto = (double) (tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  	printf("Tempo gasto na versão  bitwise %lf\n", tempo_gasto);
  
  	return 0;
}
