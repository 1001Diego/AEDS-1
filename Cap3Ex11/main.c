#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero,quadrado,cubo,r2,r3;

    printf("Digite um numero: ");
    scanf("%f",&numero);

    quadrado = pow(numero,2);
    printf("O quadrado de %.2f eh: %.2f\n",numero,quadrado);

    cubo = pow(numero,3);
    printf("O cubo de %.2f eh: %.2f\n",numero,cubo);

    r2 = sqrt(numero);
    printf("A raiz quadrada de %.2f eh: %.2f\n",numero,r2);

    r3 = cbrt(numero);
    printf("A raiz cubica de %.2f eh: %.2f\n",numero,r3);

    return 0;
}
