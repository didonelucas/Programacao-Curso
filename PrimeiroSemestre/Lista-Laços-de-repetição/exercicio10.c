/*Faça um algoritmo que leia um valor N e calcule a seguinte série. Considere que
será lido um valor inteiro e positivo. S = 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/N*/

#include <stdio.h>

int main(){
	int i=0;
	float c,n,soma=0;
	while(i<1){
		printf("Digite um número inteiro e positivo\n");
		scanf("%d",&i);
	}
	for(c=1; c<=i; c++){
			n=1/c;
			soma=soma+n;
		}
	printf("S = %f",soma);
}
