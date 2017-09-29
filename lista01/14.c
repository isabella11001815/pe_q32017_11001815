#include <stdio.h>

int main()
{
    double soma = 0;
  
    for (int i=1; i<=10; i++){
        printf("Digite um número: ");
        int numero;
        scanf("%d", &numero);
        soma = soma + numero; /* Nesse laco recebemos 10 numeros digitados pelo usuario e os somamos */
    }
    
    printf("Soma: %lf\n", soma);
    double media = soma/10; /* Como nao ha peso e sempre recebemos a mesma quantidade, podemos apenas dividir por 10 */
    printf("Media: %lf\n", media);
  
  return 0;
}
