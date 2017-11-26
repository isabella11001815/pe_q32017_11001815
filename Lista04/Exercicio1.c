#include <stdio.h>
#include <math.h>

struct ponto 
{
/* Quando recebemos um ponto em R3, recebemos 3 valores reais */
	float x;
	float y;
	float z;
};

float distancia (struct ponto p1, struct ponto p2)
{
/* Calculamos a distância entre dois pontos pela fórmula dada 
* e usando a struct */
	float distancia;
	distancia =sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2) + pow((p1.z-p2.z),2));
  	return distancia;
}



int main()
{
	/*Recebe dois pontos do usuário e guarda em duas struct */
  	struct ponto p1, p2;
  	scanf("%f %f %f", &p1.x, &p1.y, &p1.z);
  	scanf("%f %f %f", &p2.x, &p2.y, &p2.z);
  	float d;
  	/*Calcula a distância */
  	d = distancia(p1,p2);
  
  	printf("%.2f\n", d);
  
  	return 0;
}
