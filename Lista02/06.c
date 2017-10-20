#include <stdio.h>
#include <math.h>

/*Funcao que modulariza o calculo do delta*/
double delta (double a, double b, double c)
{
    double d;
    d = pow(b,2) - 4*a*c;
}

/*Funcao que calcula e printa as raizes considerando 
*se o delta e positivo, nulo ou negativo*/
void raizes (double Delta, double a, double b)
{
    double r;
    double x;
    double x1;
    double x2;
    double x11;
    double x12;
    double x21;
    double x22;
    
    /*No caso delta maior que zero, calculamos sua raiz 
    *sem maiores preocupacoes*/
    if (Delta > 0){
        r = sqrt(Delta);
        x1 = ((-1)*b)/(2*a) + r/(2*a);
        x2 = ((-1)*b)/(2*a) - r/(2*a);
        printf("%.3lf e %.3lf", x1,x2);
    } 
    /*No caso delta igual a zero, tiramos o termo 
    *sert(delta)/2a da raiz*/
    if (Delta == 0){
        r = sqrt(Delta);
        x = ((-1)*b)/(2*a);
        printf("%lf", x);
    }
    
    /*No caso delta menor que zero, tiramos a raiz de -delta 
    *e tomamos o cuidado de printar o termo i na parte imaginaria */
    if (Delta <=0) {
    r = sqrt((-1)*Delta);
    x11 = ((-1)*b)/(2*a);
    x12 = r/(2*a);
    x21 = ((-1)*b)/(2*a);
    x22 = -r/(2*a);
    printf("%.3lf + i%.3lf e %.3lf + i%.3lf", x11,x12, x21, x22);
    }
    
}


int main()
{
	/*Recebemos os parametros dos usuarios*/
    double a;
    double b;
    double c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

	/*Calculamos o delta*/
    double del;
    del = delta(a,b,c);
  
  	/*chamamos as raizes com o delta calculado*/
    raizes(del, a, b);
  
    return 0;
}
