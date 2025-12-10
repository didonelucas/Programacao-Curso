/*Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas:
a) da linha 3 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz*/

#include <stdio.h>

int main(){

int m[5][5], L, C, somaL=0, somaC=0, somaDP=0, somaDS=0, somaT=0;

for(L=0; L<5;L++){
	for(C=0; C<5;C++){
		printf("Digite um valor");
		scanf("%d",&m[L][C]);
	}
}
for(L=0; L<5;L++){
	printf("\n");
	for(C=0; C<5;C++){
		printf("%d ",m[L][C]);
		if(L==3){
			somaL=somaL + m[L][C];
		}
		if(C==2){
			somaC=somaC + m[L][C];
		}
		if(L==C){
			somaDP=somaDP + m[L][C];
		}
		if(L==4-C){
			somaDS=somaDS + m[L][C];
		}
		somaT=somaT+m[L][C];
	}
}
printf("\n\n");
printf("Soma elementos linha 3 = %d\n",somaL);
printf("Soma elementos coluna 2 = %d \n",somaC);
printf("Soma elementos diagonal principal = %d \n",somaDP);
printf("Soma elementos diagonal secundária = %d \n",somaDS);
printf("Soma de todos os elementos da matriz = %d \n",somaT);
}
