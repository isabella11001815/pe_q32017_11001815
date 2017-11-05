#include <stdio.h>
#include <stdlib.h>

/* Essa funcao calcula o tamanho da string */
int length (char * s)
{
    int n = 0;
    while(s[n]!='\0') n++;
    
    return n;
}

/* Essa funcao inverte a string, criando um char* c e recebendo o tamanho
* da string original; assim, a primeira posicao de c recebe a ultima de s,
* a segunda posicao de c recebe a penultima de s, e assim por diante */
char* inverte (char* c, int n)
{
    char* invertido;
    invertido = malloc(sizeof(char)*(n-1));
    
    int i;
    for(i=0; i<n-1; i++){
        invertido[i] = c[n-i-2]; 
    }
    
    return invertido;
  }

int main()
{
    char entrada[255];
    fgets (entrada, 255, stdin);
    
    /* Armazenamos nesse inteiro o tamanho da string */
    int n;
    n = length (entrada);
    
    /* Armazenamos nesse char a string trocada */
    char* inverso;
    inverso = inverte(entrada, n);
    
    printf("%s", inverso);
    
    return 0;
}
