/*Escreva um programa para ler um caractere e uma a frase (considere que ela possui no
máximo 70 caracteres). Retire da string que contém a frase todos os caracteres iguais ao
informado. Escrever a string que contém a frase após a retirada dos caracteres.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,t;
    char frase[70], c;
    
    printf("Digite uma frase:\n");
    fgets(frase,70,stdin);
    printf("Digite um caractere:\n");
    scanf("%c",&c);
    t=strlen(frase)-1;
    
    for(i=0;i<=t;i++){
        if(frase[i]==c){
            for(j=i;j<=t;j++){
                frase[j]=frase[j+1];
            }
        }
    }
    printf("%s",frase);
    return 0;
}
