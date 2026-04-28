/*Escreva um programa para ler 5 frases (considere que cada frase possui no máximo 70
caracteres). Converter todas as letras minúsculas existentes na frase (somente as letras
minúsculas) para maiúsculas. Imprimir cada frase após a conversão.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{   int i=0,j;
    char frase[5][30];
 
    for(i=0;i<5;i++){
        printf("Digite uma palavra:");
        fgets(frase[i],70,stdin);
        
        for(j=0; frase[i][j]!='\0';j++){
            frase[i][j]=toupper(frase[i][j]);
        }
        printf("%s\n",frase[i]);
    }
    return 0;
}
