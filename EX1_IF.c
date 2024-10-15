#include<stdio.h>

void main()
{

    int numero;
    printf("insira o numero inteiro:");
    scanf("%d", &numero);

    // Para saber se o numero e divisivel por outro- utilizar % (resto divisão)
    // X % Y= 1, X não é divisivel por Y
    // X % Y= 0, é divisivel por Y

    if(numero%3 == 0)
    {
      numero = numero+1; 
      printf("numero e divisivel");
    }


}