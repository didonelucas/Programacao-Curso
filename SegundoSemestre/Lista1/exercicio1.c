/*Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.*/

#include <stdio.h>
#define PI 3.1416

int main()
{   
    float raio, area;
    printf("Digite o raio do círculo\n");
    scanf("%f",&raio);
    area=PI*raio*raio;
    printf("A área do círculo é: %f",area);

    return 0;
}
