/* Ler uma matriz D 5 x 5 (considere que não serão informados valores duplicados). A seguir ler um
número X e escreva uma mensagem indicando se o valor de X existe ou NÃO na matriz.*/

#include <stdio.h>

int main(){
	
	int m[5][5], l, c,x, teste=0;
	m[0][0]=-32;
	
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			printf("Digite o valor da posição [%d][%d]\n",l,c);
			scanf("%d",&m[l][c]);
		}
	}
	printf("Digite um valor para verificar se já existe na matriz\n");
	scanf("%d",&x);
	
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			if (x==m[l][c]){
				teste=1;
				break;
			}
		}
	}
	if(teste==1){
		printf("Existe na matriz");
	}
	else{
		printf("Não existe na matriz");
	}	
}
