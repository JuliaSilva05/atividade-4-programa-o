//questao 17
#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    printf("Digite um numero de 1 a 7: ");
    ch = getchar();
    switch(ch){
        case '1': printf("Domingo\n");break;
        case '2': printf("Segunda-feira\n");break;
        case '3': printf("Terça-feira\n");break;
        case '4': printf("Quarta-feira\n");break;
        case '5': printf("Quinta-feira\n");break;
        case '6': printf("Sexta-feira\n");break;
        case '7': printf("Sábado\n");break;
        default : printf("Sem pontuação.\n");
    }
    system("pause");
    return 0;
}