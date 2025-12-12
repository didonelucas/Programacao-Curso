/*Uma operação muito comum de manipulação de strings é
conhecida como TRIM. Trata-se de uma função que recebe uma
string e remove todos os espaços no início e no fim da string.
Elabore uma função que realiza esta tarefa.*/

#include <stdio.h>
#include <string.h>

int main(){
	char texto[100];
	int  t,i, fim, inicio;
	
	printf("Digite o texto\n");
	fgets(texto, 100, stdin);
	
	t = strlen(texto);
	t=t-1;
	for(i=0; i<t; i++){
		if(texto[i] != ' '){
			inicio=i;
			break;	
		}
	}
	for(i=t-1; i>=0; i--){
		if(texto[i] != ' '){
			fim=i;
			break;	
		}
	}
	for(i=inicio; i<=fim; i++){
		printf("%c", texto[i]);
	}
	}
