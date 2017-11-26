#include <stdio.h>

struct cronometro
{
/* O cronômetro recebe 3 valores inteiros: minutos, segundos e decimos */
    int minutos;
	int segundos;
	int decimos;
};

void diferenca_tempo (struct cronometro t1, struct cronometro t2)
{
/*Aqui convertemos a struct tempo1 para um real, passando o valor do
* cronometro para segundos */
    double tempo1;
    tempo1 = t1.minutos*60 + t1.segundos + t1.decimos*0.01;
/*Aqui convertemos a struct tempo1 para um real, passando o valor do
* cronometro para segundos */
    double tempo2;
    tempo2 = t2.minutos*60 + t2.segundos + t2.decimos*0.01;
  
/*Aqui calculamos a diferença entre os dois tempos em valores reais 
* de modo que ela sempre seja positiva */
    double diferenca;
    	if (tempo1>tempo2){
    		diferenca = tempo1-tempo2;
  		} else {
    		diferenca = tempo2-tempo1;
  		}
  
/*Aqui convertemos o valor real da diferença para um valor que poderia ser apresentado 
* no cronômetro, isto é, dividimos a diferença por 60 para obter o máximo de minutos; 
* depois os segundos são a parte inteira da diferença menos 60*min; e os décimos são
* os dois valores da diferença após a vírgula */
  	int min = (int)diferenca/60;
  	int segundos = (int)diferenca - 60*min;
  	int decimos = ((int)(diferenca*100))%(100);
  
/* Se o tempo 1 for maior que o tempo 2, não nos preocupamos com sinal */
    if (tempo1 > tempo2) {
    	printf("%dm %ds %d\n", min, segundos, decimos);
  	} else {
/* Aqui consertamos uma eventual diferença negativa printando '-' */
    printf("-%dm %ds %d\n", min, segundos, decimos);
    }
  
}

int main()
{
/* Recebemos dois valores dos cronômetros */
    struct cronometro tempo1; 
    scanf("%d %d %d", &tempo1.minutos, &tempo1.segundos, &tempo1.decimos);
    struct cronometro tempo2;
    scanf("%d %d %d", &tempo2.minutos, &tempo2.segundos, &tempo2.decimos);
    
/*Calculamos a diferença entre eles*/
    diferenca_tempo(tempo1, tempo2);
  
    return 0;
}
