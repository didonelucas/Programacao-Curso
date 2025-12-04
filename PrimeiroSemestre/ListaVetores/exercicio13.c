#include <stdio.h>

int main(){
//Ler 2 vetores: R de 5 elementos e S de 10 elementos. Gere um vetor X de 15 elementos cuja as 5 primeiras posições contenha os elementos de R e as 10 últimas posições os elementos de S. Escrever o vetor X.

int r[5], s[10],x[15],i;

for(i=0; i<5;i++){
	printf("Digite um valor\n");
	scanf("%d",&r[i]);
}
for(i=0; i<10;i++){
	printf("Digite um valor\n");
	scanf("%d",&s[i]);
}
for(i=0; i<15;i++){
	if(i<5){
		x[i]=r[i];
	}
	else
	x[i]=s[i-5];
}
for(i=0; i<15;i++){
	printf("%d ",x[i]);
}
}
