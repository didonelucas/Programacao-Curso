#include <stdio.h>

int main(){
//Ler um vetor M de 10 elementos. Troque a seguir o 1o. elemento com o 6o., o 2o. com o 7o.,etc. até o 5o. com 10o. e escreva o vetor M assim modificado. 
int u[10],i, aux;
for(i=0; i<10;i++){
	printf("Digite um valor\n");
	scanf("%d",&u[i]);
}
for(i=0; i<5;i++){
	aux=u[i];
	u[i]=u[9-i];
	u[9-i]=aux;
}
for(i=0; i<10;i++){
	printf("%d ",u[i]);
}

}
