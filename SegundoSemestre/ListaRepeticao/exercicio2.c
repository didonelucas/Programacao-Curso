/*Considere a seguinte série 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, . . . e um inteiro positivo n.
Deseja-se: i) imprimir os n primeiros termos da série; e, ii) calcular e imprimir a soma dos
n primeiros termos. Desenvolva dois programas utilizando for e do while que resolvam
este problema.*/

/*Utilizando For:*/
#include <stdio.h>

int main()
{   
    int a=1,b=1,fibo=0,soma=2,i,n;
    printf("Quer saber o Fibonacci até qual número?");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=2;i<n;i++){
        fibo=a+b;
        printf("%d ",fibo);
        a=b;
        b=fibo;
        soma=soma+fibo;
    }
    printf("\nSoma dos %d primeiros termos= %d",n,soma);
    return 0;
}

#include <stdio.h>

int main()
{   
    int a=1,b=1,fibo=0,soma=2,i=2,n;
    printf("Quer saber o Fibonacci até qual número?");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    do{
        fibo=a+b;
        printf("%d ",fibo);
        a=b;
        b=fibo;
        soma=soma+fibo;
        i++;
    }while(i<n);
    
    printf("\nSoma dos %d primeiros termos= %d",n,soma);
    return 0;
}
