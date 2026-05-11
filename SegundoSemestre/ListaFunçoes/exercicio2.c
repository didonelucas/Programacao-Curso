/*Faça um programa que calcule e imprima o fatorial de um número N. Este programa deve
usar uma função, a qual calcula o fatorial do número lido. Não esqueça de testar as
restrições cabíveis a N. SEM USAR RECURSÃO*/

#include <stdio.h>

int calculaFatorial(int n);

int main()
{   
    int valor, resultado;

    printf("Digite um valor\n");
    scanf("%d", &valor);

    if(valor < 0){
        printf("Não existe fatorial de número negativo\n");
    }
    else{
        resultado = calculaFatorial(valor);
        printf("%d\n", resultado);
    }

    return 0;
}

int calculaFatorial(int n)
{
    int i, fat = 1;

    for(i = 2; i <= n; i++){
        fat *= i;
    }

    return fat;
}
