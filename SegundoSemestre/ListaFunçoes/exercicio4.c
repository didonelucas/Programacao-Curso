/*Faça um programa que lê dois números inteiros, A e B, e, com uma função, testa se estes
números são amigos. Dizemos que dois números são amigos se cada um deles é igual a
soma dos divisores próprios do outro. Os divisores próprios de um número positivo N são
todos os divisores inteiros positivos de N exceto o próprio N.*/

#include <stdio.h>

int veAmigo(int n1, int n2);

int main()
{   
    int valor1, valor2, resultado;

    printf("Digite o valor 1:\n");
    scanf("%d",&valor1);
    printf("Digite o valor 2:\n");
    scanf("%d",&valor2);
    resultado = veAmigo(valor1,valor2);
    if(resultado == 1){
        printf("%d %d são números amigos\n",valor1,valor2);
    }
    else{
        printf("%d e %d não são números amigos\n",valor1,valor2);
    }
    return 0;
}

int veAmigo (int n1, int n2){
    int i, soma1=0, soma2=0;
    for(i=1; i<n1; i++){
        if(n1%i==0){
            soma1+=i; 
        }
    }
    for(i=1; i<n2; i++){
        if(n2%i==0){
            soma2+=i; 
        }
    }
    if(soma1==n2 && soma2==n1){
        return 1;
    }
    else{
        return 0;
    }
}
