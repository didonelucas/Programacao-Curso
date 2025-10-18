/*Faça um algoritmo que calcule a seguinte série: S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50*/

#include <stdio.h>

int main(){
	float n=1,d,x,soma=0;
	for(d=1; d<=50; d++){
		x=n/d;
		n=n+2;
		soma = soma+ x;
	}
	printf("S= %.1f",soma);
}
