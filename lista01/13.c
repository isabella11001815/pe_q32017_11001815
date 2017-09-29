
#include <stdio.h>

int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
  
    int soma = (valor*(valor+1))/2; /* Essa e a formula da soma de uma progressao aritmetica com n termos, razao 1 e termo inicial igual a 1 */
    printf ("A soma de 1 até o valor dado é: %d", soma);
    
    return 0;
}
