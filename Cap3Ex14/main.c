#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nasceu,ano_atual,idade_2050,idade_atual;

    printf("Ano de Nascimento: ");
    scanf("%d",&ano_nasceu);

    printf("Ano Atual: ");
    scanf("%d",&ano_atual);

    idade_atual = ano_atual - ano_nasceu;
    idade_2050 = 2050 - ano_nasceu;

    printf("Em %d voce completa %d anos!\n",ano_atual,idade_atual);

    printf("Em 2050 voce completa %d anos!",idade_2050);

    return 0;
}
