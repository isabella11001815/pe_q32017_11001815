#include <stdio.h>

int fibMem[1000];

/*Criamos essa funcao para printar o vetor fibMem 
e entender quais posicoes foram atualizadas*/
void printa_vetor (int v[], int n) 
{
    for(int i=0; i<n; i++){
      printf("%d ", v[i]);
    }
}

/*Essa funcao modifica o vetor fibMem e o atualiza com os termos
* da sequencia de Fibonacci ate o n-esimo termo*/
int conserta (int n) 
{
    if(n == 0) fibMem[0] = 0;
    if(n == 1) fibMem[1] =1;
    if(n >= 2) fibMem[n] = conserta(n-1)+conserta(n-2);
    return fibMem[n];
}

int main(){
     /*Essa variavel vai buscar a posicao n-1 no vetor fibMem*/
    int n;
    /*Esse inteiro devolve 1 se fibMem[n-1] ja contem o n-esimo termo
    *da sequecia de Fibonacci e 0 caso contrario */
    int boolean; 
    boolean = 1;
    /*Este inteiro guarda ate que termo o vetor fibMem foi construido*/
    int c;
    /*Inicializamos no 0 pois nenhuma acao foi feita ainda */
    c = 0; 
    
    do{
        scanf("%d", &n);
        /*Caso ainda nao tenhamos construido o vetor, i.e., o numero
        *digitado e maior que ate aonde construimos, dizemos que o array
         *nao estava atualizado mudando boolean para 0*/
        if (n > c){ 
          boolean = 0;
          /*Atualizamos a maior distancia construida*/
          c = n; 
        } 
        
        if(boolean == 0){
          printf("O array nao estava construido\n");
        } else {
          printf("O array ja estava construido\n");
        }
        /*Retomamos o valor original de boolean */
        boolean = 1; 
        
        /*Como queremos saber qual e o n-esimo termo da sequecia de Fibonacci, 
        *devemos procurar fibMem[n-1]. Essa variavel t busca esse valor */
        int t;
        t = conserta(n-1);
        
        /*Conferimos como fibMem mudou*/
        printa_vetor(fibMem, n+2); 
        printf("\n");
        
    } while(n != 0); 
    /*Optamos pelo do while para forcar o programa a passar por esse 
      *laco pelo menos uma vez. Assim, podemos acompanhar a evolucao do 
      *vetor fibMem*/
                  
    return 0;
}
