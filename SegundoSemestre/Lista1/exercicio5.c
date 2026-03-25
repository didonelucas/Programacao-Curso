/*A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um programa que
leia o percentual de alunos reprovados na turma C, o percentual de aprovados na turma D,
calcule e escreva: a) O número de alunos reprovados na turma C. b) O número de alunos
reprovados na turma D. c) A percentagem de alunos reprovados em relação ao total de
alunos das duas turmas.*/
#include <stdio.h>
#define turmaC 60
#define turmaD 20

int main()
{
    int pRC, pRD,qRC,qRD,pRT;
    
    printf("Digite o percentual de alunos reprovados na turma C\n");
    scanf("%d",&pRC);
    qRC= (pRC*turmaC)/100;
    printf("Digite o percentual de alunos reprovados na turma D\n");
    scanf("%d",&pRD);
    qRD= (pRD*turmaD)/100;
    pRT= ((qRC+qRD)*100)/(turmaC+turmaD);
    
    printf("Número de alunos reprovados na turma C: %d\n",qRC);
    printf("Número de alunos reprovados na turma D: %d\n",qRD);
    printf("Porcentagem total de alunos reprovados: %d%\n",pRT);
    return 0;
}
