#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y); /* Recebe duas variaveis inteiras */
    
    int produto = 1; /* Inicializa a variavel que guardara o valor de x a y */
    
    for( int i=1; i<=y; ++i){
        produto *=x; /* Multiplica o produto por x novamente */
    }
    
    printf("O valor de x elevado a y é: %d\n", produto);
    
    return 0;
    
}

