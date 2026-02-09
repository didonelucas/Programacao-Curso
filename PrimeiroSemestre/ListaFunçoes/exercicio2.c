/*Faça um algoritmo para ler três valores a, b e c e colocálos em ordem crescente, utilizando uma sub-rotina pra
que seja realizada a ordenação.*/

#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y)
{
	int aux;
	aux = *x;
	*x = *y;
	*y=aux;
}

int main(){
	
	int a,b,c;
	
	printf("Digite três valores");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>b)
		troca(&a,&b);
	if(a>c)
		troca(&a,&c);
	if (b>c)
		troca(&b,&c);
	printf("%d, %d, %d",a,b,c);
}
