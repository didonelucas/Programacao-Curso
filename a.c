#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string, novo_nome[50];
    int opcao=0;
    while(opcao!=4){
        while(opcao<1 || opcao>4){
            printf("1.Adcionar nome\n2.Remover nome\n3.Listar\n4.Sair\n");
            scanf("%d",&opcao);
        }
        switch(opcao){
            case 1:
                printf("Digite o nome a ser inserido\n");
                fgets(novo_nome,50,stdin);
                string = (char *)malloc(sizeof(strlen(novo_nome)));
                break;
            case 2:
                printf("Digite o nome a ser removido\n");

                break;
            case 3:
                printf("%s",string);
                break;
            case 4:
                printf("Saindo...");
                exit(1);
        }
    }
}
