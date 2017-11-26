#include <stdio.h>

struct ficha_aluno
{
/* Para cada aluno recebemos um nome (string), um número de matrícula (int)
* e três valores reais correspondentes a cada nota (double) */
    char nome[100];
    int matricula;
    float p1, p2, p3;
};


int main()
{
	/* Estabelecemos um contador */
    int i;
    /* Damos o nome arq ao arquivo que vamos abrir */
	FILE *arq;
	/*Abrimos o arquivo no modo de leitura */
	arq = fopen("lista_alunos.txt", "r");
	/*Em um vetor, guardamos uma struct em cada posição que corresponde às informações de um aluno */
	struct ficha_aluno aluno[50];
	for(i = 0; i < 50; i++)
	{
	/*Recebemos as informações dos alunos lendo o arquivo e guardando na struct */
		fscanf(arq, "%s %d %f %f %f", aluno[i].nome, &aluno[i].matricula, &aluno[i].p1, &aluno[i].p2, &aluno[i].p3);
	}
	/* Fechamos o arquivo */
	fclose(arq);
	
	/* Estabelecemos um vetor de double com tamanho 50 que guardará as médias de cada aluno */
	float media[50];
	/* Preenchemos o vetor recebendo os 3 valores de notas de prova da vetor que guarda as struct de cada aluno */
	for (i=0; i<50; i++)
	{
		float m;
		m = (aluno[i].p1 +aluno[i].p2 +aluno[i].p3)/3;
		media[i] = m;
	}

	/* Damos o nome med a um arquivo */
	FILE *med;
	/*Abrimos esse arquivo no modo escrita */
	med = fopen("media_alunos.txt", "w");
	for(i = 0; i<50; i++)
	{
	/*Printamos nesse arquivo as informações nome do aluno, matricula e média */
		fprintf(med, "%s %04d %.2f\n", aluno[i].nome, aluno[i].matricula, media[i]);
	}
	/*Fechamos o arquivo*/
	fclose(med);
		
	return 0;
}
