//questao 18
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    if (0<=x<1){
        printf("Bebê\n");
    } else if (1<=x<=12){
        printf("Criança\n");
    } else if (13<=x<=18){
        printf("Adolescente\n");
    } else if(x>18){
        printf("Adulto\n");
    }
    
    return 0;
}
