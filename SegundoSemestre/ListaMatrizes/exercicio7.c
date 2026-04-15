/*Escreva um programa que lê n coordenadas x e y de pontos e as armazene em uma
matriz. Decida para cada ponto se está ao Norte, Sul, Leste, Oeste, Nordeste, Noroeste,
Sudoeste, Sudeste ou sobre o ponto anterior e informe com uma mensagem apropriada.
Para o primeiro ponto lido tome a origem (0,0) para sua decisão.*/
#include <stdio.h>
#define n 10
int main()
{
    int m[n][2], i,j;
    
    m[0][0]=0;
    m[0][1]=0;
    
    for(i=1;i<n;i++){
        for(j=0;j<2;j++){
            if(j==0){
                printf("Digite a coordenada X:");
            }
            else{
                printf("Digite a coordenada Y:");
            }
            scanf("%d",&m[i][j]);
        }
        if (m[i][0]==m[i-1][0]){
            if(m[i][1]==m[i-1][1]){
                printf("Mesma localização da anterior\n");
            }
            else if(m[i][1]>m[i-1][1]){
                printf("Localização está a norte da anterior\n");
            }
            else if(m[i][1]<m[i-1][1]){
                printf("Localização está a sul da anterior\n");
            }
        }
        else if (m[i][0]>m[i-1][0]){
            if(m[i][1]==m[i-1][1]){
                printf("Localização está a leste da anterior\n");
            }
            else if(m[i][1]>m[i-1][1]){
                printf("Localização está a nordeste da anterior\n");
            }
            else if(m[i][1]<m[i-1][1]){
                printf("Localização está a sudeste da anterior\n");
            }
        }
        else if (m[i][0]<m[i-1][0]){
            if(m[i][1]==m[i-1][1]){
                printf("Localização está a Oeste da anterior\n");
            }
            else if(m[i][1]>m[i-1][1]){
                printf("Localização está a noroeste da anterior\n");
            }
            else if(m[i][1]<m[i-1][1]){
                printf("Localização está a sudoeste da anterior\n");
            }
        }
    }
}
