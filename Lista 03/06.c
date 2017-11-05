#include <stdio.h>
#include <stdlib.h>

/*Essa e uma funcao auxiliar para ordenar o vetor*/
int cpmfunc (const void * a, const void * b)
{
    return (*(int*)a-*(int*)b);
}

/*Essa funcao vai imprimir a mediana do vetor*/
void mediana (int* vetor, int n)
{
    double mediana;
    /*Se o vetor tem tamanho par, devemos tirar a media dos termos centrais*/
    if((n%2)==0){
        int a;
        a = n/2;
        mediana =(double) (*(vetor+a) + *(vetor+a-1))/2;
    }
  
    /*Se o vetor tem tamanho impar, devemos apenas devolver a posicao central*/
    if((n%2)==1){
      int a;
      a = n/2;
      mediana = *(vetor+a);
    }
  
    printf("%.2lf", mediana);
}

int main()
{
    /*Aqui recebemos um vetor de tamanho n*/
    int n;
    scanf("%d", &n);
  
    int* vetor;
    vetor = malloc(sizeof(int)*n);
  
    int i;
    for(i=0; i<n; i++){
        int valor;
        scanf("%d", &valor);
        *(vetor+i) = valor;
    }
  
    /*Ordenamos o vetor*/
    qsort(vetor, n, sizeof(int), cpmfunc);
    /*Printamos a mediana*/
    mediana(vetor, n);
  
    return 0;
}
