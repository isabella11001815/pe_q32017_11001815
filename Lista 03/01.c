#include <stdio.h>

/*Essa funcao conta o numero de vogais usando um contador chamado vogais
* e o atualizando se encontramos os char a, e, i o ou u
* realizando essa operacao ate que c[i]!='\0', isto e, 
* ate que existam char na string */

int vogais (char* c)
{
    int vogais;
    vogais = 0;
    int i;
    for(i=0; c[i]!='\0'; i++){
        if (c[i] == 'a') vogais ++;
        if (c[i] == 'e') vogais ++;
        if (c[i] == 'i') vogais ++;
        if (c[i] == 'o') vogais ++;
        if (c[i] == 'u') vogais ++;
    }
    return vogais;
}


int main()
{
    /*Usamos essa forma para receber uma string*/
    char entrada[255];
    fgets (entrada, 255, stdin);
  
    int Vogais;
    Vogais = vogais(entrada);
    printf("%d", Vogais);
  
    return 0;
}
