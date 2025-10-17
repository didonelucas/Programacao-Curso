/*Construir um algoritmo que dados dois números
escreva o maior.*/

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Escreva o valor 1\n");
    scanf("%d", &n1);

    printf("Escreva o valor 2\n");
    scanf("%d", &n2);

    if (n1 > n2)
        printf("%d, %d\n", n2, n1);
    else
        printf("%d, %d\n", n1, n2);
}
