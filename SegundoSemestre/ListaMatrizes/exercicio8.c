/*Leia um valor n ímpar (3 < n < 50) para
preencher e imprimir uma matriz da
seguinte forma:
n=5
..x..
.xxx.
xxxxx
.xxx.
..x..*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int n=0,i,j,centro,distanciaI, distanciaJ;
    char vetor[50][50];
    
    while(n<4 || n>49 || n%2==0 ){
        printf("Digite um valor ímpar na faixa 3 < n < 50");
        scanf("%d",&n);
    }
    centro=n/2;
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            distanciaI=abs(i-centro);
            distanciaJ=abs(j-centro);
            
            if((distanciaI+distanciaJ)<=centro){
                vetor[i][j]=('X');
            }
            else{
                vetor[i][j]=('.');
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           printf("%c ",vetor[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
