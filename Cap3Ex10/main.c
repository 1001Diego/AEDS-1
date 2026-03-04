#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area,raio;

    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);

    area = 3.1415 * (raio * raio);

    printf("Essa eh a area do circulo: %.2f",area);

    return 0;
}
