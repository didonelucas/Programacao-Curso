/*Escreva um programa para ler um vetor de 10 palavras. A seguir ler uma letra. Copiar para
outro vetor (sem deixar espaços vagos) todas as palavras que começam a letra informada.
Após o término na cópia escrever o vetor gerado.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j=0;
    char palavra[10][30],novoVetor[10][30], c;
    
    for(i=0;i<10;i++){
        printf("Digite uma palavra:\n");
        fgets(palavra[i],30,stdin);
    }
    printf("Digite um caractere:\n");
    scanf(" %c",&c);
    for(i=0;i<10;i++){
        if(palavra[i][0]==c){
            strcpy(novoVetor[j], palavra[i]);
            j++;
        }
    }
    for(i = 0; i < j; i++){
        printf("%s\n", novoVetor[i]);
    }

    return 0;
}
