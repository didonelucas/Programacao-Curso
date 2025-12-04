#include <stdio.h>

int main(){
//Ler um vetor que contenha as notas de uma turma de 10 alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima da média. Escrever a média e o resultado da contagem.

float media, n[10],soma;
int aM=0, i;

for(i=0; i<10;i++){
	printf("Digite a nota do aluno %d\n",i);
	scanf("%f",&n[i]);
	soma=soma+n[i];
}
media=soma/10;
for(i=0; i<10;i++){
	if(n[i]>media)
	aM++;
}
printf("Media da turma: %.1f",media);
printf("Alunos acima da media da turma: %d",aM);
}
