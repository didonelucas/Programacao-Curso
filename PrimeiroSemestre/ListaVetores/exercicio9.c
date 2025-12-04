#include <stdio.h>

int main(){
//Ler um vetor A de 10 elementos e um valor V. Conte e escreva quantas vezes o valor V ocorre no vetor A.

int B[10], x, i;

printf("Digite um valor x\n");
scanf("%d",&x);

for(i=0; i<10;i++){
	printf("Vetor: Digite um valor\n");
	scanf("%d",&B[i]);
}
for(i=0; i<10;i++){
if(x==B[i]){
		printf("%d ",i);
	}
}
}
