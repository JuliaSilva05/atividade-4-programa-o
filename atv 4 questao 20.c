// questao 20
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,soma,sub,mult;
    float divi;
    scanf("%d",&x);
    scanf("%d",&y);
    int op;
    printf("Digite uma operação: ");
    scanf("%d",&op);
    soma = x + y;
    mult = x * y;
    sub = x - y;
    divi = x / y;
    switch(op){
        case 1: printf("Soma = %d",soma);break;
        case 2: printf("Subtração = %d\n",sub);break;
        case 3: printf("Multiplicação = %d\n",mult);break;
        case 4: printf("Divisão = %f\n",divi);break;
        
        default : printf("Nada\n");
    }
    system("pause");
    return 0;
}