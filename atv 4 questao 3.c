atv 4 questao 3

//questao 3
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero;
    scanf("%d",&numero);
    if (numero>0){
        printf("positivo\n");
    } else if (numero==0){
        printf("igual a zero\n");
    } else if (numero<0){
        printf("negativo\n");
    }

    return 0;
}