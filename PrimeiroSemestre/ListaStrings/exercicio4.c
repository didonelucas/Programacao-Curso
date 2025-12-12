/*Construa um programa que leia uma string s, e dois caracteres a
e b. Em seguida, o programa deve substituir todas as ocorrências
do caractere a na string s pelo caractere b. (Observação: a e b
são informados pelo usuário e podem ser qualquer letra) */

#include <stdio.h>
#include <string.h>

int main(){
	char texto[100],a,b;
	int  t,i;

	printf("Digite um texto: \n");    
	fgets(texto, 100, stdin);
	
	t = strlen(texto);
    
    printf("%s\n", texto);
    
    printf("Digite um caractere A\n");
    scanf(" %c",&a);
    printf("Digite um caractere B para substuir o A no texto\n");
    scanf(" %c",&b);
    
    for(i=0; i<t; i++){
		if(texto[i]==a){
			texto[i]=b;
		}
	}
     printf("%s\n", texto);
	
}
