#include <stdio.h>

int main ()
{

    int valor;
    printf("Entre com um valor \n"); 
    scanf("%d" , &valor); /* Criando uma variável para receber um inteiro do usuario */
 
    if ( (valor%2)==0 ) {
        printf("O numero e par\n"); /* O resto da divisao do numero por 2 e zero */
    } else {
        printf("O numero e impar\n"); /* Caso contrario, o numero e impar */
    }

 return 0;
 
}
