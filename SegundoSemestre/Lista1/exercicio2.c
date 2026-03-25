/*Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o
valor correspondente em graus Celsius.*/
#include <stdio.h>

int main()
{   
    float tempC, tempF;
    printf("Digite a temperatura em Fahrenheit\n");
    scanf("%f",&tempF);
    tempC=((tempF-32)/9)*5;
    printf("A temperatura em Celsius é: %f",tempC);

    return 0;
}
