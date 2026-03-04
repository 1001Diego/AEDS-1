#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num,inteira,fracionaria,arredondamento;

    printf("Digite um numero real: ");
    scanf("%f",&num);

    inteira = (int)num;
    fracionaria = (inteira - num)*(-1);
    arredondamento = round(num);


    printf("Parte inteira: %.2f\n",inteira);
    printf("Parte fracionaria: %.2f\n",fracionaria);
    printf("Arredondamento: %.2f",arredondamento);

    return 0;
}
