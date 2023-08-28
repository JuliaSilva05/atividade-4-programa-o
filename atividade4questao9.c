//questao 9 atv 4
#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%s",&letra);
    switch(letra){
        case 'a': printf("Vogal\n");break;
        case 'e': printf("Vogal\n");break;
        case 'i': printf("Vogal\n");break;
        case 'o': printf("Vogal\n");break;
        case 'u': printf("Vogal\n");break;
        case 'A': printf("Vogal\n");break;
        case 'E': printf("Vogal\n");break;
        case 'I': printf("Vogal\n");break;
        case 'O': printf("Vogal\n");break;
        case 'U': printf("Vogal\n");break;
        default : printf("Consoante\n");
    }
    system("pause");
    return 0;
}