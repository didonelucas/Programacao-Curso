#include <stdio.h>

int main(){
//Ler um vetor X de 10 elementos. A seguir copie todos os valores negativos de vetor X para o vetor R (sem deixar elementos vazios entre os valores copiados). Escrever o vetor R.
int x[10], r[10], i,j;

for(i=0; i<10;i++){
	printf("Digite um valor\n");
	scanf("%d",&x[i]);
	if(x[i]<0){
		r[j]=x[i];
		j++;
	}
}
for(i=0; i<j;i++){
	printf("%d ",r[i]);
}
}

