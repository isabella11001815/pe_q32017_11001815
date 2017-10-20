#include <stdio.h>
#include <math.h>

/*Converte uma temperatura de fahrenheit para celsius*/
float fahrenheit_para_celsius (float fahrenheit)
{
    float c;
    c = (fahrenheit - 32)*(0.55);
    return c;
}

/*Converte uma temperatura de celsius para fahrenheit*/
float celsius_para_fahrenheit (float celsius)
{
    float f;
    f = (celsius)*(1.8) + 32;
    return f;
}

/*Converte uma temperatura de celsius para kelvin*/
float celsius_para_kelvin (float celsius)
{
    float k;
    k = celsius + 273.15;
    return k;
}

/*Converte uma temperatura de kelvin para celsius */
float kelvin_para_celsius (float kelvin)
{
    float c;
    c = kelvin - 273.15;
    return c;
}

/*Converte uma temperatura de fahrenheit para kelvin */
float fahrenheit_para_kelvin (float fahrenheit)
{
    float k;
    k = (fahrenheit-32)*(5/9) + 273.15;
    return k;
}

/*Converte uma temperatura de kelvin para fahreinheit */
float kelvin_para_fahreinheit (float kelvin)
{
    float f;
    f = (kelvin)*(9/5) - 459.67;
    return f;
}

/*Faz a conversao de decimal para binario de modo iterativo */
int decimal_para_binario (int n)
{
    int mult;
    mult = 1;
    int b;
    b = 0;
    while (n > 0){
        b = (n%2)*mult + b;
        mult = mult*10;
        n = n/2;
    }
    
    return b;
}

/*Faz a conversao de binario para decimal de modo iterativo*/
int binario_para_decimal (int n)
{
    int mult;
    mult = 0;
    int d;
    d = 0;
    while (n > 0){
        d = d + (n%10)*pow(2,mult);
        n = n/10;
        mult = mult +1;
    }
    
    return d;
}

int main()
{
	
    int conversao;
    scanf("%d", &conversao); /*Temos 1 para temperatura e 2 para base numerica */
  
    if (conversao == 1){
    	int entrada;
    	scanf("%d", &entrada); 
    	int saida;
    	scanf("%d", &saida);
    	/* 1 para celsius
        * 2 para fahrenheit
        * 3 para kelvin */
        
    	/*valor a ser convertido*/
    	float valor;
    	scanf("%f", &valor);
    	
    	/*valor convertido*/
    	float temperatura;
    
    	if (entrada == 1 && saida == 2) temperatura = celsius_para_fahrenheit(valor);
    	if (entrada == 1 && saida == 3) temperatura = celsius_para_kelvin(valor);
    	if (entrada == 2 && saida == 1) temperatura = fahrenheit_para_celsius(valor);
    	if (entrada == 2 && saida == 3) temperatura = fahrenheit_para_kelvin(valor);
    	if (entrada == 3 && saida == 1) temperatura = kelvin_para_celsius(valor);
    	if (entrada == 3 && saida == 2) temperatura = kelvin_para_fahreinheit(valor);
    
    	printf("%.2f\n", temperatura);
    } 
  
	if (conversao == 2) {
    	int entrada;
    	scanf("%d", &entrada); 
    	int saida;
    	scanf("%d", &saida);
    	/* 1 para decimal 
        * 2 para binario */
         
        /*valor a ser convertido*/  
        int valor;
        scanf("%d", &valor);
        /*valor convertido*/
    	int numero;
    
    	if (entrada == 1 && saida == 2) numero = decimal_para_binario(valor);
    	if (entrada == 2 && saida == 1) numero = binario_para_decimal(valor);
    
    	printf("%d\n", numero);
    }

  return 0;
}
