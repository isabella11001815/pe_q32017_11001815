#include <stdio.h>
#include <stdlib.h>

/*Essa funcao recebe do usuario as entradas da matriz 
*preenchendo primeiro as linhas */
void preenche_matriz (int** matriz, int linhas)
{
    int i;
    int j;
    for (i=0; i<linhas; i++){
        for (j=0; j<linhas; j++){
            int n;
            scanf("%d", &n);
            *(*(matriz+i)+j) = n;
        }
    }  
}

/*Essa funcao imprime a matriz transposta; a ideia e a mesma
de imprimir a propria matriz, mas aqui imprimimos o elemento
aji ao inves do elemento aij*/
void** transposta (int** matriz, int linhas)
{
    int i;
    int j;
    for (i=0; i<linhas; i++){
        for (j=0; j<(linhas)-1; j++){
            printf("%d ", *(*(matriz+j)+i));
        }
        printf("%d\n", *(*(matriz+j)+i));
    }
}

int main()
{
    /*Vamos criar uma matriz 3x3 usando a aritmetica de ponteiros*/
    int linhas;
    linhas = 3;
  
    int** matriz;
    matriz = malloc(sizeof(int*)*linhas);
  
    int coluna;
    coluna = malloc(sizeof(int)*linhas);
  
    int i;
    for (i=0; i<linhas; i++){
        *(matriz+i) = malloc(sizeof(int)*linhas);
    }
  
    /*Recebemos as entradas da matriz*/
    preenche_matriz(matriz, linhas);
    /*Printamos a transposta*/
    transposta(matriz, linhas);
  
    return 0;
}
