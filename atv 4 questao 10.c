//questao 10
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if (x>z){
        int tmp = z;
        z = x;
        x = tmp;
    }
    if (x>y){
        int tmp = y;
        y = x;
        x = tmp;
    }
    if (y>z){
        int tmp = z;
        z = y;
        y = tmp;
    }
    printf("%d %d %d",x,y,z);
    return 0;
}