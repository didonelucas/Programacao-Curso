/*Elabore um algoritmo que, dada a idade de um
nadador classifica-o em uma das seguintes
categorias: 
Infantil A= 5-7 anos
Infantil B= 8-10 anos
Juvenil A= 11-13 anos
Juvenil B=14-17 anos
Adulto= Maiores de 18 anos*/

#include <stdio.h>

int main(){
	int i;
	
	printf("Digite a idade do nadador\n");
	scanf("%d",&i);
	
	if(i<5){
		printf("Idade inválida");
	}
	else if(i>=5 && i<=7){
		printf("Infantil A");
	}
	else if(i>=8 && i<=10){
		printf("Infantil B");
	}
	else if(i>=11 && i<=13){
		printf("Juvenil A");
	}
	else if(i>=14 && i<=17){
		printf("Juvenil B");
	}
	else if(i>=18){
		printf("Adulto");
	}
}
