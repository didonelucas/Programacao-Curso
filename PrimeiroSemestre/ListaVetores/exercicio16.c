#include <stdio.h>

int main(){
//Ler um vetor U de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o. com o penúltimo, etc. até o 5o. com o 6o. e escreva o vetor U assim modificado.

int u[10],i, aux;
for(i=0; i<10;i++){
	printf("Digite um valor\n");
	scanf("%d",&u[i]);
}
for(i=0; i<5;i++){
	aux=u[i];
	u[i]=u[i+5];
	u[i+5]=aux;
}
for(i=0; i<10;i++){
	printf("%d ",u[i]);
}

}
