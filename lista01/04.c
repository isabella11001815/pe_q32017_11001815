#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);  /* Recebe duas variaveis inteiras */
  
    int produto;
    produto = x*y; /* Cria uma variavel inteira produto que recebe a multiplicacao de x e y */
    
    printf("O produto de x por y é: %d", produto);
    
    return 0;
    
}
