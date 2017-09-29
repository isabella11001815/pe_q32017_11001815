#include <stdio.h>

double decrescimo (int faltas, double salario) /* Uma funcao que calcula o valor a ser descontado com base nas faltas e no salario */
{
    double desconto;
    desconto = (salario/20)*faltas;
    return (double) desconto;
}

double acrescimo (int horas, double salario ) /* Uma funcao que calcula o valor a ser acrescentado com base nas horas extras e no salario */
{
    double horasextras;
    if (horas!=0) horasextras = (salario/(8*20)+ 40)*horas;
    else horasextras =0 ;
    return (double) horasextras;
}

int main()
{
  
    printf("Digite na sequencia o cargo, o numero de faltas e a quantidade de horas extras");
    int cargo; 
    scanf("%d", &cargo);
    int faltas; 
    scanf("%d", &faltas);
    int horas; 
    scanf("%d", &horas); /* Recebemos o cargo, as faltas e as horas extras */
    
    double acrescencia;
    double desconto;
    double salario; 
    
    if(cargo == 1){
        salario = 10000;
        printf("Diretor\n");
    } 
  
    if(cargo == 2) {
        salario = 8000;
        printf("Gerente\n");
    }
  
    if(cargo == 3) {
        salario = 5000;
        printf("Engenheiro\n");
    }
  
    if(cargo == 4) {
        salario = 3000;
        printf("Tecnico\n");
    }
    
    if(cargo == 5) {
        salario = 2000;
        printf("Operador\n");
    } /* Recebe as informacoes sobre o salario do cargo informado */

    printf("Numero de faltas: %d\n", faltas);
    printf("Numero de horas extras: %d\n", horas);
    
    desconto = decrescimo(faltas, salario);
    printf("Valor dos descontos: %.2lf\n", desconto); 
    
    acrescencia = acrescimo(horas, salario);
    printf("Valor dos acrescimo: %.2lf\n", acrescencia);
    
    salario = salario + acrescencia - desconto;
    printf("O salário final é: %.2lf\n", salario);
    
    return 0;
}
