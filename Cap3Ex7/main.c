#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, salreceber, imp;

    printf("Escreva seu salario: ");
    scanf("%f",&sal);

    imp = sal * 0.10;
    salreceber = sal + 50 - imp;

    printf("Esse eh seu salario final: %2.f", salreceber);

    return 0;
}
