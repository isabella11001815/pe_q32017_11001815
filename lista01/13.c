#include<stdio.h>

int main()
{
    int valor;
    int opcao;
    int binario = 0 , decimal = 0;
    printf("Digite o valor a ser convertido: ");
    scanf("%d", &valor);
    printf("Digite a opcao: ");
    scanf("%d", &opcao); /* Recebe do usuario um valor a ser convertido e uma opcao */
  
    int mult1 = 1;
    if (opcao == 1) {
        while (valor != 0){
            binario = binario + (valor%2)*mult1; /* A estrategia de usar mult e poder imprimir os restos na sequencia contraria em que aparecem */
            valor = valor / 2;
            mult1 = mult1 * 10;
        }
        printf("%d", binario);
    }
  
    int mult2 = 1;
    if (opcao == 2){
        while (valor != 0){
            decimal = decimal + (valor%10)*mult2; /* mult2 e usada para guardar qual a potencia de dois que deve ser multiplicada */
            valor = valor / 10;
            mult2 = mult2*2;
        }
        printf("%d", decimal);
    }
  
  return 0;
}
