//questao 15
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char dia[9];
    scanf("%s",dia);
    
    if(strcmp(dia,"domingo")==0){
        printf("Fim de semana");
    } else if(strcmp(dia,"sábado")==0){
        printf("Fim de semana");
    } else{
        printf("Dia útil");
    }
    return 0;
}
