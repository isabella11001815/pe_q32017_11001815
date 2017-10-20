#include <stdio.h>

/*Calcula o quanto sera descontado dado as faltas
*e o salario, ja que cada falta corresponde a um desconto
*do salario diario*/
double descontos (int salario, int faltas)
{
    double desconto;
    desconto = (salario/20.0)*faltas;
    return desconto;
}

/*Calcula quanto sera acrescido, dado que cada hora extra 
*corresponde a um acrescimo de quanto e o salario por hora
*mais 40 reais por ter feito a hora extra*/
double acrescimos (int salario, int horas)
{
    double acrescimo;
    double proximo;
    
    if(horas > 0 && horas <= 40){
        acrescimo = (salario/(160.0)+40)*horas;
    }
    
    if (horas > 40){
        acrescimo = (salario/(160.0)+40)*40;
        proximo = (salario/(160.0)+40)*(horas-40);
        printf("Sera acrescido no proximo mes: %lf\n", proximo);
    }
    
    if (horas == 0) acrescimo = 0;
    
    return acrescimo;
}

/*calcula o salario final com base no que recebe mais o que fez de extra menos
*o que foi descontado*/
double salario_final (double salario, double Acrescimos, double Descontos)
{
    double Salario;
    Salario = salario + Acrescimos - Descontos;
    return Salario;
}

int main()
{
    /*recebe o cargo, faltas e horas extras*/
    int cargo;
    scanf("%d", &cargo);
    int faltas;
    scanf("%d", &faltas);
    int horas;
    scanf("%d", &horas);
    
    int salario;
    
    if (cargo == 1) salario = 10000;
    if (cargo == 2) salario = 8000;
    if (cargo == 3) salario = 5000;
    if (cargo == 4) salario = 3000;
    if (cargo == 5) salario = 2000;
    
    /*calcula o salario final calculando o quanto acrescentou, o quanto descontou
    * e assim chamando salario final com base no que buscou*/
    double Acrescimos;
    Acrescimos = acrescimos(salario, horas);
    double Descontos;
    Descontos = descontos(salario, faltas);
    double Salario;
    Salario = salario_final(salario, Acrescimos, Descontos);
    
    printf("%.2lf\n", Salario);
  
    return 0;
}
