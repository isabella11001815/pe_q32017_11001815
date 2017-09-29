#include <stdio.h>

int main()
{
    int valor; 
    printf("Digite um valor: ");
    scanf("%d", &valor); /* Recebe um dado valor inteiro */
  
    int fatorial=1; /* Inicializa uma variavel inteira que guardará o resultado do fatorial */
  
    for ( int i=1; i<=valor; ++i ) {
        fatorial *= i; /* Multiplica o fatorial por i */
    }
  
  printf("O fatorial do valor inserido é: %d", fatorial);
  
  return 0;
  
}
