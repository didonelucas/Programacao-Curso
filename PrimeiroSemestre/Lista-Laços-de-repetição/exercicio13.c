/*Faça um algoritmo que gere os N primeiros termos da série a seguir. Considere
que será lido um valor inteiro e positivo. S = 1 + (8 - 4)/3 + (12 - 3)/5 + (16 - 4)/7 + (20 - 3)/9 + ...*/

#include <stdio.h>

int main(){
	int c,n;
	float x=8, y=4,z=3,v=0,soma=0;
	printf("Digite um valor\n");
	scanf("%d",&n);
	for (c=2; c<=n;c++){
		v=(x-y)/z;
		x=x+4;
		z=z+2;
		if(y==4){
			y=3;
		}
		else{
			y=4;
		}
		soma=soma+v;
		printf("%.2f\n",soma);
	}
	soma=soma+1;
	printf("%.2f",soma);
}
