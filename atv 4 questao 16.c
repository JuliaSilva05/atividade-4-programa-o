//questao 16
#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    printf("Digite um numero de 1 a 5: ");
    ch = getchar();
    switch(ch){
        case '5': printf("Muito bom\n");break;
        case '4': printf("Bom\n");break;
        case '3': printf("Regular\n");break;
        case '2': printf("Insuficiente\n");break;
        case '1': printf("Muito insuficiente\n");break;
        default : printf("Sem pontuação.\n");
    }
    system("pause");
    return 0;
}
