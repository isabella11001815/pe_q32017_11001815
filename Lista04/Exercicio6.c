#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

/*Verificamos se x é maior que y e retornamos 1
* caso seja verdade */
ulint f1 (ulint x, ulint y)
{
  	if (x > y){
    	return 1;
  	} else {
    	return 0;
  	}
}

/*Verificamos se x é maior que y e retornamos 1
* caso seja verdade agora usando bit tricks */
ulint f2 (ulint x, ulint y)
{
  	return (((y + (~x + 1)) >> 31) & 1);
}


int main (void)
{
  	clock_t tempo_init, tempo_fim;
  	double tempo_gasto;
  	ulint soma = 0;
  
  	tempo_init = clock();
  	for (int i = 0; i<BIGNUM; i++)
  	{
    	for (int j = 0; j<BIGNUM; j++)
    	{
        	soma += f1(i,j); 
    	}
  	}
  	tempo_fim = clock();
  
  	tempo_gasto = (double) (tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  	printf("Tempo gasto na versão  normal %lf\n", tempo_gasto);
  
  	tempo_init = clock();
  	for (int i = 0; i<BIGNUM; i++)
  	{
    	for (int j = 0; j<BIGNUM; j++)
    	{
        	soma += f2(i,j); 
    	}
  	}
  	tempo_fim = clock();
  
  	tempo_gasto = (double) (tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  	printf("Tempo gasto na versão  bitwise %lf\n", tempo_gasto);
  
  	return 0;
}
