#include <stdio.h>

int par_impar (int n)
{
	/*Confere a paridade com base no resto da divisao por 2*/
    if ((n%2) == 0) { 
        return 0;
    } else {
    	return 1;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	int b;
	/*Apenas aplica a funcao construida no valor dado*/
	b = par_impar(n); 
	printf("%d\n",b);
	
	return 0;
}
