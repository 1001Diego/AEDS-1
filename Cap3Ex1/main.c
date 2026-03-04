#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando numeros
    int n1, n2, n3, n4, soma;

    //Pedindo e lendo as variaveis
        printf("Para fazer a soma, escreva 4 numeros abaixo\n");
        printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
        printf("Digite o segundo numero: ");
    scanf("%d",&n2);
        printf("Digite o terceiro numero: ");
    scanf("%d",&n3);
        printf("Digite o quarto numero: ");
    scanf("%d",&n4);

    //Somando
    soma = n1 + n2 + n3 +n4;

    //Mostrando resultado na tela
    printf("O resultado da soma dos 4 numeros eh %d",soma);
    return 0;
}
