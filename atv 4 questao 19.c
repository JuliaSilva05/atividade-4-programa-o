//questao 19
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Insira o seu estado civil");
    char est;
    est = getchar();
    switch(est){
        case 's': printf("Você é solteiro");break;
        case 'c': printf("Você é casado");break;
        case 'd': printf("Você é divorciado");break;
        case 'v': printf("Você é viúvo");break;
        
        default : printf("Nada\n");
    }
    system("pause");
    return 0;
}