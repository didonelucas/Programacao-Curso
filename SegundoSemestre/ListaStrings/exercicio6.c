/*Escreva um programa para ler 5 nomes (e sobrenomes) de pessoas (considere que cada
nome possui no máximo 70 letras e contém apenas letras minúsculas). Converter apenas a
inicial de cada nome para maiúscula. Imprimir cada nome após a conversão.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{   int i;
    char nome[5][70];
 
    for(i=0;i<5;i++){
        printf("Digite um nome:\n");
        scanf(" %69[a-z]",nome[i]);
        nome[i][0]=toupper(nome[i][0]);
        
        printf("%s\n",nome[i]);
    }
    return 0;
}
