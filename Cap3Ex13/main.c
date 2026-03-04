#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num,pe,jardas,milhas,polegadas;

    printf("Para fazer a conversao, digite uma medida em pes: ");
    scanf("%f",&pe);

    polegadas = 12*pe;
    jardas = pe/3;
    milhas = jardas/1760;

    printf("O numero de %f pes eh: %f polegadas\n",pe,polegadas);
    printf("O numero de %f pes eh: %f jardas\n",pe,jardas);
    printf("O numero de %f pes eh: %f milhas\n",pe,milhas);

    return 0;
}
