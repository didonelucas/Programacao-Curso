/*Escreva um programa que conte a quantidade de palavras de um
texto digitado pelo teclado. (Uma palavra é qualquer sequência
de caracteres separada por um ou mais espaços). */ 

#include <stdio.h>
#include <string.h>

int main(){
	char texto[100];
	int  t,i,palavra=0;
	
	printf("Digite o texto\n");
	fgets(texto, 100, stdin);
	
	t = strlen(texto);
	t=t-1;
	for(i=0; i<t; i++){
		if(texto[i] != ' ' && (i==0 || texto[i-1]==' ')){
			palavra++;
		}
	}
	printf("O texto digitado tem %d palavras", palavra);

}
