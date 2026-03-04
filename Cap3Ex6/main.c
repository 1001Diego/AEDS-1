#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,salreceber,grat,imp;

    printf("Digite o salario atual: ");
    scanf("%f",&sal);

    grat = sal*1.05;
    imp = sal*1.07;
    salreceber = sal+grat-imp;

    printf("Isso eh sua gratificacao: %.2f\n", grat);
    printf("Isso sao os impostos: %.2f\n", imp);
    printf("Esse eh o seu salario final: %.2f\n", salreceber);

    return 0;
}
