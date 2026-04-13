/*Faça um programa que lê duas matrizes de números decimais, M1 e M2, ambas de
tamanhos n x m. Após, o programa cria e imprime a matriz S, resultante da soma de M1
com M2.*/

#include <stdio.h>
#define tam 3

int main()
{   
    int i,j, m1[tam][tam],m2[tam][tam],mS[tam][tam];
    
    printf("Matriz 1:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Digite um valor\n");
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Matriz 2:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Digite um valor\n");
            scanf("%d",&m2[i][j]);
        }
    }
    printf("Soma das matrizes:\n");
    for(i=0; i<tam; i++){
        for(j = 0;j<tam; j++) {
            mS[i][j]=m1[i][j]+m2[i][j];
            printf("%d ",mS[i][j]);
        }
        printf("\n");
    }
}
