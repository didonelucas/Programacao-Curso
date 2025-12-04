#include <stdio.h>

int main(){
//Ler um vetor A de 10 elementos e um valor V. Conte e escreva quantas vezes o valor V ocorre no vetor A.

int A[10], v, i,c=0;

printf("Digite um valor v\n");
scanf("%d",&v);

for(i=0; i<10;i++){
	printf("Vetor: Digite um valor\n");
	scanf("%d",&A[i]);
	if(A[i]==v)
	c++;
}
printf("O valor v ocorre %d vezes no vetor",c);
}
