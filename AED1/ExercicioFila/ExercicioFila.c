#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define ELEMENTOS_FILA 10

typedef struct {
    int vetor[ELEMENTOS_FILA];
    int fim;
} Fila;

void push(int valor, Fila *fila);
void pop(Fila *fila);
bool isEmpty(Fila *fila);
bool isFull(Fila *fila);

int main(){
    Fila f;
    f.fim = 0; //Inicializo a Fila: Fim dela na posição 0
    int opcao=0,v;
    while(opcao!=4){
    printf("Menu:\n1.Adcionar a Fila;\n2.Remover da Fila\n3.Listar\n4.Sair\n");
    scanf("%d",&opcao);
        switch(opcao){
            case 1:
                printf("Digite o valor:\n");
                scanf("%d",&v);
                if(isFull(&f)==0){
                    push(v,&f);
                    }else{
                    printf("Pilha Cheia!\n");
                }
            break;
            case 2:
                pop(&f);
            break;
            case 3:
                for(int i=0; i<f.fim;i++){
                    printf("%d\n",f.vetor[i]);
                }
            break;
            case 4:
                printf("saindo...");
            break;
        }
    }


    return 0;
}

bool isEmpty(Fila *fila){
    return fila->fim==0;
}

bool isFull(Fila *fila){
    return fila->fim==ELEMENTOS_FILA;
}

void push(int valor, Fila *fila){
    fila->vetor[fila->fim]=valor;
    fila->fim++;
}

void pop(Fila *fila){
    int i;

    for(i=0;i<(fila->fim-1);i++){
        fila->vetor[i]=fila->vetor[i+1];
        fila->fim--;
    }
}
