/*Ler uma matriz A de 4 x 4, calcular e escrever as somas dos elementos marcados com o X. Utilizar
estruturas de repetição.
XX..     ....      X...     .XXX
XX..     ....      XX..     ..XX
....     ..XX      XXX.     ...X 
....     ..XX      XXXX     .... */

#include <stdio.h>

int main(){

int l, c, m[4][4], somaA=0, somaB=0, somaC=0, somaD=0;

for(l=0; l<4;l++){
	for(c=0; c<4;c++){
		printf("Digite um valor");
		scanf("%d",&m[l][c]);
	}
}
for(l=0; l<4;l++){
	printf("\n");
	for(c=0; c<4;c++){
		printf("%d ",m[l][c]);
		if(l<=1 && c<=1){
			somaA=somaA+m[l][c];
		}
		if(l>=2 && c>=2){
			somaB=somaB+m[l][c];
		}
		if(c<=l){
			somaC=somaC+m[l][c];
		}
		if(c>l){
			somaD=somaD+m[l][c];
		}
	}
}
printf("\n\n");
printf("Soma A = %d",somaA);
printf("Soma B = %d",somaB);
printf("Soma C = %d",somaC);
printf("Soma D = %d",somaD);
}
