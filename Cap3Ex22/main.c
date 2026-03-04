#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal_min,qtd_kw,vlr_kw,vlr_pagar,desconto,vlr_desconto;

    printf("Valor do salario minimo: ");
    scanf("%f",&sal_min);

    printf("Quantidade de Quilowatts: ");
    scanf("%f",&qtd_kw);

    vlr_kw = sal_min/5;
    vlr_pagar = vlr_kw*qtd_kw;
    desconto = vlr_pagar*15/100;
    vlr_desconto = vlr_pagar-desconto;

    printf("O valor do Quilowatt eh: %.2f\n",vlr_kw);
    printf("O valor a ser pago eh: %.2f\n",vlr_pagar);
    printf("O valor com desconto eh: %.2f",vlr_desconto);

    return 0;
}
