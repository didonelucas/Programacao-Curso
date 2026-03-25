/*Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o
preço do combustível é de R$ 2,70, escreva um programa para ler: a marcação do odômetro
(Km) no início do dia, a marcação (Km) no final do dia, o número de litros de combustível
gasto e o valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo
em Km/L e o lucro (líquido) do dia.*/
#include <stdio.h>
#define pComb 2.70

int main()
{
    int odometroI, odometroF,kmRodados, combGasto;
    float media, valorTotal, lucro;;
    
    printf("Digite o valor do odometro no inicio do dia\n");
    scanf("%d",&odometroI);
    printf("Digite o valor do odometro no final do dia\n");
    scanf("%d",&odometroF);
    kmRodados=odometroF-odometroI;
    printf("Quantos litros de gasolina foram gastos?\n");
    scanf("%d",&combGasto);
    printf("Qual foi o valor total recebido dos passageiros?\n");
    scanf("%f",&valorTotal);
    media= (float) kmRodados / (float) combGasto;
    lucro= valorTotal - ((float) combGasto*pComb);
    
    printf("Média do consumo de combustível: %.2fkm/L\n",media);
    printf("Lucro: %.2f reais",lucro);
    return 0;
}
