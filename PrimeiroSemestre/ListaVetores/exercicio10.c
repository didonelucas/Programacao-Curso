#include <stdio.h>

int main(){
//Ler um vetor C para armazenar 10 códigos e uma variável A que contenha um código. Escrever a mensagem ACHEI se o código armazenado em A estiver no vetor C, e NÃO ACHEI caso contrário.

int C[10], i, codigo, achei=0;

for(i=0; i<10;i++){
printf("Digite um valor\n");
scanf("%d",&C[i]);
}
printf("Digite um código para verificar se está no vetor\n");
scanf("%d",&codigo);
for(i=0; i<10;i++){
	if(C[i]==codigo){
	achei=1;
	break;
	}
}
if(achei==1)
printf("ACHEI");
else
printf("NÃO ACHEI");
}

