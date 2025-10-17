/*Faça um algoritmo que leia um número e mostre
se ele é positivo, negativo ou zero.*/

#include <stdio.h>

int main(){
	int n;
	printf("Escreva o valor \n");
    scanf("%d", &n);
    
    if(n>0)
		printf("Valor positivo");
	else if(n<0)
		printf("Valor negativo");
	else
		printf("Valor nulo");
}
