/*A série de Fibonacci é uma sequência de números em que os dois primeiros são
0 e 1 e a partir daí cada número é a soma dos anteriores, ou seja
𝑡 = 𝑡 n-1 + 𝑡 n-2
Faça um algoritmo que escreve os x primeiros termos da série e a soma destes */

#include <stdio.h>

int main(){
	int n, c,fibo,a=0,b=1, soma=0;
	
	printf("Digite um número para descobrir sua série de Fibonacci\n");
	scanf("%d",&n);
	
	for(c=1; c<=n; c++){
		soma = soma + a;
		fibo=a+b;
		a=b;
		b=fibo;
	}
	
	printf("A soma dos %d primeiros termos da série é = %d",n,soma);
}
