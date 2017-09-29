#include <stdio.h>

int sq (int x, int y)
{
    int soma = 0;
    for(int i=x; i<=y; i++){
        soma = soma + (i*i);
    }
    return soma;
}

int qs (int x, int y)
{
    int soma = 0;
    for(int i=x; i<=y; i++){
        soma = soma + (i);
    }
    soma = soma*soma;
    return soma;
}

int main()
{
    int x;
    int y;
    printf("Digite o intervalo: ");
    scanf("%d", &x);
    scanf("%d", &y);
    int somaquadrados;
    somaquadrados = sq(x,y);
    printf("%d\n", somaquadrados);
    int quadradosoma;
    quadradosoma = qs(x,y);
    printf("%d\n", quadradosoma);
    int diferenca;
    diferenca = quadradosoma - somaquadrados;
    printf("%d", diferenca);
    
    return 0;
}
