/*Fazer um programa que lê as 3 notas de n alunos (n é fornecido pelo usuário, no início do
programa) de uma turma de Programação (V1, V2 e MT, onde MT é a média dos
trabalhos). O programa calcula e imprime a média de cada aluno, usando a fórmula
M=(3*v1+3*v2+4*MT)/10. Após, o programa calcula e imprime a média da turma em V1,
em V2 e em MT. Finalmente, o programa conta quantos alunos obtiveram nota maior que
a média calculada para V1, imprimindo esta informação.*/

#include <stdio.h>

int main()
{   
    int i,j, n, alunosMaiorV1=0;
    float matriz[100][3], mediaAluno[100],somaMediaNotas[3],mediaNotas[3];
    printf("Digite a quantidade de alunos:\n");
    scanf("%d",&n);
    
    for(j=0;j<3;j++){
        somaMediaNotas[j] = 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
        printf("Digite a nota %d do aluno %d\n",j+1,i+1);
        scanf("%f",&matriz[i][j]);
        somaMediaNotas[j]=somaMediaNotas[j]+matriz[i][j];
        }
        mediaAluno[i]=((3*matriz[i][0]+ 3*matriz[i][1]+ 4*matriz[i][2])/10);
        printf("Média aluno %d: %f\n",i+1,mediaAluno[i]);
    }
    for(j=0;j<3;j++){
        mediaNotas[j] = somaMediaNotas[j] / n;
        printf("Média da turma na nota %d = %f\n",j,mediaNotas[j]);
    }    
    for(i=0;i<n;i++){
        if(matriz[i][0]>mediaNotas[0]){
            alunosMaiorV1++;
        }
    }
    printf("%d alunos tiraram nota maior que a média em V1",alunosMaiorV1);
    return 0;
}
