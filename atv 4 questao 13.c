//questao 13
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario,x,y;
    scanf("%f",&salario);
    x = salario*(0.10);
    y = salario*(0.15);
    if (salario>1500){
        printf("%f",x);
    } else {
        printf("%f",y);
    } 
    
    return 0;
}
