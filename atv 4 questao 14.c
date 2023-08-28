//questao 14
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    if (x%3==0 && x%5==0){
        printf("É divisível por 3 e 5 ao mesmo tempo\n");
    } else{
        printf("Não é divisível por 3 e 5\n");
    }
    
    return 0;
}

