/*Faça um programa que lê n números decimais, armazenando-os em um vetor. Após, o
programa identifica o menor número do vetor e imprime sua posição.*/
#include <stdio.h>
#define n 10

int main()
{   
    int i, vetor[n], menor=100000, posMenor;
    for(i=0;i<n;i++){
        printf("Digite um valor\n");
        scanf("%d",&vetor[i]);
        if(vetor[i]<menor){
            menor=vetor[i];
            posMenor = i;
        }
    }
    printf("O menor valor digitado foi %d na posição %d do vetor",menor,posMenor);
    return 0;
}
