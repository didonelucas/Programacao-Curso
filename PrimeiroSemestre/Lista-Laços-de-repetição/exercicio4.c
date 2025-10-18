/*Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada
de 10 a 1 do valor lido.*/

#include <stdio.h>

int main(){
	int n=0,c,r;
	while(n<1 || n>10){
		printf("Digite um número de 1 a 10 para descobrir a sua tabuada\n");
		scanf("%d",&n);
		
		for(c=1; c<=10; c++){
			r=n*c;
			
			printf("%d*%d=%d\n",n,c,r);
		}
		
	}
}
