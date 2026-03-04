#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;

    printf("Escreva a base e altura do triangulo: ");
    scanf("%f%f",&base,&altura);

    area = (base*altura)/2;

    printf("Essa eh a area do triangulo: %2.f",area);

    return 0;
}
