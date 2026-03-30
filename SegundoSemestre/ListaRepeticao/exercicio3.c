/*Faça um programa que calcule o fatorial de um número inteiro n. Use for em um programa e while em outro*/

/*UTILIZANDO FOR:*/
#include <stdio.h>

int main()
{   
    int i,n;
    printf("Digite um número para calcular seu fatorial\n");
    scanf("%d",&n);
    for(i=1;n>1;n--){
        i=i*n;
    }
    printf("%d",i);
}
/*UTILIZANDO WHILE:*/
#include <stdio.h>

int main()
{   
    int i=1,n;
    printf("Digite um número para calcular seu fatorial\n");
    scanf("%d",&n);
    while(n>1){
        i=i*n;
        n--;
    }
    printf("%d",i);
}
