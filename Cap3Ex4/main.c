#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sal, novosal;

    printf("Escreva o salario atual: ");
    scanf("%d",&sal);

    novosal = sal *1.25;

    printf("Novo salario: %d", novosal);

    return 0;
}
