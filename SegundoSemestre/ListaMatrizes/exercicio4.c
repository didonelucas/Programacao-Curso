/*Faça um programa que lê n números inteiros (cujo valor máximo não ultrapassa 1000).
Após, o programa imprime em ordem crescente os números não duplicados do vetor.*/

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
        for(j = 0; j < tam - 1 - i; j++) {
            if(vetor[j]>vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]= aux;
            }
        }
    }
    for(i=0;i<tam;i++){
        printf("%d ",vetor[i]);
    }
}
