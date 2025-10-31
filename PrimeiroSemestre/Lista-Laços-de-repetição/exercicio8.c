/*Faça um algoritmo que escreva os 30 primeiros termos da série 1,3,9,27...*/

#include <stdio.h>
#include <math.h>

int main(){
		int c;
		for(c=0; c<=29; c++){
			printf("%.0f\n",pow(3,c));
		}
}
