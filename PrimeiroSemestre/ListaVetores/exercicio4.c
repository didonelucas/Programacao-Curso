#include <stdio.h>

int main(){
//Ler um vetor C de 10 elementos inteiros. Após o término da leitura, trocar todos os valores negativos do vetor C por 0. Após todas as trocas terem sido efetuadas, escrever o vetor C.

int C[10], i;

for(i=0; i<10;i++){
	printf("Digite um valor\n");
	scanf("%d",&C[i]);
}

for(i=0; i<10;i++){
	if(C[i]<0){
		C[i]=0;
	}
	printf("%d\n",C[i]);
}
}
