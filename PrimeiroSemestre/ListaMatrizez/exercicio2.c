/*Ler 2 matrizes, A 4 x 6 e B 4 x 6 e criar :
a) uma matriz S que seja a soma de A e B.
b) uma matriz D que seja a diferença de A e B. (A – B).
Escrever as matrizes A, B, S e D após todo cálculo estar concluído.*/

#include <stdio.h>

int main(){

int a[4][6], b[4][6], s[4][6], d[4][6],L,C;

for(L=0; L<4;L++){
	for(C=0; C<6;C++){
		printf("Digite o valor da posição %d %d da matriz A",L,C);
		scanf("%d",&a[L][C]);
		printf("Digite o valor da posição %d %d da matriz B",L,C);
		scanf("%d",&b[L][C]);
	}
}

for(L=0; L<4;L++){
	for(C=0; C<6;C++){
		s[L][C]= a[L][C]+b[L][C];
		d[L][C]= a[L][C]-b[L][C];
	}
}
printf("\nMatriz A:\n");
for(L=0; L<4;L++){
	printf("\n");
	for(C=0; C<6;C++){
		printf("%d ",a[L][C]);
}
}
printf("\nMatriz B:\n");
for(L=0; L<4;L++){
	printf("\n");
	for(C=0; C<6;C++){
		printf("%d ",b[L][C]);
}
}
printf("\nMatriz S:\n");
for(L=0; L<4;L++){
	printf("\n");
	for(C=0; C<6;C++){
		printf("%d ",s[L][C]);
}
}
printf("\nMatriz D:\n");
for(L=0; L<4;L++){
	printf("\n");
	for(C=0; C<6;C++){
		printf("%d ",d[L][C]);
}
}

}
