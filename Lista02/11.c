#include <stdio.h>

/*Faz a recursao guardando em b o valor em binario em
*o atualizando fazendo (n%2)*mult + a funcao quando dividimos
*n por 2 e multiplicamos mult por 10 (essa multiplicacao e para garantir
*que garante que estamos escrevendo o binario do modo certo, caso contrario
*somariamos 0s e 1s na mesma unidade)*/
int decimal_para_binario (int n, int mult)
{
    int b;
    if (n == 0) {
      b = 0;
    } else {
      b = (n%2)*mult + decimal_para_binario(n/2, mult*10);
    }
    return b;
}

/*Fazemos a recursao guardando o valor convertido em d e a 
*multiplicacao por 2 em d = (n%10) + 2*(binario_para_decimal(n/10))
*garante que as potencias certas de 2 estao sendo somadas*/
int binario_para_decimal(int n)
{
    int d;
    if (n == 0 || n == 1){
        d = n;
    } else {
        d = (n%10) + 2*(binario_para_decimal(n/10));
  }
  
  return d;
}

int main()
{
    int n;
    scanf("%d", &n);
    int opcao;
    scanf("%d", &opcao);

  
    int conversao;
    if (opcao == 1) conversao = decimal_para_binario(n,1);
    if (opcao == 2) conversao = binario_para_decimal(n);
    printf("%d", conversao);
 
    return 0; 
}
