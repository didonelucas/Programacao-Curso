/*Faça um algoritmo que leia 3 números e diga se
podem ser lados de um triângulo. Observe: A, B
e C são lados de um triângulo se:
A < (B+C) e B < (C+A) e C < (A+B)*/

#include <stdio.h>

int main(){
	int A,B,C;
	printf("Digite o valor A\n");
	scanf("%d",&A);
	printf("Digite o valor B\n");
	scanf("%d",&B);
	printf("Digite o valor C\n");
	scanf("%d",&C);
	if(A<(B+C) && B<(C+A) && C<(B+A)){
		printf("%d, %d, %d podem ser lados de um triângulo",A,B,C);
	}
	else{
		printf("%d, %d, %d não podem ser lados de um triângulo",A,B,C);
	}
}
