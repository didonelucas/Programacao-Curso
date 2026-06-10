#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct tarefa{
  char nome[50];
  char descricao[200];
  char data_limite[10];
  char categoria[20];
  int prioridade;
}tarefa[MAX];

int menu(void);

int main(){
  opcao = menu();
}

int menu(void){
  int i=0;

  while(i<1 || i>6){
    printf("MENU:\n");
    printf("1. Inserir tarefa\n");
    printf("2. Buscar tarefa\n");
    printf("3. Listar tarefas\n");
    printf("4. Editar tarefa\n");
    printf("5. Excluir tarefa\n");
    printf("6. Sair\n");
  }
  getchar();
  return i;
}
