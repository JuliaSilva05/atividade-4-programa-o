//atv 4 questao 8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome_um[100],nome_dois[100];
    printf("Digite 2 nomes:\n");
    gets(nome_um);
    gets(nome_dois);
    
    if (strlen(nome_um)>strlen(nome_dois)){
        printf("%s possui mais caracteres",nome_um);
    } else{
        printf("%s possui mais caracteres",nome_dois );
    }
    system("pause");
    return 0;
}
