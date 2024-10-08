#include<stdio.h>

void main()
{
    // 0-Declarar variaveis
    float teste1;
    float teste2;

    // 1-Recolher nota teste 1 e 2 
    printf("insira a nota teste1");
    scanf("%f", &teste1);
    printf("insira a nota teste2");
    scanf("%f", &teste2);
    
    // 2-Calcular media dos testes
    float media =(teste1 + teste2)/2;
    
    // 3-Apresentar resultado da media
    printf("media:%f", media);
}