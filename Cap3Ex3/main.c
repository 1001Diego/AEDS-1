#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1,nota2,nota3,peso1,peso2,peso3,soma1,soma2,soma3,total,media;

    printf("Digite as 3 notas: ");
    scanf("%d%d%d",&nota1,&nota2,&nota3);

    printf("Digite os pesos das notas, respectivamente: ");
    scanf("%d%d%d",&peso1,&peso2,peso3);

    soma1 = nota1 * peso1;
    soma2 = nota2 * peso2;
    soma3 = nota3 * peso3;

    total = peso1+peso2+peso3;
    media = (soma1+soma2+soma3)/total;

    printf("A media das notas eh: %d",media);
    return 0;
}
