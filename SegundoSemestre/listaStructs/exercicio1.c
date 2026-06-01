/*Construa uma estrutura para armazenar pontos (coordenadas x e y) no plano cartesiano. Crie
um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de pontos.*/

#include <stdio.h>
#define TAM 5

typedef struct {
    int x;
    int y;
} coord;

int main()
{
    coord ponto[TAM];
    int i;
    for(i=0; i<TAM;i++){
        scanf("%d %d",&ponto[i].x,&ponto[i].y);
    }
    for(i=0;i<TAM; i++){
        printf("Ponto %d:\n(%d,%d)\n", i+1 ,ponto[i].x,ponto[i].y);
    }
  
    return 0;
}
