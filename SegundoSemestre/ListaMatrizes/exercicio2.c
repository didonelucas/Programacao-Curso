/*Faça um programa que lê n x m valores decimais, armazenando-os em uma matriz com n
linhas e m colunas. Após, para cada linha da matriz, o algoritmo calcula a média e conta
quantos elementos estão acima da média calculada, imprimindo estas informações.*/

#include <stdio.h>
#define t 3

int main()
{   
    int i,j, acimaMedia[t];
    float matriz[t][t], media[t],soma[t];
    
    for(i=0;i<t;i++){
        soma[i]=0;
        acimaMedia[i]=0;
        for(j=0;j<t;j++){
        printf("Digite um valor\n");
        scanf("%f",&matriz[i][j]);
        soma[i]=soma[i]+matriz[i][j];
        }
        media[i]=soma[i]/t;
    }
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            if(matriz[i][j]>media[i]){
                acimaMedia[i]++;
            }
        }
        printf("Linha %d-> Média: %f Elementos acima da média: %d\n",i,media[i],acimaMedia[i]);
    }
    return 0;
}
