/*Faça um programa que calcule e imprima o fatorial de um número N. Este programa deve
usar uma função, a qual calcula o fatorial do número lido. Não esqueça de testar as
restrições cabíveis a N. UTILIZANDO RECURSÃO*/

#include <stdio.h>

int calculaFatorial(int n);

int main()
{   
    int valor, resultado;

    printf("Digite um valor\n");
    scanf("%d",&valor);
    if(valor<0){
        printf("Não existe fatorial de número negativo\n");
    }
    else{
        resultado = calculaFatorial(valor);
        printf("%d", resultado);
    }

    return 0;
}

int calculaFatorial (int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (n*calculaFatorial(n-1));
    }
}
