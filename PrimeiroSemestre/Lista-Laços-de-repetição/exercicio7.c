/*Faça um programa que leia 10 números, considere que serão lidos números
inteiros e positivos. Se o número lido for menor que 7, calcule o seu fatorial. Se
for maior ou igual a 7, calcule a soma de 1 até o número lido.*/

#include <stdio.h>

int main(){
	int n=0, c,fat=1, soma=0;
	while(n<1){
		printf("Digite um número positivo\n");
		scanf("%d", &n);
		if(n<7){
			for(c=1; c<=n; c++){
				fat=fat*c;
			}
			printf("!%d= %d",n, fat);
		}
		else{
			for(c=0; c<=n; c++){
				soma=soma+c;
			}
			printf("A soma do número digitado e seus antecessores=%d",soma);
		}
	}
}
