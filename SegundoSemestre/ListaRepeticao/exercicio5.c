/*Faça um programa que recebe um número inteiro e responda se ele é primo ou não*/
#include <stdio.h>

int main()
{   
    int n,i,soma=0;
    printf("Digite um número");
    scanf("%d",&n);
    for(i=n; i>=1;i--){
        if(n%i==0){
            soma=soma+1;
        }
    }
    if(soma<=2){
        printf("%d é número primo\n",n);
    }
    else{
        printf("%d não é número primo\n",n);
    }
    return 0;
}
