/*Faça um programa que recebe lê n conceitos de alunos (n é fornecido no início do
programa) e conta quantos conceitos de cada tipo existem. Os conceitos possíveis são: A,
B, C, D, E e podem ser fornecidos com letras maiúsculas ou minúsculas.*/
/*Faça um programa que recebe lê n conceitos de alunos (n é fornecido no início do
programa) e conta quantos conceitos de cada tipo existem. Os conceitos possíveis são: A,
B, C, D, E e podem ser fornecidos com letras maiúsculas ou minúsculas.*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    int n,i,somaA=0, somaB=0, somaC=0, somaD=0, somaE=0;
    char conceito;
    printf("Quantos conceitos serão informados?\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Digite o conceito %d, pode ser A, B, C, D ou E",i);
        scanf(" %c",&conceito);
        conceito = tolower(conceito);
        switch(conceito){
            case 'a':
                somaA++;
                break;
            case 'b':
                somaB++;
                break;
            case 'c':
                somaC++;
                break;
            case 'd':
                somaD++;
                break;
            case 'e':
                somaE++;
                break;
        }
    }
    printf("Conceitos A informados:%d\nConceitos B informados:%d\nConceitos C informados:%d\nConceitos D informados:%d\nConceitos E informados:%d\n",somaA,somaB,somaC,somaD,somaE);
    return 0;
}
