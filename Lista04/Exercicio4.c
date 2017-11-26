#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

/* Essa função vai dividindo x por 2 até que x seja zero 
* ou até que o resto da divisão de x por dois seja diferente
* de zero; se o segundo caso acontecer, x não é potência de 2 */
ulint f1 (ulint x)
{
	if (x == 0){
    	return 0;
  	}
  	while (x != 1){
    	if (x%2 != 0){
      		return 0;
    	}
    	x = x/2;
  	}
    return 1;
}

/* Sabemos que se x é potência de 2, x é escrito na forma binária como 1 
* seguido de zeros e x-1 como 0 seguidos de 1's; logo, x&(x-1) retorna
* zero se x é potência de 2. Excluímos o caso x = 0 */
ulint f2 (ulint x)
{
  	return ((x != 0) && ((x & (x-1)) == 0));
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
