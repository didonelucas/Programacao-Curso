/*Considere a seguinte série 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, . . . e um inteiro positivo n.
Deseja-se: i) imprimir os n primeiros termos da série; e, ii) calcular e imprimir a soma dos
n primeiros termos. Desenvolva dois programas utilizando for e do while que resolvam
este problema.*/

/*Utilizando For:*/
#include <stdio.h>
#define n 30

int main()
{
    int a=1,b=0,aux,fibo=0,soma=0,i;
    
    for(i=0;i<n;i++){
        fibo=fibo+a;
        aux=a+b;
        a=b;
        b=aux;
        printf("%d ",fibo);
        soma=soma+fibo;
    }
    printf("\nSoma dos %d primeiros termos= %d",n,soma);
    return 0;
}

/*Utilizando Do While:*/
#include <stdio.h>
#define n 30

int main()
{
    int a=1,b=0,aux,fibo=0,soma=0,i=0;
    
    do{
        fibo=fibo+a;
        aux=a+b;
        a=b;
        b=aux;
        printf("%d ",fibo);
        soma=soma+fibo;
        i++;
    }while(i<n);
    
    printf("\nSoma dos %d primeiros termos= %d",n,soma);
    return 0;
}
