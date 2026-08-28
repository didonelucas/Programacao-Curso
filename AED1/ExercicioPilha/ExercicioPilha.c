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
