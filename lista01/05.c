#import <stdio.h>

int main()
{
  int x;
  int y;
  printf("Digite o valor de x: ");
  scanf("%d", &x);
  printf("Digite o valor de y: ");
  scanf("%d", &y); /* Recebe duas variaveis inteiras do usuario */
  
  float divisao;
  divisao = x/(float)y; /* Cria um float que guarda a divisao de x por y */
  
  printf("%.2f", divisao);

  return 0;
  
}
