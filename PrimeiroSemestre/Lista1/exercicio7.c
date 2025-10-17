/*Faça um algoritmo que leia um número inteiro e
mostre uma mensagem indicando se este
número é par ou ímpar, e se é positivo, negativo
ou zero.*/

#include <stdio.h>

int main(){
	
	int n;
	
	printf("Digite um número\n");
	scanf("%d",&n);
	
	if(n==0){
		printf("Número 0, Par");
	}
	if(n>0 && n%2==0){
		printf("Número positivo e par");
	}
	else if(n>0 && n%2!=0){
		printf("Número positivo e ímpar");
	}
	else if(n<0 && n%2==0){
		printf("Número negativo e par");
	}
	else if(n<0 && n%2!=0){
		printf("Número negativo e ímpar");
	}
}
