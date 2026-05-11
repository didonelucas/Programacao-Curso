/*Faça um programa utilizando uma função que lê um número inteiro e verifica se este
número é primo ou não, imprimindo uma mensagem condizente.*/

#include <stdio.h>

int vePrimo(int n);

int main()
{   
    int valor, resultado;

    printf("Digite um valor\n");
    scanf("%d",&valor);
    resultado = vePrimo(valor);
    if(resultado == 1){
        printf("É primo\n");
    }
    else{
        printf("Não é primo");
    }
    return 0;
}

int vePrimo (int n){
    int i;
    if(n<=1){
        return 1;
    }
    for(i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
