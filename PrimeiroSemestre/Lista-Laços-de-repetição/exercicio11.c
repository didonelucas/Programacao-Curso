/*Faça um algoritmo que lê um valor x e calcula e mostra os 20 primeiros termos
da série: S = 1 + 1/x^2 + 1/x^3 + 1/x^4 + ...*/

#include <stdio.h>
#include <math.h>

int main(){
	float c,n,x,soma=0;
	printf("Digite um valor\n");
	scanf("%f",&x);
	for(c=2; c<=20; c++){
			n=1/pow(x,c);
			soma=soma+n;
		}
		soma=soma+1;
		printf("S = %f",soma);
}
