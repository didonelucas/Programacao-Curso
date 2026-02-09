/*Faça um algoritmo que represente uma calculadora. O
algoritmo deve apresentar um menu de opções pra cada
uma das quatro operações básicas:
▫ 1 - Adição
▫ 2 - Subtração
▫ 3 - Multiplicação
▫ 4 - Divisão
• Cada operação deve ser realizada em uma sub-rotina
sem parâmetros.*/

#include <stdio.h>
#include <stdlib.h>

float adicao(float a, float b){
	float r;
	r=a+b;
	return r;
}

float subtracao(float a, float b){
	float r;
	r=a-b;
	return r;
}

float multiplicacao(float a, float b){
	float r;
	r=a*b;
	return r;
}

float divisao(float a, float b){
	float r;
	r=a/b;
	return r;
}

int main(){
	int opcao=0;
	float resultado, x, y;
	
	while(opcao<1 || opcao>4){
		printf("Digite qual operação você deseja realizar:\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
		scanf("%d",&opcao);
	}
	printf("Digite o primeiro valor:\n");
	scanf("%f", &x);
	printf("Digite o segundo valor:\n");
	scanf("%f", &y);
	switch(opcao) {
		case 1:
			resultado = adicao(x,y);
			break;
		case 2:
			resultado = subtracao(x,y);
			break;
		case 3:
			resultado = multiplicacao(x,y);
			break;
		case 4:
			resultado = divisao(x,y);
			break;	
	}
	printf("%f",resultado);
}
