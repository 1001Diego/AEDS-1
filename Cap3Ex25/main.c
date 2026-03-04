#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custo,ingresso,qtd_ing;

    printf("Digite o custo do espetaculo: ");
    scanf("%f",&custo);

    printf("Digite o valor do ingresso: ");
    scanf("%f",&ingresso);

    //Qtd necessaria para sair sem prejuizo
    qtd_ing = custo/ingresso;

    printf("A quantidade de ingressos vendidos para pagar o custo eh: %.f",qtd_ing);

    return 0;
}
