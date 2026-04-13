/*Faça um programa que lê uma matriz de valores decimais e calcula a média de sua
diagonal secundária. Após, o programa deve verificar e imprimir a posição de cada
elemento cujo valor está abaixo da média calculada.*/

#include <stdio.h>
#define t 3

int main()
{
    int i,j;
    float m[t][t], somaDS=0, mediaDS;
    
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            printf("Digite um valor\n");
            scanf("%f",&m[i][j]);
            if(i==t-1-j){                /*Pego só os que fazem parte da Diagonal Secundária*/
                somaDS += m[i][j];
            }
        }
    }
    mediaDS=somaDS/t;
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            if(i==t-1-j){            
                if(m[i][j]<mediaDS){
                    printf("Posição [%d][%d] está abaixo da média da diagonal secundária\n",i,j);
                }
            }
        }
    }
    return 0;
}
