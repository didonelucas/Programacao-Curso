#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *string=NULL;
    char novoNome[50], nomeRemover[50], *alvo, *depoisAlvo;
    int opcao=0,i, novoTamanho, tamanhoRemover;
    while( opcao!=4 ){
        printf( "1.Adcionar nome\n2.Remover nome\n3.Listar\n4.Sair\n" );
        scanf( "%d",&opcao );
        getchar();
        switch( opcao ){
            case 1:
                printf( "Digite o nome a ser adcionado\n" );
                fgets( novoNome,50,stdin );
                if( string==NULL ){
                    string = ( char* )malloc(strlen( novoNome ) +1);
                    strcpy( string,novoNome );
                    printf( "Nome Adcionado\n" );
                } else{
                    novoTamanho = strlen( string ) + strlen( novoNome ) + 1;
                    string = ( char* )realloc( string, novoTamanho );
                    strcat( string,novoNome );
                    printf( "Nome Adcionado\n" );
                }
                break;
            case 2:
                printf( "Digite o nome a ser removido\n" );
                fgets( nomeRemover,50,stdin );
                alvo = strstr(string,nomeRemover);
                if( alvo!=NULL ){
                    tamanhoRemover = strlen( nomeRemover );
                    depoisAlvo = alvo + tamanhoRemover;
                    strcpy(alvo, depoisAlvo);
                    printf( "Nome Removido\n" );
                }else{
                    printf( "Nome não está presente na lista\n" );
                }
                break;
            case 3:
                printf( "%s",string );
                break;
            case 4:
                printf( "Saindo..." );
                exit( 1 );
        }
    }
}