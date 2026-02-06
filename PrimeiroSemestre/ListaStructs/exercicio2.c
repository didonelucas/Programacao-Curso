/* Escreva um programa que receba dois structs do tipo dma, cada um
representando uma data válida, e calcule o número de dias que
decorreram entre as duas datas. OBS: Garanta que a estrutura só
armazenará datas válidas.*/

#include <stdio.h>
#include <stdlib.h>

struct dma{
		int dia;
		int mes;
		int ano;
	};

int main(){
	
	struct dma ent[2];
	
	int i, j, tempMes, dif, soma[2], tempAno;
	
	for(i=0; i<2; i++){
		printf("Digite o ano:\n"); /*ano*/
		scanf("%d",&ent[i].ano);
		
		ent[i].mes=14;
		while(ent[i].mes<1|| ent[i].mes>12){ /*mês*/
			printf("Digite o mês:\n");
			scanf("%d",&ent[i].mes);
		}
		
		if (ent[i].mes == 2){
			if (ent[i].ano%4==0 && (ent[i].ano%100!=0 || ent[i].ano % 400 == 0))
				tempMes = 29;
			else
				tempMes = 28;
		}
		else if (ent[i].mes == 4 || ent[i].mes == 6 || ent[i].mes == 9 || ent[i].mes == 11){
			tempMes = 30;
		}
		else{
			tempMes = 31;
		}
		
		ent[i].dia=32;
		while(ent[i].dia<1|| ent[i].dia>tempMes){ /*dia*/
			printf("Digite o dia:\n");
			scanf("%d",&ent[i].dia);
		}
	}
	
	for(i=0; i<2; i++){
		soma[i]=0;
		
		for(j=1; j < ent[i].ano; j++){
			if (j%4==0 && (j%100!=0 || j% 400 == 0)){
				tempAno=366;
			}
			else{
				tempAno=365;
			}
			soma[i] = soma[i] + tempAno;
		}
		
		for(j=1; j < ent[i].mes; j++){
			if (j==2){
				if (ent[i].ano%4==0 && (ent[i].ano%100!=0 || ent[i].ano % 400 == 0)){
					tempMes=29;
				}
				else{
					tempMes=28;
				}
			}
			else if (j==4 ||j==6 ||j==9||j==11){
				tempMes=30;
			}
			else{
				tempMes=31;
			}
			soma[i] = soma[i] + tempMes;
		}
			
		soma[i] = soma[i] + ent[i].dia;
	}
	
	dif = abs(soma[0] - soma[1]);
	printf("A diferença em dias das duas datas é: %d\n", dif);
	
	return 0;
}

