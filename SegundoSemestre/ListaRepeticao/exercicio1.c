/*Escreva um programa que lê as coordenadas de n pontos no plano cartesiano (x, y) e
identifica se estes pontos pertencem: i) ao 1o. quadrante; ii) ao 2o. quadrante; iii) ao 3o.
quadrante; iv) ao quarto quadrante; ou estão sobre v) o eixo dos “x”; vi) o eixo dos “y”; ou
vii) estão na origem. Feito isso, o programa escreverá os totais de pontos em cada uma
destas situações.*/
#include <stdio.h>
#define n 5

int main()
{
    int x,y,i, soma1Q=0, soma2Q=0, soma3Q=0, soma4Q=0, somaEX=0, somaEY=0, somaOrigem=0;
    
    for(i=0;i<n;i++){
        printf("Digite o par ordenado no formato (x,y):\n");
        scanf("(%d,%d)",&x,&y);
        getchar();
        if(x>0 && y>0){
            printf("O par (%d,%d) pertence ao primeiro quadrante;\n",x,y);
            soma1Q++;
        }
        else if(x<0 && y>0){
            printf("O par (%d,%d) pertence ao segundo quadrante;\n",x,y);
            soma2Q++;
        }
        else if(x<0 && y<0){
            printf("O par (%d,%d) pertence ao terceiro quadrante;\n",x,y);
            soma3Q++;
        }
        else if(x>0 && y<0){
            printf("O par (%d,%d) pertence ao quarto quadrante;\n",x,y);
            soma4Q++;
        }
        else if(x==0 && y!=0){
            printf("O par (%d,%d) está sobre o eixo das abscissas;\n",x,y);
            somaEX++;
        }
        else if(x!=0 && y==0){
            printf("O par (%d,%d) está sobre o eixo das ordenadas;\n",x,y);
            somaEY++;
        }
        else{
            printf("O par (%d,%d) está na origem\n",x,y);
            somaOrigem++;
        }
    }
    printf("Pares no primeiro quadrante:%d\nPares no segundo quadrante:%d\nPares no terceiro quadrante:%d\nPares no quarto quadrante:%d\nPares sobre o eixo X:%d\nPares sobre o eixo Y:%d\nPares sobre a origem:%d\n",soma1Q,soma2Q,soma3Q,soma4Q,somaEX,somaEY,somaOrigem);
    
    return 0;
}
