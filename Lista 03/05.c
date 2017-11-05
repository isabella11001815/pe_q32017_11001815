#include <stdio.h>
#include <stdlib.h>

/*Essa funcao nos devolve um vetor de tamanho n em que cada entrada i
* desse vetor e o numero de repeticoes de v[i] em v*/
int* repeticoes (int* vetor, int n)
{
    int i;
    int j;
  
    int* repeticoes;
    repeticoes = malloc(sizeof(int)*n);
  
    for(i=0; i<n; i++){
    
        int cont;
        cont = 0;
    
        for (j=0; j<n; j++){
            if (*(vetor+i)==*(vetor+j)) cont++;
        }
    
      *(repeticoes+i)=cont;
    }
  
    return repeticoes;
}

/*Essa funcao printa os numeros repetidos seguidos da quantidade
* das suas repeticoes */
void printa_repetidos (int* vetor, int* vetor_repeticoes, int n)
{
    int i;
    for(i=0; i<n; i++){
        if(*(vetor_repeticoes+i)>1){
        /*Assim que encontramos um valor que repete, printamos v[i]
        * seguido pelo numero de repeticoes */
            printf("%d-%d ", *(vetor+i), *(vetor_repeticoes+i));
            int j;
            for (j=0; j<n; j++){ 
            /*Como v[i] que repetiu ja foi printado, nao devemos printa-lo
            *novamente; assim passamos para 0 o valor das repeticoes desse valor*/
                if(*(vetor+i) == *(vetor+j)) *(vetor_repeticoes+j)=0;
            }
        } 
    }
}

int main()
{
    /*Recebemos um vetor de tamanho n*/
    int n;
    scanf("%d", &n);
  
    int* vetor;
    vetor = malloc(sizeof(int)*n);
  
    int i;
    for(i=0; i<n; i++){
        int n;
        scanf("%d", &n);
        *(vetor+i) = n;
    }
  
    /*Criamos um vetor que vai armazenar as repeticoes de v[i] na 
    *posicao i*/
    int* vetor_repeticoes;
    vetor_repeticoes = malloc(sizeof(int)*n);
    vetor_repeticoes = repeticoes(vetor, n);

    /*Agora vamos printar as repeticoes*/
    printa_repetidos(vetor, vetor_repeticoes, n);

  
    return 0;
}
