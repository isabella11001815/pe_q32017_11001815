#include <stdio.h>

int main()
{
    double temperatura;
    int opcao;
    printf("Digite a temperatura a ser convertida: ");
    scanf("%lf", &temperatura);
    printf("Digite a opcao: ");
    scanf("%d", &opcao); /* Recebe a temperatura e a opcao do usuario */
  
    if (opcao == 1){
        temperatura = temperatura + 273.15;
      printf("A temperatura em Kelvin é: %.2lf", temperatura); /* Faz a conversao de Celsius para Kelvin */
    }
  
    if (opcao == 2){
        temperatura = temperatura - 273.15;
        printf("A temperatura em Celsius é: %.2lf", temperatura); /* Faz a conversao de Kelvin para Celsius */
  }
  
  return 0;
  
}
