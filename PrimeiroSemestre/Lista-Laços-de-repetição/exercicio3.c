/*Faça um algoritmo para calcular o fatorial de um número.*/

#include <stdio.h>

int main(){
	
	int n, c, i=1;
	
	printf("Digite um número para descobrir o seu fatorial\n");
	scanf("%d",&n);
	
	for(c=i; c<=n; c++){
		i=i*c;
	}
	printf("Fatorial de %d é igual a %d",n,i);
}
