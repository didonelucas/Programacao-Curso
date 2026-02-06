#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora, min, seg;
};
struct horario h1[2];

int main()
{
    int s1, s2, dif, h,m,s, i;

    for (i=0; i<2;i++){
    printf("Digite a hora H1\n");
    scanf("%d",&h1[i].hora);
    printf("Digite o minuto H1\n");
    scanf("%d",&h1[i].min);
    printf("Digite o segundo H1\n");
    scanf("%d",&h1[i].seg);
    }
    
    s1= h1[0].hora * 3600 + h1[0].min*60 + h1[0].seg;
    s2= h1[1].hora * 3600 + h1[1].min*60 + h1[1].seg;
    
    dif = abs(s1-s2);
    
    h= dif/3600;
    m= (dif%3600)/60;
    s=dif%60;
    
    printf("Diferença entre os dois horários: %d:%d:%d",h,m,s);
}
