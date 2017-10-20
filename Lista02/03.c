#include <stdio.h>
#include <math.h>

int main()
{	/*Estabelecemos as condicoes iniciais*/
	double a;
	a = 1;
	double b;
	b = pow(2,-.5);
	double t;
	t = .25;
	double p;
	p = 1;
	double a1;
	
	for (int i=0; i<10; i++) {
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*(a-a1)*(a-a1);
		p = 2*p;
		a = a1;
	}
	
	/*Como precisamos recuperar 3 valores, a iteracao foi implementada no proprio main*/

	
	double pi = ((a+b)*(a+b))/(4*t);
	
	printf("%.20lf\n", pi);

	return 0;
}

/*O valor retornado é 3.14159265358979400418. Porém, esses não são exatamente os primeiros vinte dígitos do Pi, neste caso, a precisão
*é de 15 dígitos. A memória do computador é o principal problema da precisão do resultado apresentado */
