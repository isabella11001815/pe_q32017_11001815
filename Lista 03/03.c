#include <stdio.h>
#include <stdlib.h>

/* Essa e uma funcao que printa um vetor de tamanho n */
void printa_vetor (int* v)
{
    int i;
    for(i=0; i<4; i++){
        printf("%d ", v[i]);
    }
    printf("%d\n", v[i]);
}

/*Essa funcao retorna um vetor em que cada posicao e a soma da posicao
* de dois vetores v1 e v2 de mesmo tamanho */
int* soma_de_vetores (int* v1, int* v2)
{
    int* v;
    v = malloc(sizeof(int)*5);
    int i;
    for(i=0; i<5; i++){
        *(v+i) = *(v1+i) + *(v2+i);
    }
    
    return v;
}

int main()
{
    /* Recebe um vetor v1 de tamanho 5*/
    int* v1; 
    v1 = malloc(sizeof(int)*5);
    int i;
    for (i=0; i<5; i++){
      printf("Digite uma entrada de v1: ");
      scanf("%d", &v1[i]);
    }
    
    /* Recebe um vetor v2 de tamanho 5*/
    int* v2; 
    v2 = malloc(sizeof(int)*5);
    for (i=0; i<5; i++){
      printf("Digite uma entrada de v2: ");
      scanf("%d", &v2[i]);
    }
    
    /*Esse vetor guarda a soma de v1e v2*/
    int* v; 
    v = soma_de_vetores(v1,v2);
    /*Agora basta imprimi-lo*/
    printa_vetor(v);
    
    return 0;
}
