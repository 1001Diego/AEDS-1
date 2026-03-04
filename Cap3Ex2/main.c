#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, nota2, nota3, soma, media;

    printf("Digite as 3 notas abaixo\n");

    printf("Digite a primeira nota: ");
    scanf("%d",&nota);

    printf("Digite a segunda nota: ");
    scanf("%d",&nota2);

    printf("Digite a terceira nota: ");
    scanf("%d",&nota3);

    soma = nota + nota2 + nota3;
    media = soma/3;

    printf("A media das notas eh: %d",media);

    return 0;
}
