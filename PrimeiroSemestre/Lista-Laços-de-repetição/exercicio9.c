/*Faça um algoritmo que calcule a seguinte série S = 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/100*/

#include <stdio.h>

int main(){
	float c,n=0,soma=0;
		for(c=1; c<=100; c++){
			n=1/c;
			soma=soma+n;
		}
		printf("S =%f\n",soma);
}
