#include <stdio.h>

int main(){
//Ler um vetor Z de 10 elementos. Crie um vetor W, com todos os elementos de Z (na ordem inversa).Escrever o vetor W.

int i, Z[10], W[10];

for(i=0; i<10;i++){
	printf("Digite um valor\n");
	scanf("%d",&Z[i]);
}
for(i=0; i<10;i++){
	W[i] = Z[9-i];
	printf("%d ",W[i]);
}

}
