#include <stdio.h>

int main()
{
  
    double temperatura;
    int opcao;
    printf("Digite a temperatura");
    scanf("%lf", &temperatura);
    printf("Digite a opcao");
    scanf("%d", &opcao); /* Recebe do usuario a temperatura e a opcao */
    
    if (opcao == 1) {
        temperatura = ((1.8) * temperatura) + 32; /* Faz a conversao de Celsius para Fahrenheit */
        printf("A Temperatura em Fahrenheit é:  : %.1lf ", temperatura); 
    }
  
    if (opcao == 2){
        temperatura = (temperatura -32)/(1.8); /* Faz a conversao de Fahrenheit para Celsius */
        printf("A temperatura em Celsius é: %.1lf", temperatura);
    }
  
  return 0;
  
}
