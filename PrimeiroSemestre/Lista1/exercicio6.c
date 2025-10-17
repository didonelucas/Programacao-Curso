/*Escreva um algoritmo que leia o código de um
aluno e suas três notas. Calcule a média
ponderada do aluno, considerando que o peso
para a maior nota seja 4 e para as duas restantes,
3. Mostre o código do aluno, suas três notas, a
média calculada e a mensagem "APROVADO"
se a média for maior ou igual a 5 e
"REPROVADO" caso contrário*/

#include <stdio.h>

int main(){
	float n1,n2,n3, media, c_aluno;
	
	printf("Digite o código do aluno\n");
	scanf("%f",&c_aluno);
	printf("Digite a nota 1\n");
	scanf("%f",&n1);
	printf("Digite a nota 2\n");
	scanf("%f",&n2);
	printf("Digite a nota 3\n");
	scanf("%f",&n3);
	
	if(n1>n2 && n1>n3){
		media = (n1*4 + n2*3 + n3*3)/10;
	}
	else if(n2>n1 && n2>n3){
		media = (n2*4 + n1*3 + n3*3)/10;
	}
	else{
		media = (n3*4 + n1*3 + n2*3)/10;
	}
	
	if(media>=5){
		printf("Aluno: %.0f\nNota 1: %.1f\nNota2: %.1f\nNota 3: %.1f\nMedia: %.1f\nAPROVADO",c_aluno,n1,n2,n3,media);
	}
	else{
		printf("Aluno: %.0f\nNota 1: %.1f\nNota2: %.1f\nNota 3: %.1f\nMedia: %.1f\nREPROVADO",c_aluno,n1,n2,n3,media);
	}
}
