#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ang,alt,escada,radiano;

    printf("Digite o angulo do triangulo: ");
    scanf("%f",&ang);

    printf("Digite a altura do triangulo: ");
    scanf("%f",&alt);

    radiano = ang*3.14/180;

    escada = alt/radiano;

    printf("A medida da escada eh: %.2f metros",escada);

    return 0;
}
