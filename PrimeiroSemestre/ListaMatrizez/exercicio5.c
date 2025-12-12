/*Ler uma matriz G 5 x 5 e criar 2 vetores SL e SC de 5 elementos que contenham respectivamente as
somas das linhas e das colunas de G. Escrever os vetores criados.*/

#include <stdio.h>

int main() {
    int m[5][5], l, c, sl[5], sc[5];

    for (l = 0; l < 5; l++) {
        sl[l] = 0; 
    }
    for (c = 0; c < 5; c++) {
        sc[c] = 0; 
    }

    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            printf("Digite o elemento do índice[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);

            sl[l] += m[l][c];
            sc[c] += m[l][c];
        }
    }
    for (l = 0; l < 5; l++) {
		printf("\n");
        for (c = 0; c < 5; c++) {
            printf("%d ", m[l][c]);
        }
    }
    printf("\n\n");
    for (l = 0; l < 5; l++) {
        printf("%d ", sl[l]);
    }
    printf("\n");
    for (c = 0; c < 5; c++) {
        printf("%d ", sc[c]);
    }
}

