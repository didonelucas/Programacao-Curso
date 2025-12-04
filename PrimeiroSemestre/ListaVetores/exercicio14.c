#include <stdio.h>

int main(){
//Ler um vetor Q de 10 posições (aceitar somente números positivos-se o valor informado for negativo ou zero a leitura deverá ser repetida). Escreva a seguir o valor do maior elemento de Q e a respectiva posição(índice) que ele ocupa no vetor.
int q[10], maiorE=0, i, iMaior=0;

for(i=0; i<10;i++){
	do{
	printf("Digite um valor\n");
	scanf("%d",&q[i]);
}while(q[i]<1);
	if(q[i]>maiorE){
		maiorE=q[i];
		iMaior=i;
	}
}
printf("Maior valor digitado: %d\nPosição: %d",maiorE,iMaior);
}
