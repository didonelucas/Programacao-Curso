/*Implemente uma função em C chamada calcula_media_alunos que recebe como parâmetros um vetor
de structs Aluno e o número de alunos. A struct Aluno deve ter os seguintes campos: nome, nota1, nota2
e media. A função deve calcular a média das notas de cada aluno e armazenar o resultado no campo
media da struct correspondente. Além disso, a função deve retornar a média geral dos alunos.*/

#include <stdio.h>
#include <stdlib.h>

struct aluno {
	char nome[50] ; 
	float n1, n2, media;
};

float calcula_media(struct aluno *alunos, int numAlunos){
	float soma = 0;
    int i;

    for (i = 0; i < numAlunos; i++) {
        alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2;
        soma += alunos[i].media;
    }

    return soma / numAlunos;
}

int main(){
	int numAlunos, i; 
	float mediaGeral;
	
	printf("Digite o número de alunos");
	scanf("%d", &numAlunos);
	
	struct aluno alunos[numAlunos];
	
	for(i=0; i<numAlunos; i++){
		printf("Digite o nome do aluno %d",i+1);
		scanf("%s", alunos[i].nome);
		printf("Digite a nota 1:");
		scanf("%f", &alunos[i].n1);
		printf("Digite a nota 2:");
		scanf("%f", &alunos[i].n2);
	}
	
	mediaGeral = calcula_media(alunos, numAlunos);
	
	printf("Médias:\n");
	
	for(i=0; i<numAlunos; i++){
		printf("%s: %f \n", alunos[i].nome, alunos[i].media);
	}
	
	printf("Média Geral da turma: %f",mediaGeral);
	
}

