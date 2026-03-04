#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dep,taxa,rend,total;

    printf("Escreva o valor de deposito: ");
    scanf("%f",&dep);

    printf("Escreva a taxa de juros: ");
    scanf("%f",&taxa);

    rend = dep * taxa/100;
    total = dep + rend;

    printf("O seu rendimento eh: %.2f\n", rend);

    printf("O seu total com rendimento eh: %.2f", total);

    return 0;
}
