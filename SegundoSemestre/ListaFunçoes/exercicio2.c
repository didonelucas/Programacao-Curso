/*Faça um programa utilizando uma função que lê um número inteiro e verifica se este
número é primo ou não, imprimindo uma mensagem condizente.*/

#include <stdio.h>

int vePrimo(int n);

int main()
{   
    int valor;

    printf("Digite um valor\n");
    scanf("%d",&valor);
    vePrimo(valor);
    
    return 0;
}

int vePrimo (int n){
    int i, soma=0;
    for(i=n; i>0; i--){
        if(n%i==0){
            soma++;
        }
    }
    if(soma<=2){
        printf("É primo\n");
    }
    else{
        printf("Não é primo");
    }
}
