/*Faça um programa que lê n números inteiros (cujo valor máximo não ultrapassa 1000).
Após, o programa imprime em ordem crescente os números do vetor.*/

#include <stdio.h>
#define tam 10

int main()
{   
    int i,j, vetor[tam],aux;
    
    for(i=0;i<tam;i++){
        printf("Digite um valor\n");
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<tam-1; i++){
        for(j = i+1; j < tam; j++) {
            if(vetor[i]>vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]= aux;
            }
        }
    }
    for(i=0;i<tam;i++){
        printf("%d ",vetor[i]);
    }
}
