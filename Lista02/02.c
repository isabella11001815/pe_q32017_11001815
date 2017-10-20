#include <stdio.h>
/*Uma funcao que calcula o volume do cubo
*de lados a,b, e c */
double volume (double a, double b, double c) 
{
	double v;
	v = a*b*c;
	return v;
}

int main()
{
	double a;
	double b;
	double c;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	double vol;
	/*Apenas aplica os valores recebidos na funcao*/
	vol = volume(a,b,c); 
	
	printf("%.2lf\n",vol);
	
	return 0;
}
