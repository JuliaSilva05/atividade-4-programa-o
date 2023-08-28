//atv 4 questao 5
//questao 5
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>y){
        printf("%d é maior",x);
    } else if (x==y){
        printf("São iguais");
    } else if (x<y){
        printf("%d é maior",y);
    }
    return 0;
}