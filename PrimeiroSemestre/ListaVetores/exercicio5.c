#include <stdio.h>

int main(){
// Ler um vetor D de 10 elementos. Crie um vetor E, com todos os elementos de D (na mesma ordem). Escrever todo o vetor D e logo após todo o vetor E.

int D[10], E[10], i;

for(i=0; i<10;i++){
	printf("Digite um valor\n");
	scanf("%d",&D[i]);
	E[i]=D[i];
}

for(i=0; i<10;i++){
	printf("%d ",D[i]);
}
printf("\n");
for(i=0; i<10;i++){
	printf("%d ",E[i]);
}

}
