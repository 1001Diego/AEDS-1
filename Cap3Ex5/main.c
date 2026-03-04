#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,perc,aumento,novosal;

    printf("Escreva o salario atual: ");
    scanf("%f",&sal);

    printf("Escreva o percentual de aumento: ");
    scanf("%f",&perc);

    aumento = sal * (perc/100);
    printf("Seu aumento foi de: %.2f\n",aumento);

    novosal = sal + aumento;
    printf("Seu novo salario eh: %.2f", novosal);

    return 0;
}
