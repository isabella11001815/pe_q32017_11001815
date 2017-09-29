#import <stdio.h>

int main()
{
  
    int x;
    int y;
    printf("Insira o valor de x: ");
    scanf("%d", &x);
    printf("Insira o valor de y: ");
    scanf("%d", &y); /* Recebe duas variáveis inteiras */
  
    int diferenca;
    diferenca = x-y; /*Cria uma variável que computa a diferenca entre x e y */
  
    printf("A diferenca entre x e y é: %d\n", diferenca);
  
  return 0;
  
}
