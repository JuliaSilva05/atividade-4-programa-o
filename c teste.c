// questao 1
#include <stdio.h>

int main(){
    int number;
    printf("Digite um numero inteiro: ");
    scanf("%d",&number);
    
    if (number>10) {
        printf("O valor é maior que 10\n");
    } else if (number==10) {
        printf("O valor é igual a 10\n");
    } else{
        printf("O valor é menor que 10\n");
    }
    return 0;
}