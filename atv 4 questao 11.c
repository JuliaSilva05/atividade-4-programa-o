//questao 11
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int peso;
    float altura,imc;
    scanf("%d",&peso);
    scanf("%f",&altura);
    imc = peso / (altura*altura);
    
    if (imc<18.5){
        printf("Abaixo do peso\n");
    } else if (18.6<=imc<=24.9){
        printf("Peso normal\n");
    } else if (25<=imc<=29.99){
        printf("Sobrepeso\n");
    } else if(30<=imc<=34.9){
        printf("Obesa\n");
    } else if (imc>35){
        printf("Muito obesa\n");
    }
    
    return 0;
}