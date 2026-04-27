/*Escreva um programa para ler uma quantidade indeterminada de frases (considere que cada
frase possui no máximo 70 caracteres). Para cada frase imprima a quantidade de espaços em
branco que ela contém. O programa se encerra quando for digitada uma frase que não
contém espaços em branco.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j,cont=1,t[100];
    char frase[100][70];
    
    do{
        cont=0;
        printf("Digite uma frase\n");
        fgets(frase[i],70,stdin);
        t[i]=strlen(frase[i])- 1;
        for(j=0;j<t[i];j++){
        if(frase[i][j]==' '){
            cont++;
        }
        }
        printf("A frase contém %d espaços em branco\n",cont);
        i++;
    }while(cont!=0);
    return 0;
}
