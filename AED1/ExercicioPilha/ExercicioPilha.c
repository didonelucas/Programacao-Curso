#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

typedef struct{
    char nome[30];
    int idade;
}Pessoa;

typedef struct{
    Pessoa pessoas[MAX];
    int topo, base, limite;
}Pilha;

void Reset(Pilha *pilha);
bool isEmpty(Pilha *pilha);
bool isFull(Pilha *pilha);
bool PUSH(Pilha *pilha, Pessoa *item);
void POP(Pilha *pilha, Pessoa *pessoa);

int main(){
    int opcao=0,i;
    Pessoa pessoa;
    Pilha pilha;

    Reset(&pilha);
    while(opcao!=5){
        printf("Menu:\n1.Inserir Pessoa;\n2.Deletar pessoa do topo\n3.Limpar a Pilha\n4.Listar Pessoas\n5.Sair\n");
        scanf("%d",&opcao);
        getchar();
        switch(opcao){
            case 1:
                printf("Digite o nome:\n");
                fgets(pessoa.nome,30,stdin);
                printf("Digite a idade:\n");
                scanf("%d",&pessoa.idade);
                if(PUSH(&pilha,&pessoa)){
                    printf("Pessoa inserida!\n");
                }else{
                    printf("Pilha cheia!\n");
                }
                break;
            case 2:
                POP(&pilha,&pessoa);
                break;
            case 3:
                Reset(&pilha);
                break;
            case 4:
                for(i=0;i<pilha.topo;i++){
                    printf("%s\n%d\n",&pilha.pessoas[i].nome,pilha.pessoas[i].idade);
                }
                break;
            case 5:
                printf("Saindo...");
                exit(1);
                break;
        }
    }
    return 0;
}

void Reset(Pilha *pilha){
    pilha->topo = 0;
    pilha->base = 0;
    pilha->limite = MAX;
}

bool isEmpty(Pilha *pilha){
    return pilha->topo == 0;
}

bool isFull(Pilha *pilha){
    return pilha->topo == MAX;
}

bool PUSH(Pilha *pilha, Pessoa *item){
    if(!isFull(pilha)){
        pilha->pessoas[pilha->topo] = *item;
        pilha->topo++;
        return true;
    }else{
        return false;
    }
}

void POP(Pilha *pilha, Pessoa *pessoa){
    if(pilha->topo == 0){
        return;
    }
    pilha->topo--;
    *pessoa = pilha->pessoas[pilha->topo];
}
