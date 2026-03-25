/*Escreva um programa para ler uma temperatura em graus Celsius, calcular e escrever o valor
correspondente em graus Fahrenheit.*/
#include <stdio.h>

int main()
{   
    float tempC, tempF;
    printf("Digite a temperatura em Celsius\n");
    scanf("%f",&tempC);
    tempF=((tempC/5)*9)+32;
    printf("A temperatura em Fahrenheit é: %f",tempF);

    return 0;
}
