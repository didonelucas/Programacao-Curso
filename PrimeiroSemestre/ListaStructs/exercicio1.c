#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora, min, seg;
};
struct horario h1, h2;

int main()
{
    int s1, s2, dif, h,m,s;
    
    printf("Digite a hora H1\n");
    scanf("%d",&h1.hora);
    printf("Digite o minuto H1\n");
    scanf("%d",&h1.min);
    printf("Digite o segundo H1\n");
    scanf("%d",&h1.seg);
    printf("Digite a hora H2\n");
    scanf("%d",&h2.hora);
    printf("Digite o minuto H2\n");
    scanf("%d",&h2.min);
    printf("Digite o segundo H2\n");
    scanf("%d",&h2.seg);
    
    s1= h1.hora * 3600 + h1.min*60 + h1.seg;
    s2= h2.hora * 3600 + h2.min*60 + h2.seg;
    
    dif = abs(s1-s2);
    
    h= dif/3600;
    m= (dif%3600)/60;
    s=dif%60;
    
    printf("Diferença entre os dois horários: %d:%d:%d",h,m,s);
}
