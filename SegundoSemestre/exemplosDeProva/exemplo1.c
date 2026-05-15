/*A sua tarefa é desenvolver a função calcula, que recebe a matriz horas_de_frio e o vetor
horas_de_frio_mes_media e devolve, por referência, o vetor perc_horas_de_frio_mes e
o valor perc_total_horas_de_frio que contém, respectivamente, os percentuais de horas de
frio mensais em relação à media histórica do mês e o percentual do total de horas de frios dos
meses em relação ao total da média histórica.*/

#include <stdio.h>
void calcula(int horas_de_frio[5][5], int horas_de_frio_mes_media[5], float perc_horas_de_frio_mes[5], float *perc_total_horas_de_frio);
int main() {
    int horas_de_frio_mes_media[5] = { 62, 124, 137, 112, 61 }; //de 1954 a 2017
    int horas_de_frio[5][5];
    float perc_horas_de_frio_mes[5];
    int m, s; //(m)ês e (s)emana
    float perc_total_horas_de_frio = 0.0; //percentual do total de horas em relação à media
        for (m = 0; m < 5; m++)
            for (s = 0; s < 5; s++)
                scanf("%d", &horas_de_frio[m][s]);
                calcula(horas_de_frio, horas_de_frio_mes_media, perc_horas_de_frio_mes, &perc_total_horas_de_frio);
                printf("Percentual de horas de frio por mes:\n");
        for (m = 0; m < 5; m++)
            printf("%.1f\n", perc_horas_de_frio_mes[m]);
            printf("Percentual do total de horas de frio em relacao a media:\n%.1f", perc_total_horas_de_frio);
        return 0;
}
void calcula(int horas_de_frio[5][5], int horas_de_frio_mes_media[5], float perc_horas_de_frio_mes[5], float *perc_total_horas_de_frio){
    int i,j,soma1,soma2=0,somaMedias=0;
    
    for(i=0; i<5; i++){
        soma1=0;
        for (j=0;j<5;j++){
            soma1=soma1+horas_de_frio[i][j];
        }
        somaMedias=somaMedias+horas_de_frio_mes_media[i];
        soma2=soma2+soma1;
        perc_horas_de_frio_mes[i]= (soma1*100.0)/horas_de_frio_mes_media[i];
    }
    *perc_total_horas_de_frio=(soma2*100.0)/somaMedias;
    return 0;
}
