#include <stdio.h>

int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor); /* Recebe um valor do usuario */
  
    if(valor < 100){
        for(int i=valor; i<=100; i++){
            if ((i%2)==0) printf("%d ", i);
        }
    } /* Imprime os numeros pares entre n e 100 quando n e menor que 100 */
  
    if(valor>100){
        for(int i=100; i<=valor; i++){
            if ((i%2)==0) printf("%d ", i);
        }
    } /* Imprime os numeros pares entre 100 e n quando n e maior que 100 */
  
    if(valor == 100) printf ("%d", 100);
  
  return 0;
}
