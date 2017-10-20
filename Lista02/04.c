#include <stdio.h>

/*Funcao que modulariza a soma de dois numeros*/
float soma (float x, float y) 
{
	float s;
	s = x+y;
	return s;
}

/*Funcao que modulariza a subtracao de dois numeros*/
float subtracao (float x, float y) 
{
	float s;
	s = x-y;
	return s;
}

/*Funcao que modulariza a multiplicacao de dois numeros*/
float multiplicacao (float x, float y) 
{
	float m;
	m = x*y;
	return m;
} 

/*Funcao que modulariza a divisao de dois numeros*/
float divisao (float x, float y) 
{
	float d;
	if (y!= 0) {
		d = x/y;
	} else {
		printf("Nao existe divisao por zero");
	}
}

/*Funcao que modulariza a potenciacao de dois numeros*/
float potenciacao (float x, float y) 
{
	float p;
	p=1;
	for (int i=1; i<=y; i++){
		p = p*x;
	}
	return p;
}

int main(){
  int opcao;
	scanf("%d", &opcao);
	float x;
	float y;
	scanf("%f", &x);
	scanf("%f", &y);
	float resultado;
	
	/*Escolhe a operacao a ser feita de acordo com a opcao do usuario */

	if (opcao == 1) resultado = soma(x,y);
	if (opcao == 2) resultado = subtracao(x,y);
	if (opcao == 3) resultado = multiplicacao(x,y);
	if (opcao == 4) resultado = divisao(x,y);
	if (opcao == 5) resultado = potenciacao(x,y);
	
	printf("%.2f\n", resultado); 

	return 0;
}
