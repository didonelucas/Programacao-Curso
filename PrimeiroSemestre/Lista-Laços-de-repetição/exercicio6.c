/*Faça um programa que solicite ao usuário 10 números inteiros e, ao final,
informe a quantidade de números ímpares e pares lidos. Calcule também a soma
dos números pares e a média dos números ímpares.*/

#include <stdio.h>

int main(){
	int c, n, qtP=0, somaP=0;
	float mediaI, somaI=0, qtI=0;
	
	for(c=1;c<=10;c++){
		printf("Digite um valor\n");
		scanf("%d",&n);
		if(n%2==0){
			qtP=qtP+1;
			somaP=somaP+n;
		}
		else{
			qtI=qtI+1;
			somaI=somaI+n;
		}
	}
	mediaI=somaI/qtI;
	printf("Foram digitados %d números pares\n",qtP);
	printf("Foram digitados %.0f números ímpares\n",qtI);
	printf("A soma dos números pares digitados é = %d\n",somaP);
	printf("A média dos números ímpares digitados é = %.1f\n",mediaI);
	
}
