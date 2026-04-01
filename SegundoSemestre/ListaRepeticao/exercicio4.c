/*Faça um programa que recebe um número inteiro e imprime o somatório de seus
divisores.*/
#include <stdio.h>

int main()
{   
    int n,i,soma=0;
    printf("Digite um número");
    scanf("%d",&n);
    for(i=1; i<=n;i++){
        if(n%i==0){
            soma=soma+i;
        }
    }
    printf("\nSoma dos divisores de %d = %d",n,soma);
    return 0;
}
