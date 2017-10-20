#include <stdio.h>

void torre_de_hanoi (int n, char origem, char destino, char intermediario)
{
    if (n == 1){
        /*Aqui basta apenas mover a peca do estado inicial para o estado final */
        printf(" %c -> %c \n", origem, destino); 
    } else {
    	/*Quando temos mais de um disco, podemos levar n-1 discos ate o bastao intermediario.
    	*Fazemos isso chamando a funcao com n-1 discos, sendo que queremos leva-los da origem ate
    	*o intermediario usando o destino como auxiliar. */
    	torre_de_hanoi (n-1, origem, intermediario, destino);
    	/*A partir dai movemos a peca que falta da origem para o destino */
    	printf(" %c -> %c \n", origem, destino);
    	/*E entao basta mover os n-1 discos que estao no intermediario para o destino usando
    	*a origem */
    	torre_de_hanoi (n-1, intermediario, destino, origem);
    }
}

int main()
{
    /*Recebe o numero de discos do usuario*/
    int n;
    scanf("%d", &n);
  
    /*Esolhe qual a torre de origem e o destino dos discos*/
    char origem = 'A';
    char destino = 'C';
    char intermediario = 'B';
  
    torre_de_hanoi (n, origem, destino, intermediario);
}
