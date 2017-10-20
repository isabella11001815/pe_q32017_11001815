#include <stdio.h>

/*Essa funcao inverte um valor de modo recursivo. Aqui,
*invertido e o inteiro que vai guardar n trocado. Para isso,
*se n!=0, chamamos a funcao palindromo atualizando invertido como
*multiplicando ele por 10 e no 0 da unidade que sobra somamos
*o modulo de n por 10*/
int palindromo (int n, int invertido)
{
    if (n==0) {
      return invertido;
    } else {
      return palindromo(n/10, invertido*10 +(n%10) );
    }
}

int main()
{
	int n;
    scanf("%d", &n);
    int inverso;
    inverso = palindromo(n,0);
  
    /*Como palindromo nos retorna n trocado, basta conferir
    *se a saida dessa funcao e o proprio numero*/
    if (inverso == n) printf("sim");
    else printf("nao");
  
  return 0;
}
