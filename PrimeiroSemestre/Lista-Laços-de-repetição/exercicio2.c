/*Faça um algoritmo que gera e escreve os números ímpares entre 100 e 200.
Utilize a função resto para verificar se o número é impar.*/

#include <stdio.h>

int main(){
	int c;
	for(c=100; c<=200; c++){
		if(c%2!=0){
			printf("%d\n",c);
		}
	}
}
