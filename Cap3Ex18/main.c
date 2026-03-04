#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saco_inicio,saco_fim,gato1,gato2;

    printf("Peso do saco de racao em Quilos: ");
    scanf("%f",&saco_inicio);

    printf("Digite a quantidade, em gramas, de racao dada ao Gato 1, em 1 dia: ");
    scanf("%f",&gato1);

    printf("Digite a quantidade, em gramas, de racao dada ao Gato 2, em 1 dia: ");
    scanf("%f",&gato2);

    gato1 = gato1/1000;
    gato2 = gato2/1000;
    saco_fim = saco_inicio - 5 * (gato1 + gato2);

    printf("O total de quilos restante eh: %.2f",saco_fim);

    return 0;
}
