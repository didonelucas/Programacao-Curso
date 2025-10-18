/*Escreva um algoritmo para repetir a leitura de um número enquanto o valor
fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve
ser encerrada sem imprimir mensagem alguma.*/

#include <stdio.h>

int main(){
	int n=1;
	
	while(n!=0){
		printf("Digite um número\n");
		scanf("%d", &n);
		if(n>0)
		printf("Número positivo\n");
		else if(n<0)
		printf("Número negativo\n");
	}
}
